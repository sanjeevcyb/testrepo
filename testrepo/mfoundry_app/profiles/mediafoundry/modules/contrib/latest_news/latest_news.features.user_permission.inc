<?php
/**
 * @file
 * latest_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function latest_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create latest_news content'.
  $permissions['create latest_news content'] = array(
    'name' => 'create latest_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create latest_news content on assigned domains'.
  $permissions['create latest_news content on assigned domains'] = array(
    'name' => 'create latest_news content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete any latest_news content'.
  $permissions['delete any latest_news content'] = array(
    'name' => 'delete any latest_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete latest_news content on assigned domains'.
  $permissions['delete latest_news content on assigned domains'] = array(
    'name' => 'delete latest_news content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete own latest_news content'.
  $permissions['delete own latest_news content'] = array(
    'name' => 'delete own latest_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any latest_news content'.
  $permissions['edit any latest_news content'] = array(
    'name' => 'edit any latest_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own latest_news content'.
  $permissions['edit own latest_news content'] = array(
    'name' => 'edit own latest_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'update latest_news content on assigned domains'.
  $permissions['update latest_news content on assigned domains'] = array(
    'name' => 'update latest_news content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  return $permissions;
}
