<?php
/**
 * @file
 * menu_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-add-content.
  $menus['menu-add-content'] = array(
    'menu_name' => 'menu-add-content',
    'title' => 'Manage Contents',
    'description' => 'Enables you to add contents.',
  );
  // Exported menu: menu-admin-menus.
  $menus['menu-admin-menus'] = array(
    'menu_name' => 'menu-admin-menus',
    'title' => 'Publisher Setting',
    'description' => 'Allows you manage publisher information',
  );
  // Exported menu: menu-affiliated-content.
  $menus['menu-affiliated-content'] = array(
    'menu_name' => 'menu-affiliated-content',
    'title' => 'Affiliated Content',
    'description' => 'Enables you manage Affiliated content',
  );
  // Exported menu: menu-domain.
  $menus['menu-domain'] = array(
    'menu_name' => 'menu-domain',
    'title' => 'Manage Affiliates',
    'description' => 'Enables you to manage Domain related settings',
  );
  // Exported menu: menu-manage-categories.
  $menus['menu-manage-categories'] = array(
    'menu_name' => 'menu-manage-categories',
    'title' => 'Manage Categories',
    'description' => '',
  );
  // Exported menu: menu-media.
  $menus['menu-media'] = array(
    'menu_name' => 'menu-media',
    'title' => 'Configure Wowza',
    'description' => 'Allows you to manage Media related information',
  );
  // Exported menu: menu-people.
  $menus['menu-people'] = array(
    'menu_name' => 'menu-people',
    'title' => 'Manage Users',
    'description' => 'Allows you to manage the list of users.',
  );
  // Exported menu: menu-store.
  $menus['menu-store'] = array(
    'menu_name' => 'menu-store',
    'title' => 'Store',
    'description' => 'Enables you to manage store related information',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliated Content');
  t('Allows you manage publisher information');
  t('Allows you to manage Media related information');
  t('Allows you to manage the list of users.');
  t('Configure Wowza');
  t('Enables you manage Affiliated content');
  t('Enables you to add contents.');
  t('Enables you to manage Domain related settings');
  t('Enables you to manage store related information');
  t('Manage Affiliates');
  t('Manage Categories');
  t('Manage Contents');
  t('Manage Users');
  t('Publisher Setting');
  t('Store');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
