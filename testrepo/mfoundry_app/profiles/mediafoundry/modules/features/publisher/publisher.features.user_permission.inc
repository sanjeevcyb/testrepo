<?php
/**
 * @file
 * publisher.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function publisher_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create publisher content'.
  $permissions['create publisher content'] = array(
    'name' => 'create publisher content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publisher content on assigned domains'.
  $permissions['create publisher content on assigned domains'] = array(
    'name' => 'create publisher content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any publisher content'.
  $permissions['delete any publisher content'] = array(
    'name' => 'delete any publisher content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publisher content'.
  $permissions['delete own publisher content'] = array(
    'name' => 'delete own publisher content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete publisher content on assigned domains'.
  $permissions['delete publisher content on assigned domains'] = array(
    'name' => 'delete publisher content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any publisher content'.
  $permissions['edit any publisher content'] = array(
    'name' => 'edit any publisher content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publisher content'.
  $permissions['edit own publisher content'] = array(
    'name' => 'edit own publisher content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update publisher content on assigned domains'.
  $permissions['update publisher content on assigned domains'] = array(
    'name' => 'update publisher content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
