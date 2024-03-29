<?php
/**
 * @file
 * twitter_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function twitter_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'post to twitter'.
  $permissions['post to twitter'] = array(
    'name' => 'post to twitter',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter_post',
  );

  return $permissions;
}
