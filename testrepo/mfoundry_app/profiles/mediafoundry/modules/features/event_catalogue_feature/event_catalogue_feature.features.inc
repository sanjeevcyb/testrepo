<?php
/**
 * @file
 * event_catalogue_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function event_catalogue_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function event_catalogue_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
