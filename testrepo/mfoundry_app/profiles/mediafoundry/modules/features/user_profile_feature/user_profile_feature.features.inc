<?php
/**
 * @file
 * user_profile_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function user_profile_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
