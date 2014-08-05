<?php
/**
 * @file
 * workbench_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function workbench_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
