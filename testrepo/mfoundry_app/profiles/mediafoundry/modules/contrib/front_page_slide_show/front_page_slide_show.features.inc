<?php
/**
 * @file
 * front_page_slide_show.features.inc
 */

/**
 * Implements hook_node_info().
 */
function front_page_slide_show_node_info() {
  $items = array(
    'front_page_slide_show' => array(
      'name' => t('Front Page Slide Show'),
      'base' => 'node_content',
      'description' => t('Images spefically displayed on front page. This will be not published by default.'),
      'has_title' => '1',
      'title_label' => t('Image Name'),
      'help' => '',
    ),
  );
  return $items;
}
