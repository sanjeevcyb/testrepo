<?php
/**
 * @file
 * menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_feature_menu_default_menu_links() {
  $menu_links = array();

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
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_article:node/add/article
  $menu_links['menu-add-content_article:node/add/article'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to add article',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_article:node/add/article',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_blogs:manage-blog
  $menu_links['menu-add-content_blogs:manage-blog'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'manage-blog',
    'router_path' => 'manage-blog',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_blogs:manage-blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_create-blog:node/add/blog
  $menu_links['menu-add-content_create-blog:node/add/blog'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Create Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to add blogs.',
      ),
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_create-blog:node/add/blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_key-features:manage-key-features
  $menu_links['menu-add-content_key-features:manage-key-features'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'manage-key-features',
    'router_path' => 'manage-key-features',
    'link_title' => 'Key Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to add key features',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_key-features:manage-key-features',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_live-events:node/add/live-event
  $menu_links['menu-add-content_live-events:node/add/live-event'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/live-event',
    'router_path' => 'node/add/live-event',
    'link_title' => 'Live Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to add Live Event.',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_live-events:node/add/live-event',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_manage-slide-show-images:manage-slide-show-images
  $menu_links['menu-add-content_manage-slide-show-images:manage-slide-show-images'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'manage-slide-show-images',
    'router_path' => 'manage-slide-show-images',
    'link_title' => 'Manage Slide Show Images',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to edit  front page slide show',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_manage-slide-show-images:manage-slide-show-images',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_manage-static-pages:manage-static-pages
  $menu_links['menu-add-content_manage-static-pages:manage-static-pages'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'manage-static-pages',
    'router_path' => 'manage-static-pages',
    'link_title' => 'Manage Static Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage static pages',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_manage-static-pages:manage-static-pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-add-content_my-workbench:admin/workbench
  $menu_links['menu-add-content_my-workbench:admin/workbench'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-add-content_my-workbench:admin/workbench',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-admin-menus_manage-publisher-information:node/21/edit
  $menu_links['menu-admin-menus_manage-publisher-information:node/21/edit'] = array(
    'menu_name' => 'menu-admin-menus',
    'link_path' => 'node/21/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Manage Publisher Information',
    'options' => array(
      'attributes' => array(
        'title' => 'Helps you to manage publisher information',
      ),
      'query' => array(
        'destination' => 'admin/content',
      ),
      'identifier' => 'menu-admin-menus_manage-publisher-information:node/21/edit',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-affiliated-content_affiliate-site-1-content:admin/domain/content/2
  $menu_links['menu-affiliated-content_affiliate-site-1-content:admin/domain/content/2'] = array(
    'menu_name' => 'menu-affiliated-content',
    'link_path' => 'admin/domain/content/2',
    'router_path' => 'admin/domain/content/2',
    'link_title' => 'Affiliate Site 1 Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to view and  manage Affiliate site 1 content',
      ),
      'identifier' => 'menu-affiliated-content_affiliate-site-1-content:admin/domain/content/2',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-affiliated-content_affiliate-site-2-content:admin/domain/content/3
  $menu_links['menu-affiliated-content_affiliate-site-2-content:admin/domain/content/3'] = array(
    'menu_name' => 'menu-affiliated-content',
    'link_path' => 'admin/domain/content/3',
    'router_path' => 'admin/domain/content',
    'link_title' => 'Affiliate Site 2 Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to view and manage Affiliate Site 2 Content',
      ),
      'identifier' => 'menu-affiliated-content_affiliate-site-2-content:admin/domain/content/3',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-affiliated-content_contents-assigned-to-all-affiliates:admin/domain/content/all
  $menu_links['menu-affiliated-content_contents-assigned-to-all-affiliates:admin/domain/content/all'] = array(
    'menu_name' => 'menu-affiliated-content',
    'link_path' => 'admin/domain/content/all',
    'router_path' => 'admin/domain/content/all',
    'link_title' => 'Contents assigned to all Affiliates',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to view and manage the contents assigned to all affiliates',
      ),
      'identifier' => 'menu-affiliated-content_contents-assigned-to-all-affiliates:admin/domain/content/all',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-affiliated-content_media-foundry-content:admin/domain/content/1
  $menu_links['menu-affiliated-content_media-foundry-content:admin/domain/content/1'] = array(
    'menu_name' => 'menu-affiliated-content',
    'link_path' => 'admin/domain/content/1',
    'router_path' => 'admin/domain/content/1',
    'link_title' => 'Media Foundry Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage Media Foundry Content',
      ),
      'identifier' => 'menu-affiliated-content_media-foundry-content:admin/domain/content/1',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_batch-updating:admin/structure/domain/batch
  $menu_links['menu-domain_batch-updating:admin/structure/domain/batch'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain/batch',
    'router_path' => 'admin/structure/domain/batch',
    'link_title' => 'Batch Updating',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to edit values for multiple domains at one time',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_batch-updating:admin/structure/domain/batch',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_content-defaults:admin/structure/domain/nodes
  $menu_links['menu-domain_content-defaults:admin/structure/domain/nodes'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain/nodes',
    'router_path' => 'admin/structure/domain/nodes',
    'link_title' => 'Content Defaults',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to set default domain publishing options to the content types when new content will be created.',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_content-defaults:admin/structure/domain/nodes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_create-domain:admin/structure/domain/create
  $menu_links['menu-domain_create-domain:admin/structure/domain/create'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain/create',
    'router_path' => 'admin/structure/domain/create',
    'link_title' => 'Create Domain',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_create-domain:admin/structure/domain/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_domain-list:admin/structure/domain
  $menu_links['menu-domain_domain-list:admin/structure/domain'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain',
    'router_path' => 'admin/structure/domain',
    'link_title' => 'Domain List',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to view list of domains',
      ),
      'identifier' => 'menu-domain_domain-list:admin/structure/domain',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_domain-settings:admin/structure/domain/settings
  $menu_links['menu-domain_domain-settings:admin/structure/domain/settings'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain/settings',
    'router_path' => 'admin/structure/domain/settings',
    'link_title' => 'Domain Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage domain specific settings',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_domain-settings:admin/structure/domain/settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_entities:admin/structure/domain/entities
  $menu_links['menu-domain_entities:admin/structure/domain/entities'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain/entities',
    'router_path' => 'admin/structure/domain/entities',
    'link_title' => 'Entities',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows you to choose which entities are under Domain Access control',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_entities:admin/structure/domain/entities',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_manage-menu:admin/structure/menu/manage/main-menu
  $menu_links['menu-domain_manage-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Manage Menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_manage-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_manage-site-map:admin/config/search/sitemap
  $menu_links['menu-domain_manage-site-map:admin/config/search/sitemap'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/config/search/sitemap',
    'router_path' => 'admin/config/search/sitemap',
    'link_title' => 'Manage Site Map',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage the sitemap display contents',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_manage-site-map:admin/config/search/sitemap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-domain_user-defaults:admin/structure/domain/roles
  $menu_links['menu-domain_user-defaults:admin/structure/domain/roles'] = array(
    'menu_name' => 'menu-domain',
    'link_path' => 'admin/structure/domain/roles',
    'router_path' => 'admin/structure/domain/roles',
    'link_title' => 'User defaults',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you role setting behaviour based on domains and users',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-domain_user-defaults:admin/structure/domain/roles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-manage-categories_country:admin/structure/taxonomy/country
  $menu_links['menu-manage-categories_country:admin/structure/taxonomy/country'] = array(
    'menu_name' => 'menu-manage-categories',
    'link_path' => 'admin/structure/taxonomy/country',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Country',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-manage-categories_country:admin/structure/taxonomy/country',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-manage-categories_devices:admin/structure/taxonomy/devices
  $menu_links['menu-manage-categories_devices:admin/structure/taxonomy/devices'] = array(
    'menu_name' => 'menu-manage-categories',
    'link_path' => 'admin/structure/taxonomy/devices',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Devices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-manage-categories_devices:admin/structure/taxonomy/devices',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-manage-categories_media-category:admin/structure/taxonomy/category
  $menu_links['menu-manage-categories_media-category:admin/structure/taxonomy/category'] = array(
    'menu_name' => 'menu-manage-categories',
    'link_path' => 'admin/structure/taxonomy/category',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Media Category',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'domain_menu_access' => array(
        'show' => array(
          'd1' => 'd1',
        ),
      ),
      'identifier' => 'menu-manage-categories_media-category:admin/structure/taxonomy/category',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-media_manage-media-flavors-presets:admin/config/media/video/presets
  $menu_links['menu-media_manage-media-flavors-presets:admin/config/media/video/presets'] = array(
    'menu_name' => 'menu-media',
    'link_path' => 'admin/config/media/video/presets',
    'router_path' => 'admin/config/media/video/presets',
    'link_title' => 'Manage Media Flavors (Presets)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-media_manage-media-flavors-presets:admin/config/media/video/presets',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-media_wowza-configuration:admin/config/media/live_event_settings
  $menu_links['menu-media_wowza-configuration:admin/config/media/live_event_settings'] = array(
    'menu_name' => 'menu-media',
    'link_path' => 'admin/config/media/live_event_settings',
    'router_path' => 'admin/config/media/live_event_settings',
    'link_title' => 'Wowza configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage Wowza Live Streaming settings',
      ),
      'identifier' => 'menu-media_wowza-configuration:admin/config/media/live_event_settings',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-people_account-settings:admin/config/people/accounts
  $menu_links['menu-people_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'menu-people',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account Settings',
    'options' => array(
      'domain_menu_access' => array(
        'hide' => array(
          'd1' => 'd1',
        ),
      ),
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'This is for User Account Settings on Affiliate site',
      ),
      'identifier' => 'menu-people_account-settings:admin/config/people/accounts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-people_add-user:admin/people/create
  $menu_links['menu-people_add-user:admin/people/create'] = array(
    'menu_name' => 'menu-people',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add User',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-people_add-user:admin/people/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-people_user-list:admin/people/
  $menu_links['menu-people_user-list:admin/people/'] = array(
    'menu_name' => 'menu-people',
    'link_path' => 'admin/people/',
    'router_path' => 'admin/people',
    'link_title' => 'User List',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows you to manage user',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-people_user-list:admin/people/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-store_configuration:admin/commerce/config
  $menu_links['menu-store_configuration:admin/commerce/config'] = array(
    'menu_name' => 'menu-store',
    'link_path' => 'admin/commerce/config',
    'router_path' => 'admin/commerce/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to configure the Store settings',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-store_configuration:admin/commerce/config',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-store_customer-profiles:admin/commerce/customer-profiles
  $menu_links['menu-store_customer-profiles:admin/commerce/customer-profiles'] = array(
    'menu_name' => 'menu-store',
    'link_path' => 'admin/commerce/customer-profiles',
    'router_path' => 'admin/commerce/customer-profiles',
    'link_title' => 'Customer Profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage customer profiles',
      ),
      'identifier' => 'menu-store_customer-profiles:admin/commerce/customer-profiles',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-store_orders:admin/commerce/orders
  $menu_links['menu-store_orders:admin/commerce/orders'] = array(
    'menu_name' => 'menu-store',
    'link_path' => 'admin/commerce/orders',
    'router_path' => 'admin/commerce/orders',
    'link_title' => 'Orders',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to manage view and manage the order contents',
      ),
      'identifier' => 'menu-store_orders:admin/commerce/orders',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-store_products:admin/commerce/products
  $menu_links['menu-store_products:admin/commerce/products'] = array(
    'menu_name' => 'menu-store',
    'link_path' => 'admin/commerce/products',
    'router_path' => 'admin/commerce/products',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => 'Enables you to view and manage the products.',
      ),
      'identifier' => 'menu-store_products:admin/commerce/products',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account Settings');
  t('Add User');
  t('Affiliate Site 1 Content');
  t('Affiliate Site 2 Content');
  t('Article');
  t('Batch Updating');
  t('Blogs');
  t('Configuration');
  t('Content Defaults');
  t('Contents assigned to all Affiliates');
  t('Country');
  t('Create Blog');
  t('Create Domain');
  t('Customer Profiles');
  t('Devices');
  t('Domain List');
  t('Domain Settings');
  t('Entities');
  t('Key Features');
  t('Live Events');
  t('Manage Media Flavors (Presets)');
  t('Manage Menu');
  t('Manage Publisher Information');
  t('Manage Site Map');
  t('Manage Slide Show Images');
  t('Manage Static Pages');
  t('Media Category');
  t('Media Foundry Content');
  t('My Workbench');
  t('Orders');
  t('Products');
  t('Publisher Account');
  t('User List');
  t('User defaults');
  t('Wowza configuration');


  return $menu_links;
}
