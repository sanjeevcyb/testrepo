<?php
/**
 * @file
 * key_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function key_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create key_features content'.
  $permissions['create key_features content'] = array(
    'name' => 'create key_features content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create key_features content on assigned domains'.
  $permissions['create key_features content on assigned domains'] = array(
    'name' => 'create key_features content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any key_features content'.
  $permissions['delete any key_features content'] = array(
    'name' => 'delete any key_features content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete key_features content on assigned domains'.
  $permissions['delete key_features content on assigned domains'] = array(
    'name' => 'delete key_features content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own key_features content'.
  $permissions['delete own key_features content'] = array(
    'name' => 'delete own key_features content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any key_features content'.
  $permissions['edit any key_features content'] = array(
    'name' => 'edit any key_features content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own key_features content'.
  $permissions['edit own key_features content'] = array(
    'name' => 'edit own key_features content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update key_features content on assigned domains'.
  $permissions['update key_features content on assigned domains'] = array(
    'name' => 'update key_features content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
