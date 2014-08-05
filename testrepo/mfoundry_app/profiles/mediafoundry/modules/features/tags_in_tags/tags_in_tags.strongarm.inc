<?php
/**
 * @file
 * tags_in_tags.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tags_in_tags_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_block_tags_1';
  $strongarm->value = '12';
  $export['tagclouds_block_tags_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_block_tags_2';
  $strongarm->value = '12';
  $export['tagclouds_block_tags_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_display_node_link';
  $strongarm->value = 1;
  $export['tagclouds_display_node_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_display_type';
  $strongarm->value = 'style';
  $export['tagclouds_display_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_levels';
  $strongarm->value = '6';
  $export['tagclouds_levels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_page_amount';
  $strongarm->value = '60';
  $export['tagclouds_page_amount'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_sort_order';
  $strongarm->value = 'title,asc';
  $export['tagclouds_sort_order'] = $strongarm;

  return $export;
}
