<?php
/**
 * @file
 * social_share.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function social_share_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => 0,
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
    'visibility' => 0,
  );

  return $export;
}
