<?php
/**
 * @file
 * metatag_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function metatag_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  return $export;
}
