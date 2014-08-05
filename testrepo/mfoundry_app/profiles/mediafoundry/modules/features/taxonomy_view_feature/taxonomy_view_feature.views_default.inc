<?php
/**
 * @file
 * manage_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function taxonomy_view_feature_views_default_views() {
  $export = array();

$view = new view();
$view->name = 'taxonomy_term';
$view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Taxonomy term';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Video Node (field_premium_node) - reverse */
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['id'] = 'reverse_field_premium_node_commerce_product';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product']['field'] = 'reverse_field_premium_node_commerce_product';
/* Relationship: Content: Video Node (field_premium_node) - reverse */
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product_1']['id'] = 'reverse_field_premium_node_commerce_product_1';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product_1']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_premium_node_commerce_product_1']['field'] = 'reverse_field_premium_node_commerce_product';
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_event_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Upload Video */
$handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['label'] = '';
$handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_upload_video']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_upload_video']['type'] = 'video_formatter_thumbnail';
$handler->display->display_options['fields']['field_upload_video']['settings'] = array(
  'image_style' => '',
  'image_link' => 'content',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '35',
);
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
  'text' => 'average',
);
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'live_event' => 'live_event',
  'video' => 'video',
);
/* Filter criterion: Domain Access: Available on current domain */
$handler->display->display_options['filters']['current_all']['id'] = 'current_all';
$handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
$handler->display->display_options['filters']['current_all']['field'] = 'current_all';
$handler->display->display_options['filters']['current_all']['value'] = '1';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  'image_link' => 'content',
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
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '30';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '30',
);
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
  'text' => 'average',
);
$handler->display->display_options['path'] = 'taxonomy/term/%';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 15;
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  'image_link' => 'content',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '35',
);
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
  'text' => 'average',
);
$handler->display->display_options['path'] = 'category_view';


  $export['taxonomy_term'] = $view;

  return $export;
}
