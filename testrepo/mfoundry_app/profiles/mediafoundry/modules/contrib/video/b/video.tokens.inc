<?php
/**
 * @file
 *
 * Token module integration.
 */

/**
 * Implements hook_token_info().
 */
function video_token_info() {
  $info = array();

  $info['types']['video-field-instance'] = array(
    'name' => t('Video field values'),
    'description' => t('Tokens related to video field values.'),
  );

  $info['tokens']['video-field-instance']['video'] = array(
    'name' => t('Video'),
    'description' => t('The video file.'),
    'type' => 'file',
  );
  $info['tokens']['video-field-instance']['thumbnail'] = array(
    'name' => t('Thumbnail'),
    'description' => t('The thumbnail file.'),
    'type' => 'file',
  );

  return $info;
}

/**
 * Implements hook_token_info_alter().
 */
function video_token_info_alter(&$info) {
  // Define tokens for the Video fields we can find.
  $targets = _video_get_token_targets();
  foreach ($targets as $parent => $names) {
    foreach ($names as $name) {
      if (isset($info['tokens'][$parent][$name])) {
        $info['tokens'][$parent][$name]['type'] = 'video-field-instance';
      }
    }
  }
}

/**
 * Implements hook_tokens().
 */
function video_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  // This code was largely stolen from token.module
  if ($type == 'entity' && !empty($data['entity_type']) && !empty($data['entity']) && !empty($data['token_type'])) {
    $entity_type = $data['entity_type'];

    // The field API does weird stuff to the entity, so let's clone it.
    $entity = clone $data['entity'];

    // Reset the prepared view flag in case token generation is called from
    // inside field_attach_view().
    unset($entity->_field_view_prepared);

    // Find all target entities with video fields.
    $targets = _video_get_token_targets();

    // If this entity has video fields, process them.
    if (isset($targets[$entity_type])) {
      foreach ($targets[$entity_type] as $field_name) {
        if (empty($entity->{$field_name})) {
          continue;
        }

        // Replace the [entity:field-name] token only if token module added this
        // token.
        // @todo: Isn't this a no-op?
        if (isset($tokens[$field_name]) && _token_module($data['token_type'], $field_name) == 'video') {
          $original = $tokens[$field_name];

          $field_output = field_view_field($entity_type, $entity, $field_name, 'token', $langcode);
          $field_output['#token_options'] = $options;
          $field_output['#pre_render'][] = 'token_pre_render_field_token';
          $replacements[$original] = drupal_render($field_output);
        }

        // Include chained tokens for the video field.
        if ($video_tokens = token_find_with_prefix($tokens, $field_name)) {
          $video = $entity->{$field_name};
          // @todo: Find a decent way to handle multiple values.
          if ($video['und'][0]) {
            $video = $video['und'][0];

            $replacements += token_generate('video-field-instance', $video_tokens, array(
              'video' => $video,
              'entity' => $entity,
              'entity_type' => $entity_type,
            ), $options);
          }
        }
      }
    }

    // Remove the cloned object from memory.
    unset($entity);
  }

  // Process the chained tokens for a video field.
  if (($type == 'video-field-instance')) {
    $video = $data['video'];

    // Process tokens to display the video player and thumbnail image. Both of
    // these use theme functions which accept values not provided here.
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'video':
          $replacements[$original] = theme('video_formatter_player', array(
            'item' => $video,
            'image_style' => 'thumbnail',
            'entity' => $data['entity'],
            'entity_type' => $data['entity_type'],
          ));
        break;

        case 'thumbnail':
          $replacements[$original] = theme('video_formatter_thumbnail', array(
            'item' => $video,
            'image_style' => 'thumbnail',
            'entity' => $data['entity'],
            'entity_type' => $data['entity_type'],
          ));

        break;
      }
    }

    // Process any :video: subtokens for the video file.
    if ($video_tokens = token_find_with_prefix($tokens, 'video')) {
      $video_file = file_load($video['fid']);
      $replacements += token_generate('video-field-instance', $video_tokens, array(
        'file' => $video_file,
      ), $options);
    }

    // Process any :thumbnail: subtokens for the thumbnail file.
    if ($file_tokens = token_find_with_prefix($tokens, "thumbnail")) {
      $thumbnail_file = file_load($video['thumbnail']);
      $replacements += token_generate('file', $file_tokens, array(
        'file' => $thumbnail_file,
      ), $options);
    }
  }

  return $replacements;
}

/**
 * Helper to get video fields for token creation.
 *
 * @return array
 *     Contains arrays of types, keyed on field name.
 */
function _video_get_token_targets() {
  $targets = array();

  if (function_exists('field_info_field_map')) {
    $fields = field_info_field_map();
  }
  else {
    $fields = field_info_fields();
  }

  foreach ($fields as $field_name => $field) {
    $field_type = $field['type'];
    if ('video' == $field_type) {
      foreach ($field['bundles'] as $entity_type => $bundles) {
        $targets[$entity_type][] = $field_name;
      }
    }
  }

  return $targets;
}
