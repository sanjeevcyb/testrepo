<?php
/**
 * @file
 * video_presets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_presets_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
