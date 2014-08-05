<?php
/**
 * @file
 * user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_roles_user_default_roles() {
  $roles = array();

  // Exported role: Affiliate Admin.
  $roles['Affiliate Admin'] = array(
    'name' => 'Affiliate Admin',
    'weight' => 3,
    'uuid' => '00dde01d-8de6-4d5a-adc8-9995e9835841',
  );

  // Exported role: Publisher Admin.
  $roles['Publisher Admin'] = array(
    'name' => 'Publisher Admin',
    'weight' => 4,
    'uuid' => '6c2a7bdd-0f5c-4c75-b20d-7c7ca2f2c4a4',
  );

  // Exported role: Publisher Contributor.
  $roles['Publisher Contributor'] = array(
    'name' => 'Publisher Contributor',
    'weight' => 6,
    'uuid' => '0259a2f4-1386-4517-b125-f518cf723b2c',
  );

  // Exported role: Publisher Editor.
  $roles['Publisher Editor'] = array(
    'name' => 'Publisher Editor',
    'weight' => 5,
    'uuid' => '106a6282-433a-4cdb-aa2f-29e39d374f04',
  );

  return $roles;
}
