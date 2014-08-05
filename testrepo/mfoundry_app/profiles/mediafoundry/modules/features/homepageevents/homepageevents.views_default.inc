<?php
/**
 * @file
 * homepageevents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepageevents_views_default_views() {
  $export = array();

$view = new view();
$view->name = 'homepageevents';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Homepageevents';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Homepageevents';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'live_event' => 'live_event',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'field_category_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'blog_text_format';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Video Node (field_premium_node) - reverse */
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['id'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['field'] = 'reverse_field_premium_node_commerce_product';
/* Relationship: Commerce Product: Referencing Node */
$handler->display->display_options['relationships']['field_display_name']['id'] = 'field_display_name';
$handler->display->display_options['relationships']['field_display_name']['table'] = 'commerce_product';
$handler->display->display_options['relationships']['field_display_name']['field'] = 'field_display_name';
$handler->display->display_options['relationships']['field_display_name']['relationship'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Subscription */
$handler->display->display_options['fields']['field_add_to_subscription']['id'] = 'field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['table'] = 'field_data_field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['field'] = 'field_add_to_subscription';
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
  'image_style' => 'homepage_freeevents',
  'image_link' => '',
);
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['relationship'] = 'field_display_name';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = 'Subscribe';
$handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'live_event' => 'live_event',
);
/* Filter criterion: Content: Category (field_category) */
$handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
$handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Category';
$handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
$handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['field_category_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
$handler->display->display_options['path'] = 'homepageevents';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Video Node (field_premium_node) - reverse */
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['id'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['field'] = 'reverse_field_premium_node_commerce_product';
/* Relationship: Commerce Product: Referencing Node */
$handler->display->display_options['relationships']['field_display_name']['id'] = 'field_display_name';
$handler->display->display_options['relationships']['field_display_name']['table'] = 'commerce_product';
$handler->display->display_options['relationships']['field_display_name']['field'] = 'field_display_name';
$handler->display->display_options['relationships']['field_display_name']['relationship'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['relationship'] = 'field_display_name';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '[nid]@@[title]@@[nid_1]';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'More';
$handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '30',
);
/* Field: Content: Category */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = '';
$handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_event_thumbnail']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_thumbnail']['alter']['text'] = '[nid]@@[field_event_thumbnail]@@[nid_1]';
$handler->display->display_options['fields']['field_event_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
  'image_style' => 'catalogue_list',
  'image_link' => '',
);
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['relationship'] = 'field_display_name';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = 'Subscribe';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
/* Field: Commerce Product: Price */
$handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
$handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['relationship'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['fields']['commerce_price']['label'] = '';
$handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
$handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_price']['settings'] = array(
  'calculation' => '0',
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="subscribe_price"><span class="event_price">[commerce_price]</span><span class="event_subscribe">[view_node]</span></div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = 'PHPtext';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'live_event' => 'live_event',
);
/* Filter criterion: Domain Access: Available on current domain */
$handler->display->display_options['filters']['current_all']['id'] = 'current_all';
$handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
$handler->display->display_options['filters']['current_all']['field'] = 'current_all';
$handler->display->display_options['filters']['current_all']['value'] = '1';
 
  $export['homepageevents'] = $view;

  return $export;
}
