<?php
/**
 * @file
 * live_evnt_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function live_evnt_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function live_evnt_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function live_evnt_content_type_node_info() {
  $items = array(
    'live_event' => array(
      'name' => t('Live event'),
      'base' => 'node_content',
      'description' => t('A content type to manage live events.'),
      'has_title' => '1',
      'title_label' => t('Event Name'),
      'help' => '',
    ),
  );
  return $items;
}
