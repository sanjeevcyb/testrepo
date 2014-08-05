<?php
/**
 * @file
 * catalogue_with_filter.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function catalogue_with_filter_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-affiliate_catalogue_page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'affiliate_catalogue_page',
    'module' => 'quicktabs',
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
