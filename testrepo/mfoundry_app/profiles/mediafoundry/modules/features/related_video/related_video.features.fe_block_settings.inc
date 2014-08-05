<?php
/**
 * @file
 * related_video.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function related_video_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-related_video-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_video-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'video',
    ),
    'pages' => 'videos/*',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'affiliate_theme_one',
        'weight' => 1,
      ),
      'media_foundry_publisher' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'media_foundry_publisher',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Related Videos',
    'visibility' => 1,
  );

  return $export;
}
