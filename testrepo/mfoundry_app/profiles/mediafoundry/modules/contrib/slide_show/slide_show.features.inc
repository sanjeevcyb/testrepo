<?php
/**
 * @file
 * slide_show.features.inc
 */

/**
 * Implements hook_node_info().
 */
function slide_show_node_info() {
  $items = array(
    'slide_show_image' => array(
      'name' => t('Slide Show Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
