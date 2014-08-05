<?php
/**
 * @file
 * front_page_slide_show.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_slide_show_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create front_page_slide_show content'.
  $permissions['create front_page_slide_show content'] = array(
    'name' => 'create front_page_slide_show content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create front_page_slide_show content on assigned domains'.
  $permissions['create front_page_slide_show content on assigned domains'] = array(
    'name' => 'create front_page_slide_show content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any front_page_slide_show content'.
  $permissions['delete any front_page_slide_show content'] = array(
    'name' => 'delete any front_page_slide_show content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete front_page_slide_show content on assigned domains'.
  $permissions['delete front_page_slide_show content on assigned domains'] = array(
    'name' => 'delete front_page_slide_show content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own front_page_slide_show content'.
  $permissions['delete own front_page_slide_show content'] = array(
    'name' => 'delete own front_page_slide_show content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any front_page_slide_show content'.
  $permissions['edit any front_page_slide_show content'] = array(
    'name' => 'edit any front_page_slide_show content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own front_page_slide_show content'.
  $permissions['edit own front_page_slide_show content'] = array(
    'name' => 'edit own front_page_slide_show content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update front_page_slide_show content on assigned domains'.
  $permissions['update front_page_slide_show content on assigned domains'] = array(
    'name' => 'update front_page_slide_show content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
