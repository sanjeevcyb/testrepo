<?php
/**
 * @file
 * publisher_dashbaord_with_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function publisher_dashbaord_with_main_menu_menu_default_menu_links() {
  global $user;
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/9

  $query_about_us = db_select('node', 'n');
  $query_about_us->fields('n', array('nid'))->condition('n.uuid', 'c8dcbad3-2bb4-43f1-8558-7cefc51bda93', '=');
  $result_about_us = $query_about_us->execute();
  $get_about_us_nid = $result_about_us->fetchObject();   

  $menu_links['main-menu_about-us:node/'.$get_about_us_nid->nid] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/'.$get_about_us_nid->nid,
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:node/'.$get_about_us_nid->nid,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_admin:publisher/configuration
  $menu_links['main-menu_admin:publisher/configuration'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publisher/configuration',
    'router_path' => 'publisher/configuration',
    'link_title' => 'Admin',
    'options' => array(
      'identifier' => 'main-menu_admin:publisher/configuration',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      /*'domain_menu_access' => array(
        'show' => array(
          'd2' => 'd2',
          'd4' => 'd4',
        ),
      ),*/
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_catalogue:product-catalogue
  $menu_links['main-menu_catalogue:product-catalogue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product-catalogue',
    'router_path' => 'product-catalogue',
    'link_title' => 'Catalogue',
    'options' => array(
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_catalogue:product-catalogue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Exported menu link: main-menu_contact-us:node/1

  $query_contact_us = db_select('node', 'n');
  $query_contact_us->fields('n', array('nid'))->condition('n.uuid', "8cbb94d9-9fb7-47aa-bd4e-988ea340339f", '=');
  $result_contact_us = $query_contact_us->execute();
  $get_contact_us_nid = $result_contact_us->fetchObject();

  $menu_links['main-menu_contact-us:node/'.$get_contact_us_nid->nid] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/'.$get_contact_us_nid->nid,
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'alter' => TRUE,
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:node/'.$get_contact_us_nid->nid,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dashboard:media/dashboard
  $menu_links['main-menu_dashboard:media/dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media/dashboard',
    'router_path' => 'media/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'identifier' => 'main-menu_dashboard:media/dashboard',
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
        ),
        'hide' => array(
          'd2' => 'd2',
          'd4' => 'd4',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_media:medialist
  $menu_links['main-menu_media:medialist'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'medialist',
    'router_path' => 'medialist',
    'link_title' => 'Media',
    'options' => array(
      'identifier' => 'main-menu_media:medialist',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-subscription:user-subscriptions

  $menu_links['main-menu_my-subscription:user-subscriptions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user-subscriptions',
    'router_path' => 'user-subscriptions',
    'link_title' => 'My Subscription',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'menu_per_role' =>  array(
        'hide' => array(
          '1' => '1',
        ),
      ),
      'identifier' => 'main-menu_my-subscription:user-subscriptions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 1,
  );

  // Exported menu link: main-menu_publisher-account:publisher-account
  $menu_links['main-menu_publisher-account:publisher-account'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publisher-account',
    'router_path' => 'publisher-account',
    'link_title' => 'Publisher Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_publisher-account:publisher-account',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_support:node/3

  $query_support = db_select('node', 'n');
  $query_support->fields('n', array('nid'))->condition('n.uuid', "1745983b-16e6-4fbf-b050-865544692b8f", '=');
  $result_support = $query_support->execute();
  $get_support_nid = $result_support->fetchObject();

  $menu_links['main-menu_support:node/'.$get_support_nid->nid] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/'.$get_support_nid->nid,
    'router_path' => 'node/%',
    'link_title' => 'Support',
    'options' => array(
      'alter' => TRUE,
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_support:node/'.$get_support_nid->nid,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Admin');
  t('Blog');
  t('Catalogue');
  t('Contact Us');
  t('Dashboard');
  t('Media');
  t('My Subscription');
  t('Publisher Account');
  t('Support');


  return $menu_links;
}
