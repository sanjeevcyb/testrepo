<?php
/**
 * @file
 * cart_override_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cart_override_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_view_override_page_view';
  $strongarm->value = 'commerce_cart_form_custom';
  $export['commerce_cart_view_override_page_view'] = $strongarm;

  return $export;
}
