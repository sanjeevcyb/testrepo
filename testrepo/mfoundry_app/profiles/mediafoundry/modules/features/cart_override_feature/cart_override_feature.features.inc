<?php
/**
 * @file
 * cart_override_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cart_override_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cart_override_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
