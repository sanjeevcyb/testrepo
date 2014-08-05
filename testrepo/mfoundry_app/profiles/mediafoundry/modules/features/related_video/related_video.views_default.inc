<?php
/**
 * @file
 * related_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function related_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'related video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'related video';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Upload Video */
  $handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
  $handler->display->display_options['fields']['field_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_video']['type'] = 'video_formatter_thumbnail';
  $handler->display->display_options['fields']['field_upload_video']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Ratings */
  $handler->display->display_options['fields']['field_ratings']['id'] = 'field_ratings';
  $handler->display->display_options['fields']['field_ratings']['table'] = 'field_data_field_ratings';
  $handler->display->display_options['fields']['field_ratings']['field'] = 'field_ratings';
  $handler->display->display_options['fields']['field_ratings']['label'] = '';
  $handler->display->display_options['fields']['field_ratings']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ratings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ratings']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_ratings']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="description">
[body]
[field_ratings]
</div>
';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_options']['code'] = '$vnid = arg(1);
$vnode= node_load($vnid);
$mtid  = $vnode->field_category[\'und\'][0][tid];
return $mtid;';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'video' => 'video',
  );
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: Related Videos */
  $handler = $view->new_display('block', 'Related Videos', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Ratings */
  $handler->display->display_options['fields']['field_ratings']['id'] = 'field_ratings';
  $handler->display->display_options['fields']['field_ratings']['table'] = 'field_data_field_ratings';
  $handler->display->display_options['fields']['field_ratings']['field'] = 'field_ratings';
  $handler->display->display_options['fields']['field_ratings']['label'] = '';
  $handler->display->display_options['fields']['field_ratings']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ratings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ratings']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_ratings']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="description">
[title]
[body]
[field_ratings]
</div>
';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $export['related_video'] = $view;

  return $export;
}
