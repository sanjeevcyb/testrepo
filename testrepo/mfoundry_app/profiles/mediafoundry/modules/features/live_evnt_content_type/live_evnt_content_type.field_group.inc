<?php
/**
 * @file
 * live_evnt_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function live_evnt_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|live_event|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'live_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Schedule',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_schedule|node|live_event|form'] = $field_group;

  return $export;
}
