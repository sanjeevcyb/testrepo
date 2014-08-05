<?php
/**
 * @file
 * twitter_login.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function twitter_login_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['twitter_signin-0'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 0,
    'module' => 'twitter_signin',
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
        'weight' => -2,
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
