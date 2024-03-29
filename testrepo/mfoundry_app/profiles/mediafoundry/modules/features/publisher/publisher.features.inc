<?php
/**
 * @file
 * publisher.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function publisher_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function publisher_node_info() {
  $items = array(
    'publisher' => array(
      'name' => t('Publisher'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
