<?php
/**
 * @file
 * media_video_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function media_video_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country|node|video|form';
  $field_group->group_name = 'group_country';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publish_control';
  $field_group->data = array(
    'label' => 'Country',
    'weight' => '4',
    'children' => array(
      0 => 'field_restricted_country',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_country|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_devices|node|video|form';
  $field_group->group_name = 'group_devices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publish_control';
  $field_group->data = array(
    'label' => 'Devices',
    'weight' => '5',
    'children' => array(
      0 => 'field_select_devices',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_devices|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_domain|node|video|form';
  $field_group->group_name = 'group_domain';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publish_control';
  $field_group->data = array(
    'label' => 'Domain',
    'weight' => '8',
    'children' => array(
      0 => 'field_allowed_domain',
      1 => 'field_restricted_domain',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_domain|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ip|node|video|form';
  $field_group->group_name = 'group_ip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publish_control';
  $field_group->data = array(
    'label' => 'IP',
    'weight' => '2',
    'children' => array(
      0 => 'field_restricted_ip',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ip|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_data_info|node|video|form';
  $field_group->group_name = 'group_meta_data_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Data Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_add_to_subscription',
      2 => 'field_tags',
      3 => 'field_category',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta_data_info|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publish_control|node|video|form';
  $field_group->group_name = 'group_publish_control';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publish Control',
    'weight' => '3',
    'children' => array(
      0 => 'domain',
      1 => 'group_country',
      2 => 'group_devices',
      3 => 'group_ip',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Publish Control',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $export['group_publish_control|node|video|form'] = $field_group;

  return $export;
}
