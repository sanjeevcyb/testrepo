<?php
/**
 * @file
 * event_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function event_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function event_display_node_info() {
  $items = array(
    'event_display' => array(
      'name' => t('Event Display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
