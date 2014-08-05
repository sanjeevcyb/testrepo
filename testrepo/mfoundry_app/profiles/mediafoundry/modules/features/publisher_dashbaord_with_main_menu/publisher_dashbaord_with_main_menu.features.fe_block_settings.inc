<?php
/**
 * @file
 * publisher_dashbaord_with_main_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function publisher_dashbaord_with_main_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -34,
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

  $export['menu-menu-add-content'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-add-content',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -18,
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

  $export['menu-menu-admin-menus'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-admin-menus',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -9,
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

  $export['menu-menu-affiliated-content'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-affiliated-content',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -38,
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

  $export['menu-menu-domain'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-domain',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -22,
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

  $export['menu-menu-manage-categories'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-manage-categories',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 6,
      'Publisher Admin' => 3,
      'Publisher Contributor' => 4,
      'Publisher Editor' => 5,
    ),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -21,
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
    'title' => 'Manage Categories',
    'visibility' => 0,
  );

  $export['menu-menu-media'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-media',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -36,
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

  $export['menu-menu-people'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-people',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -17,
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

  $export['menu-menu-store'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-store',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => -23,
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

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'affiliate_theme_one' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'affiliate_theme_one',
        'weight' => 14,
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
