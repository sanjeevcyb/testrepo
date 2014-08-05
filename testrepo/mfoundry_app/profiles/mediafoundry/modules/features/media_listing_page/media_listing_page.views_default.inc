<?php
/**
 * @file
 * media_listing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function media_listing_page_views_default_views() {
    $export = array();
$view = new view();
$view->name = 'media_listing_page';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Media Listing Page';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Video listing page';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer media settings';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Records Per Page';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No records found';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Workbench Moderation: From state */
$handler->display->display_options['fields']['from_state']['id'] = 'from_state';
$handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['from_state']['field'] = 'from_state';
$handler->display->display_options['fields']['from_state']['label'] = 'Status';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'File name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created On';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
$handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Category (field_category)';
$handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
$handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
$handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;

/* Display: Video listing page */
$handler = $view->new_display('page', 'Video listing page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Video listing page';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_revision' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Requeue Videos',
    'settings' => array(
      'url' => 'perform-bulk-video-requeue',
    ),
  ),
  'action::twitter_actions_set_status_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_promote_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'rules_component::scheduler_remove_publish_date_component' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'rules_component::scheduler_remove_unpublish_date_component' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_save_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::workbench_moderation_set_state_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'rules_component::scheduler_set_publish_date_component' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'rules_component::scheduler_set_unpublish_date_component' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_node_update_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Status';
$handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Upload Video */
$handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['label'] = 'Thumbnail';
$handler->display->display_options['fields']['field_upload_video']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_upload_video']['alter']['path'] = 'node/[nid]/edit?destination=medialist';
$handler->display->display_options['fields']['field_upload_video']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_upload_video']['type'] = 'video_formatter_thumbnail';
$handler->display->display_options['fields']['field_upload_video']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'File Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created On';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Action';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_class'] = 'useredit';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_type'] = 'span';
$handler->display->display_options['fields']['delete_node']['element_class'] = 'video_userdelete';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Action';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="video_useredit"> [edit_node] </span><span class="video_userdelete"> [delete_node] </span>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'video' => 'video',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
/* Filter criterion: Content: Tags (field_tags) */
$handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
$handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['value'] = '';
$handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
$handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
/* Filter criterion: Content: Category (field_category) */
$handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['group'] = 1;
$handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
$handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Categories';
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
$handler->display->display_options['path'] = 'medialist';
$handler->display->display_options['menu']['title'] = 'Media 123';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Video Listing Page */
$handler = $view->new_display('page', 'Video Listing Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Video Listing Page';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Status';
$handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Upload Video */
$handler->display->display_options['fields']['field_upload_video']['id'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['table'] = 'field_data_field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['field'] = 'field_upload_video';
$handler->display->display_options['fields']['field_upload_video']['label'] = 'Thumbnail';
$handler->display->display_options['fields']['field_upload_video']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_upload_video']['type'] = 'video_formatter_thumbnail';
$handler->display->display_options['fields']['field_upload_video']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'File name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created On';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Action';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_class'] = 'useredit';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_type'] = 'span';
$handler->display->display_options['fields']['delete_node']['element_class'] = 'userdelete';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Action';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="video_useredit"> [edit_node] </span><span class="video_userdelete"> [delete_node] </span>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'video' => 'video',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
/* Filter criterion: Content: Tags (field_tags) */
$handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
$handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['value'] = '';
$handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
$handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
$handler->display->display_options['filters']['field_tags_tid']['hierarchy'] = 1;
/* Filter criterion: Content: Category (field_category) */
$handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['group'] = 1;
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
$handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'medialist/video';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Videos';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'Videos';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Live Event listing page */
$handler = $view->new_display('page', 'Live Event listing page', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Live event listing page';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Event Thumbnail */
$handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['label'] = 'Thumbnail';
$handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'File name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created On';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Action';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_class'] = 'useredit';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_class'] = 'userdelete';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Action';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="video_useredit"> [edit_node] </span><span class="video_userdelete"> [delete_node] </span>';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'live_event' => 'live_event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
/* Filter criterion: Content: Tags (field_tags) */
$handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
$handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['value'] = '';
$handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
$handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  6 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
/* Filter criterion: Content: Category (field_category) */
$handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
$handler->display->display_options['filters']['field_category_tid']['group'] = 1;
$handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
$handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Categories';
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
$handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
$handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'medialist/live-event';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Live Event';
$handler->display->display_options['menu']['weight'] = '1';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

    $export['media_listing_page'] = $view;
    return $export;
}
