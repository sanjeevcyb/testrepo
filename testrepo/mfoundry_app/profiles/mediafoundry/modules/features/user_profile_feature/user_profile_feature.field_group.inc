<?php
/**
 * @file
 * user_profile_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function user_profile_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_details|user|user|default';
  $field_group->group_name = 'group_more_details';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_address',
      1 => 'field_address_2_',
      2 => 'field_city',
      3 => 'field_country',
      4 => 'field_description',
      5 => 'field_first_name',
      6 => 'field_last_name',
      7 => 'field_organization',
      8 => 'field_phone',
      9 => 'field_state',
      10 => 'field_zip',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_more_details|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_details|user|user|form';
  $field_group->group_name = 'group_more_details';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Details',
    'weight' => '9',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_address',
      3 => 'field_city',
      4 => 'field_zip',
      5 => 'field_state',
      6 => 'field_country',
      7 => 'field_organization',
      8 => 'field_address_2_',
      9 => 'field_description',
      10 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_more_details|user|user|form'] = $field_group;

  return $export;
}
