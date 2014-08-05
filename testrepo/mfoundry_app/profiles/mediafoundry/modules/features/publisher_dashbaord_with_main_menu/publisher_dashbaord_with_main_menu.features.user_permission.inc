<?php
/**
 * @file
 * publisher_dashbaord_with_main_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function publisher_dashbaord_with_main_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer media settings'.
  $permissions['administer media settings'] = array(
    'name' => 'administer media settings',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'media_foundry_live_event',
  );

  return $permissions;
}
