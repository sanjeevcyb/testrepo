<?php
/**
 * @file
 * slide_show.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slide_show_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create slide_show_image content'.
  $permissions['create slide_show_image content'] = array(
    'name' => 'create slide_show_image content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slide_show_image content on assigned domains'.
  $permissions['create slide_show_image content on assigned domains'] = array(
    'name' => 'create slide_show_image content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any slide_show_image content'.
  $permissions['delete any slide_show_image content'] = array(
    'name' => 'delete any slide_show_image content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slide_show_image content'.
  $permissions['delete own slide_show_image content'] = array(
    'name' => 'delete own slide_show_image content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete slide_show_image content on assigned domains'.
  $permissions['delete slide_show_image content on assigned domains'] = array(
    'name' => 'delete slide_show_image content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any slide_show_image content'.
  $permissions['edit any slide_show_image content'] = array(
    'name' => 'edit any slide_show_image content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slide_show_image content'.
  $permissions['edit own slide_show_image content'] = array(
    'name' => 'edit own slide_show_image content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update slide_show_image content on assigned domains'.
  $permissions['update slide_show_image content on assigned domains'] = array(
    'name' => 'update slide_show_image content on assigned domains',
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
