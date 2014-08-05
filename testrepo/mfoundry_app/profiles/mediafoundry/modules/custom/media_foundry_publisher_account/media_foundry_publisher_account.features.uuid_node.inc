<?php
/**
 * @file
 * media_foundry_publisher_account.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function media_foundry_publisher_account_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Publisher',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd00f5db5-0b2d-42f8-b36a-92d572e6362e',
  'type' => 'publisher',
  'language' => 'und',
  'created' => 1404800502,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '240d0884-3082-422d-9cdf-21e4564ff0af',
  'revision_uid' => 1,
  'field_account_manager' => array(
    'und' => array(
      0 => array(
        'uid' => user_load_by_name('mfpubadmin')->uid,
      ),
    ),
  ),
  'field_account_owner' => array(),
  'field_account_status' => array(
    'und' => array(
      0 => array(
        'value' => 'Active',
      ),
    ),
  ),
  'field_email_id' => array(
    'und' => array(
      0 => array(
        'value' => 'admin@hostworks.com',
        'format' => NULL,
        'safe_value' => 'admin@hostworks.com',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => 8412741558,
        'format' => NULL,
        'safe_value' => 8412741558,
      ),
    ),
  ),
  'field_publisher_address' => array(),
  'field_publisher_id' => array(
    'und' => array(
      0 => array(
        'value' => 123456,
        'format' => NULL,
        'safe_value' => 123456,
      ),
    ),
  ),
  'field_publisher_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Hostworks',
        'format' => NULL,
        'safe_value' => 'Hostworks',
      ),
    ),
  ),
  'field_publisher_website_url' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
    3 => 3,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'Drupal',
    2 => 'Affiliate 1',
  ),
  'domain_source' => -5,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:7:{s:7:"contact";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:11:"remember_me";b:1;}',
  'date' => '2014-07-08 11:51:42 +0530',
);
  return $nodes;
}
