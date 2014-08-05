<?php
/**
 * @file
 * permission_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function permission_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access domain settings form'.
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_settings',
  );

  // Exported permission: 'access entities affiliate on assigned domains'.
  $permissions['access entities affiliate on assigned domains'] = array(
    'name' => 'access entities affiliate on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain_entity',
  );

  // Exported permission: 'access files on CDN when in testing mode'.
  $permissions['access files on CDN when in testing mode'] = array(
    'name' => 'access files on CDN when in testing mode',
    'roles' => array(),
    'module' => 'cdn',
  );

  // Exported permission: 'access inactive domains'.
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access per-page statistics'.
  $permissions['access per-page statistics'] = array(
    'name' => 'access per-page statistics',
    'roles' => array(),
    'module' => 'cdn',
  );

  // Exported permission: 'access product display manager'.
  $permissions['access product display manager'] = array(
    'name' => 'access product display manager',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_pdm',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access the domain content page'.
  $permissions['access the domain content page'] = array(
    'name' => 'access the domain content page',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer CDN configuration'.
  $permissions['administer CDN configuration'] = array(
    'name' => 'administer CDN configuration',
    'roles' => array(),
    'module' => 'cdn',
  );

  // Exported permission: 'administer JW Player presets'.
  $permissions['administer JW Player presets'] = array(
    'name' => 'administer JW Player presets',
    'roles' => array(),
    'module' => 'jw_player',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer configuration management'.
  $permissions['administer configuration management'] = array(
    'name' => 'administer configuration management',
    'roles' => array(),
    'module' => 'configuration_ui',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer domains'.
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu_per_role'.
  $permissions['administer menu_per_role'] = array(
    'name' => 'administer menu_per_role',
    'roles' => array(),
    'module' => 'menu_per_role',
  );

  // Exported permission: 'administer menus per domain'.
  $permissions['administer menus per domain'] = array(
    'name' => 'administer menus per domain',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_menu_access',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer node limits'.
  $permissions['administer node limits'] = array(
    'name' => 'administer node limits',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node_limit',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer own domains'.
  $permissions['administer own domains'] = array(
    'name' => 'administer own domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_admin',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer piwik'.
  $permissions['administer piwik'] = array(
    'name' => 'administer piwik',
    'roles' => array(),
    'module' => 'piwik',
  );

  // Exported permission: 'administer product display types'.
  $permissions['administer product display types'] = array(
    'name' => 'administer product display types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_backoffice_product',
  );

  // Exported permission: 'administer product pricing'.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(),
    'module' => 'sharethis',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simple fb'.
  $permissions['administer simple fb'] = array(
    'name' => 'administer simple fb',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'simple_fb_connect',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer stylizer'.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: 'administer taxes'.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer total control'.
  $permissions['administer total control'] = array(
    'name' => 'administer total control',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: 'administer video presets'.
  $permissions['administer video presets'] = array(
    'name' => 'administer video presets',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'assign domain editors'.
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass conversion video'.
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'convert on submission'.
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content on assigned domains'.
  $permissions['create article content on assigned domains'] = array(
    'name' => 'create article content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content on assigned domains'.
  $permissions['create blog content on assigned domains'] = array(
    'name' => 'create blog content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create live_event content'.
  $permissions['create live_event content'] = array(
    'name' => 'create live_event content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create live_event content on assigned domains'.
  $permissions['create live_event content on assigned domains'] = array(
    'name' => 'create live_event content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content on assigned domains'.
  $permissions['create page content on assigned domains'] = array(
    'name' => 'create page content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create video content on assigned domains'.
  $permissions['create video content on assigned domains'] = array(
    'name' => 'create video content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create webform content on assigned domains'.
  $permissions['create webform content on assigned domains'] = array(
    'name' => 'create webform content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any live_event content'.
  $permissions['delete any live_event content'] = array(
    'name' => 'delete any live_event content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete article content on assigned domains'.
  $permissions['delete article content on assigned domains'] = array(
    'name' => 'delete article content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete blog content on assigned domains'.
  $permissions['delete blog content on assigned domains'] = array(
    'name' => 'delete blog content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete domain content'.
  $permissions['delete domain content'] = array(
    'name' => 'delete domain content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete live_event content on assigned domains'.
  $permissions['delete live_event content on assigned domains'] = array(
    'name' => 'delete live_event content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own live_event content'.
  $permissions['delete own live_event content'] = array(
    'name' => 'delete own live_event content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete page content on assigned domains'.
  $permissions['delete page content on assigned domains'] = array(
    'name' => 'delete page content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in article_category'.
  $permissions['delete terms in article_category'] = array(
    'name' => 'delete terms in article_category',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in country'.
  $permissions['delete terms in country'] = array(
    'name' => 'delete terms in country',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in devices'.
  $permissions['delete terms in devices'] = array(
    'name' => 'delete terms in devices',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in feature_category'.
  $permissions['delete terms in feature_category'] = array(
    'name' => 'delete terms in feature_category',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subscription_type'.
  $permissions['delete terms in subscription_type'] = array(
    'name' => 'delete terms in subscription_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete video content on assigned domains'.
  $permissions['delete video content on assigned domains'] = array(
    'name' => 'delete video content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete webform content on assigned domains'.
  $permissions['delete webform content on assigned domains'] = array(
    'name' => 'delete webform content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any live_event content'.
  $permissions['edit any live_event content'] = array(
    'name' => 'edit any live_event content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit domain content'.
  $permissions['edit domain content'] = array(
    'name' => 'edit domain content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own live_event content'.
  $permissions['edit own live_event content'] = array(
    'name' => 'edit own live_event content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in article_category'.
  $permissions['edit terms in article_category'] = array(
    'name' => 'edit terms in article_category',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in country'.
  $permissions['edit terms in country'] = array(
    'name' => 'edit terms in country',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in devices'.
  $permissions['edit terms in devices'] = array(
    'name' => 'edit terms in devices',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in feature_category'.
  $permissions['edit terms in feature_category'] = array(
    'name' => 'edit terms in feature_category',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subscription_type'.
  $permissions['edit terms in subscription_type'] = array(
    'name' => 'edit terms in subscription_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'login to any domain'.
  $permissions['login to any domain'] = array(
    'name' => 'login to any domain',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_bonus_login_restrict',
  );

  // Exported permission: 'maintain nodeblock'.
  $permissions['maintain nodeblock'] = array(
    'name' => 'maintain nodeblock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeblock',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'piwik',
  );

  // Exported permission: 'override player dimensions'.
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish from assigned domain'.
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'publish from default domain'.
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'publish to any assigned domain'.
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 're convert video'.
  $permissions['re convert video'] = array(
    'name' => 're convert video',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'review content for all domains'.
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(),
    'module' => 'services',
  );

  // Exported permission: 'set domain access'.
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'set domain access status for all entities'.
  $permissions['set domain access status for all entities'] = array(
    'name' => 'set domain access status for all entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain_entity',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'touch files'.
  $permissions['touch files'] = array(
    'name' => 'touch files',
    'roles' => array(),
    'module' => 'cdn',
  );

  // Exported permission: 'update article content on assigned domains'.
  $permissions['update article content on assigned domains'] = array(
    'name' => 'update article content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update blog content on assigned domains'.
  $permissions['update blog content on assigned domains'] = array(
    'name' => 'update blog content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update live_event content on assigned domains'.
  $permissions['update live_event content on assigned domains'] = array(
    'name' => 'update live_event content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update page content on assigned domains'.
  $permissions['update page content on assigned domains'] = array(
    'name' => 'update page content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'update video content on assigned domains'.
  $permissions['update video content on assigned domains'] = array(
    'name' => 'update video content on assigned domains',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update webform content on assigned domains'.
  $permissions['update webform content on assigned domains'] = array(
    'name' => 'update webform content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'piwik',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use default thumb'.
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'use jeditable'.
  $permissions['use jeditable'] = array(
    'name' => 'use jeditable',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'jeditable',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use text format blog_text_format'.
  $permissions['use text format blog_text_format'] = array(
    'name' => 'use text format blog_text_format',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format custom_text_format'.
  $permissions['use text format custom_text_format'] = array(
    'name' => 'use text format custom_text_format',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format static_page_'.
  $permissions['use text format static_page_'] = array(
    'name' => 'use text format static_page_',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view mobile detect debug'.
  $permissions['view mobile detect debug'] = array(
    'name' => 'view mobile detect debug',
    'roles' => array(),
    'module' => 'mobile_detect',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'Publisher Contributor' => 'Publisher Contributor',
      'Publisher Editor' => 'Publisher Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Publisher Admin' => 'Publisher Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view unpublished domain content'.
  $permissions['view unpublished domain content'] = array(
    'name' => 'view unpublished domain content',
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
