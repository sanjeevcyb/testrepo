<?php
/**
 * @file
 * tags_in_tags.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tags_in_tags_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['tagclouds-1'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 1,
    'module' => 'tagclouds',
    'node_types' => array(
      0 => 'blog',
      1 => 'live_event',
      2 => 'video',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'affiliate_theme_one',
        'weight' => 2,
      ),
      'media_foundry_publisher' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'media_foundry_publisher',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Tag Cloud',
    'visibility' => 2,
  );

  return $export;
}
