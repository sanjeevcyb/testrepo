<?php
/**
 * @file
 * userinformation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function userinformation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-userinformation-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'userinformation-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'affiliate_theme_one',
        'weight' => 1,
      ),
      'media_foundry_publisher' => array(
        'region' => '',
        'status' => 0,
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
