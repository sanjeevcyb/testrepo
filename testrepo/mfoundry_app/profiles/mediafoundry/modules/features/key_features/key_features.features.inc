<?php
/**
 * @file
 * key_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function key_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function key_features_node_info() {
  $items = array(
    'key_features' => array(
      'name' => t('Key Features'),
      'base' => 'node_content',
      'description' => t('The front page display blocks will be added'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
