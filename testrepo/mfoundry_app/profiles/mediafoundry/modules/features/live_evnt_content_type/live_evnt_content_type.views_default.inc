<?php
/**
 * @file
 * live_evnt_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function live_evnt_content_type_views_default_views() {
  $export = array();

 $view = new view();
$view->name = 'live_events';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Live events';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Live events';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_schedule_from' => 'field_schedule_from',
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
  'field_schedule_from' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Event Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from']['id'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['label'] = 'Start Date';
$handler->display->display_options['fields']['field_schedule_from']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_schedule_from']['settings'] = array(
  'format_type' => 'medium',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from_1']['id'] = 'field_schedule_from_1';
$handler->display->display_options['fields']['field_schedule_from_1']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['label'] = 'End date';
$handler->display->display_options['fields']['field_schedule_from_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_schedule_from_1']['settings'] = array(
  'format_type' => 'medium',
  'fromto' => 'value2',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created date';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'custom';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Action';
$handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['edit_node']['alter']['text'] = '[edit_node] | [delete_node] ';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<?php 
$baseurl = base_path();
?>
<a href="<?php echo $baseurl; ?>node/add/live-event" > Create Event </a>';
$handler->display->display_options['header']['area']['format'] = 'php_code';
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
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
$handler->display->display_options['path'] = 'live-events';

/* Display: Upcoming live events */
$handler = $view->new_display('block', 'Upcoming live events', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_event_thumbnail' => 'field_event_thumbnail',
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_event_thumbnail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Event Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from']['id'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['label'] = 'Start Dated';
$handler->display->display_options['fields']['field_schedule_from']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from_1']['id'] = 'field_schedule_from_1';
$handler->display->display_options['fields']['field_schedule_from_1']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['label'] = 'End date';
$handler->display->display_options['fields']['field_schedule_from_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_schedule_from_1']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'value2',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Schedule from -  start date (field_schedule_from) */
$handler->display->display_options['sorts']['field_schedule_from_value']['id'] = 'field_schedule_from_value';
$handler->display->display_options['sorts']['field_schedule_from_value']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['sorts']['field_schedule_from_value']['field'] = 'field_schedule_from_value';
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
/* Filter criterion: Content: Schedule from -  start date (field_schedule_from) */
$handler->display->display_options['filters']['field_schedule_from_value']['id'] = 'field_schedule_from_value';
$handler->display->display_options['filters']['field_schedule_from_value']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['filters']['field_schedule_from_value']['field'] = 'field_schedule_from_value';
$handler->display->display_options['filters']['field_schedule_from_value']['operator'] = '>';
$handler->display->display_options['filters']['field_schedule_from_value']['granularity'] = 'second';
$handler->display->display_options['filters']['field_schedule_from_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_schedule_from_value']['default_date'] = 'now';

/* Display: Archived events */
$handler = $view->new_display('block', 'Archived events', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Archived Eevnts';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Event Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from']['id'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['label'] = 'Start Date';
$handler->display->display_options['fields']['field_schedule_from']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_schedule_from']['settings'] = array(
  'format_type' => 'medium',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from_1']['id'] = 'field_schedule_from_1';
$handler->display->display_options['fields']['field_schedule_from_1']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['label'] = 'End date';
$handler->display->display_options['fields']['field_schedule_from_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_schedule_from_1']['settings'] = array(
  'format_type' => 'medium',
  'fromto' => 'value2',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Schedule from - end date (field_schedule_from:value2) */
$handler->display->display_options['sorts']['field_schedule_from_value2']['id'] = 'field_schedule_from_value2';
$handler->display->display_options['sorts']['field_schedule_from_value2']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['sorts']['field_schedule_from_value2']['field'] = 'field_schedule_from_value2';
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
/* Filter criterion: Content: Schedule from - end date (field_schedule_from:value2) */
$handler->display->display_options['filters']['field_schedule_from_value2']['id'] = 'field_schedule_from_value2';
$handler->display->display_options['filters']['field_schedule_from_value2']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['filters']['field_schedule_from_value2']['field'] = 'field_schedule_from_value2';
$handler->display->display_options['filters']['field_schedule_from_value2']['operator'] = '<';
$handler->display->display_options['filters']['field_schedule_from_value2']['default_date'] = 'now';

/* Display: Current live events */
$handler = $view->new_display('block', 'Current live events', 'block_2');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Event Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from']['id'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from']['label'] = 'Start Date';
$handler->display->display_options['fields']['field_schedule_from']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_schedule_from']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Schedule from */
$handler->display->display_options['fields']['field_schedule_from_1']['id'] = 'field_schedule_from_1';
$handler->display->display_options['fields']['field_schedule_from_1']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['field'] = 'field_schedule_from';
$handler->display->display_options['fields']['field_schedule_from_1']['label'] = 'End date';
$handler->display->display_options['fields']['field_schedule_from_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_schedule_from_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_schedule_from_1']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'value2',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
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
/* Filter criterion: Content: Schedule from -  start date (field_schedule_from) */
$handler->display->display_options['filters']['field_schedule_from_value']['id'] = 'field_schedule_from_value';
$handler->display->display_options['filters']['field_schedule_from_value']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['filters']['field_schedule_from_value']['field'] = 'field_schedule_from_value';
$handler->display->display_options['filters']['field_schedule_from_value']['operator'] = '<=';
$handler->display->display_options['filters']['field_schedule_from_value']['granularity'] = 'second';
$handler->display->display_options['filters']['field_schedule_from_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_schedule_from_value']['default_date'] = 'now';
/* Filter criterion: Content: Schedule from - end date (field_schedule_from:value2) */
$handler->display->display_options['filters']['field_schedule_from_value2']['id'] = 'field_schedule_from_value2';
$handler->display->display_options['filters']['field_schedule_from_value2']['table'] = 'field_data_field_schedule_from';
$handler->display->display_options['filters']['field_schedule_from_value2']['field'] = 'field_schedule_from_value2';
$handler->display->display_options['filters']['field_schedule_from_value2']['operator'] = '>=';
$handler->display->display_options['filters']['field_schedule_from_value2']['granularity'] = 'second';
$handler->display->display_options['filters']['field_schedule_from_value2']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_schedule_from_value2']['default_date'] = 'now';


  
  $export['live_events'] = $view;

  return $export;
}
