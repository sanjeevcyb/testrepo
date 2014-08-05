<?php
/**
 * @file
 * event_catalogue_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_catalogue_feature_views_default_views() {
  $export = array();

  $view = new view();
$view->name = 'event_catalogue_with_filter';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Event Catalogue with filter';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'shubhangi_test_live_event';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'type' => array(
    'bef_format' => 'bef_links',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
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
  'field_category_tid' => array(
    'bef_format' => 'bef_ul',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_select_all_none_nested' => 1,
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Video Node (field_premium_node) - reverse */
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['id'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['field'] = 'reverse_field_premium_node_commerce_product';
/* Relationship: Commerce Product: Referencing Node */
$handler->display->display_options['relationships']['field_display_name']['id'] = 'field_display_name';
$handler->display->display_options['relationships']['field_display_name']['table'] = 'commerce_product';
$handler->display->display_options['relationships']['field_display_name']['field'] = 'field_display_name';
$handler->display->display_options['relationships']['field_display_name']['relationship'] = 'reverse_field_premium_node_commerce_product';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Content: Subscription */
$handler->display->display_options['fields']['field_add_to_subscription']['id'] = 'field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['table'] = 'field_data_field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['field'] = 'field_add_to_subscription';
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
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Category (field_category) */
$handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
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
$handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
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
/* Filter criterion: Domain Access: Available on current domain */
$handler->display->display_options['filters']['current_all_1']['id'] = 'current_all_1';
$handler->display->display_options['filters']['current_all_1']['table'] = 'domain_access';
$handler->display->display_options['filters']['current_all_1']['field'] = 'current_all';
$handler->display->display_options['filters']['current_all_1']['value'] = '1';

/* Display: Page:catalog */
$handler = $view->new_display('page', 'Page:catalog', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Catalog';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_event_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
  'image_style' => 'catalogue_list',
  'image_link' => '',
);
/* Field: Content: Upload Video */
$handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['label'] = '';
$handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_upload_video']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_upload_video']['type'] = 'video_formatter_thumbnail';
$handler->display->display_options['fields']['field_upload_video']['settings'] = array(
  'image_style' => 'catalogue_list',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'catlogue-title';
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
/* Field: Content: Subscription */
$handler->display->display_options['fields']['field_add_to_subscription']['id'] = 'field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['table'] = 'field_data_field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['field'] = 'field_add_to_subscription';
$handler->display->display_options['fields']['field_add_to_subscription']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['field_add_to_subscription']['label'] = '';
$handler->display->display_options['fields']['field_add_to_subscription']['element_label_colon'] = FALSE;
/* Field: Content: Ratings */
$handler->display->display_options['fields']['field_ratings']['id'] = 'field_ratings';
$handler->display->display_options['fields']['field_ratings']['table'] = 'field_data_field_ratings';
$handler->display->display_options['fields']['field_ratings']['field'] = 'field_ratings';
$handler->display->display_options['fields']['field_ratings']['label'] = '';
$handler->display->display_options['fields']['field_ratings']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ratings']['click_sort_column'] = 'rating';
$handler->display->display_options['fields']['field_ratings']['settings'] = array(
  'widget' => array(
    'fivestar_widget' => 'default',
  ),
  'expose' => 0,
  'style' => 'average',
  'text' => 'none',
);
/* Field: Commerce Product: Price */
$handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
$handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['relationship'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['fields']['commerce_price']['label'] = '';
$handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_price']['settings'] = array(
  'calculation' => '0',
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
$handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'subscribe';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Category (field_category) */
$handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
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
$handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
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
/* Filter criterion: Commerce Product: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'commerce_product';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['path'] = 'catalog/event';

/* Display: Page:catalog grid */
$handler = $view->new_display('page', 'Page:catalog grid', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Catalog';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'field_display_name';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_event_thumbnail']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_thumbnail']['alter']['text'] = '[nid_1]@@[field_event_thumbnail]@@[nid]';
$handler->display->display_options['fields']['field_event_thumbnail']['element_type'] = 'div';
$handler->display->display_options['fields']['field_event_thumbnail']['element_class'] = 'thumb_image';
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
$handler->display->display_options['fields']['view_node']['alter']['text'] = '<div class="subscribe">Subscribe</div>';
$handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['text'] = '[nid_1]@@[title_1]@@[nid]';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '50',
);
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
/* Field: Content: Ratings */
$handler->display->display_options['fields']['field_ratings']['id'] = 'field_ratings';
$handler->display->display_options['fields']['field_ratings']['table'] = 'field_data_field_ratings';
$handler->display->display_options['fields']['field_ratings']['field'] = 'field_ratings';
$handler->display->display_options['fields']['field_ratings']['label'] = '';
$handler->display->display_options['fields']['field_ratings']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ratings']['click_sort_column'] = 'rating';
$handler->display->display_options['fields']['field_ratings']['settings'] = array(
  'widget' => array(
    'fivestar_widget' => 'default',
  ),
  'expose' => 1,
  'style' => 'average',
  'text' => 'none',
);
$handler->display->display_options['path'] = 'catalog/event/grid';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Grid';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Page:catalog list */
$handler = $view->new_display('page', 'Page:catalog list', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Catalog';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'field_display_name';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_event_thumbnail']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_thumbnail']['alter']['text'] = '[nid_1]@@[field_event_thumbnail]@@[nid]';
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
$handler->display->display_options['fields']['view_node']['alter']['text'] = '<div class="subscribe">Subscribe</div>';
$handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
/* Field: Commerce Product: Price */
$handler->display->display_options['fields']['commerce_price_1']['id'] = 'commerce_price_1';
$handler->display->display_options['fields']['commerce_price_1']['table'] = 'field_data_commerce_price';
$handler->display->display_options['fields']['commerce_price_1']['field'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price_1']['relationship'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['fields']['commerce_price_1']['label'] = '';
$handler->display->display_options['fields']['commerce_price_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['commerce_price_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_price_1']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_price_1']['settings'] = array(
  'calculation' => '0',
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="subscribe_price"><span class="event_price">[commerce_price_1]</span><span class="event_subscribe">[view_node]</span></div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['text'] = '[nid_1]@@[title_1]@@[nid]';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
/* Field: Content: Ratings */
$handler->display->display_options['fields']['field_ratings']['id'] = 'field_ratings';
$handler->display->display_options['fields']['field_ratings']['table'] = 'field_data_field_ratings';
$handler->display->display_options['fields']['field_ratings']['field'] = 'field_ratings';
$handler->display->display_options['fields']['field_ratings']['label'] = '';
$handler->display->display_options['fields']['field_ratings']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ratings']['click_sort_column'] = 'rating';
$handler->display->display_options['fields']['field_ratings']['settings'] = array(
  'widget' => array(
    'fivestar_widget' => 'default',
  ),
  'expose' => 1,
  'style' => 'average',
  'text' => 'none',
);
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
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
$handler->display->display_options['path'] = 'catalog/event/list';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

$export['event_catalogue_with_filter'] = $view;

  return $export;
}
