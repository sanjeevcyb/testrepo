<?php
/**
 * @file
 * domain_specific_tag_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function domain_specific_tag_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-domain_specific_tag_cloud-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'domain_specific_tag_cloud-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'videos/*',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => 'sidebar_second',
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
    'visibility' => 1,
  );

  return $export;
}
