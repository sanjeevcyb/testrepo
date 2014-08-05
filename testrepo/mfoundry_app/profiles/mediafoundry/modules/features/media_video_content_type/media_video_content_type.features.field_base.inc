<?php
/**
 * @file
 * media_video_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function media_video_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_add_to_subscription'
  $field_bases['field_add_to_subscription'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_add_to_subscription',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Free',
        2 => 'Paid',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_restricted_country'
  $field_bases['field_restricted_country'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_restricted_country',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'country',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_restricted_ip'
  $field_bases['field_restricted_ip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_restricted_ip',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_select_devices'
  $field_bases['field_select_devices'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_select_devices',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'devices',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_upload_video'
  $field_bases['field_upload_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upload_video',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'video',
    'settings' => array(
      'autoconversion' => 1,
      'autothumbnail' => 'auto',
      'default_video_thumbnail' => array(
        'fid' => 0,
        'remove_button' => 'Remove',
        'upload' => '',
        'upload_button' => 'Upload',
      ),
      'presets' => array(
        'MF_MP4_256x144p' => 0,
        'MF_MP4_416x234p' => 0,
        'MF_MP4_640x360p' => 0,
        'MF_MP4_960x540p' => 0,
        'MF_MP4_1280x720p' => 0,
        'MF_MP4_1920x1080p' => 0,
        'Small Player' => 0,
      ),
      'preview_video_thumb_style' => 'thumbnail',
      'thumbnail_format' => 'jpg',
      'uri_scheme' => 'private',
      'uri_scheme_converted' => 'private',
      'uri_scheme_thumbnails' => 'public',
    ),
    'translatable' => 0,
    'type' => 'video',
  );

  return $field_bases;
}
