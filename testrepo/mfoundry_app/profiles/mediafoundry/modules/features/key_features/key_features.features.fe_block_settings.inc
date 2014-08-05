<?php
/**
 * @file
 * key_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function key_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['nodeblock-45'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 45,
    'module' => 'nodeblock',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => 26,
      ),
      'media_foundry_publisher' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'media_foundry_publisher',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
