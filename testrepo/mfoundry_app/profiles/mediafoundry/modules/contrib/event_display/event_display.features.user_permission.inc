<?php
/**
 * @file
 * event_display.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function event_display_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event_display content'.
  $permissions['create event_display content'] = array(
    'name' => 'create event_display content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event_display content on assigned domains'.
  $permissions['create event_display content on assigned domains'] = array(
    'name' => 'create event_display content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any event_display content'.
  $permissions['delete any event_display content'] = array(
    'name' => 'delete any event_display content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete event_display content on assigned domains'.
  $permissions['delete event_display content on assigned domains'] = array(
    'name' => 'delete event_display content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own event_display content'.
  $permissions['delete own event_display content'] = array(
    'name' => 'delete own event_display content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_display content'.
  $permissions['edit any event_display content'] = array(
    'name' => 'edit any event_display content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_display content'.
  $permissions['edit own event_display content'] = array(
    'name' => 'edit own event_display content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update event_display content on assigned domains'.
  $permissions['update event_display content on assigned domains'] = array(
    'name' => 'update event_display content on assigned domains',
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
