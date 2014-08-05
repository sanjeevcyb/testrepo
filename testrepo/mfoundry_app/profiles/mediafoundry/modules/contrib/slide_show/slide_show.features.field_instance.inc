<?php
/**
 * @file
 * slide_show.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slide_show_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-slide_show_image-field_slide_image'
  $field_instances['node-slide_show_image-field_slide_image'] = array(
    'bundle' => 'slide_show_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'flexslider_fields',
        'settings' => array(
          'flexslider_optionset' => 'default',
          'flexslider_reference_img_src' => NULL,
        ),
        'type' => 'flexslider',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide_image',
    'label' => 'Slide Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slide Image');

  return $field_instances;
}
