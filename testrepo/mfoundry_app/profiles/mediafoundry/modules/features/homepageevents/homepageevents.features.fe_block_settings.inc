<?php
/**
 * @file
 * homepageevents.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function homepageevents_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-homepageevents-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'homepageevents-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'affiliate_theme_one',
        'weight' => 2,
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
