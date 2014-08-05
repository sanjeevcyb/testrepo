<?php
/**
 * @file
 * media_foundry_publisher_account.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_foundry_publisher_account_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
