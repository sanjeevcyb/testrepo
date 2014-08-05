<?php
/**
 * @file
 * key_features.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function key_features_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'What\'s Media Foundry?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6f44cdea-dbd4-4c77-9e8c-f13698ea5aff',
  'type' => 'key_features',
  'language' => 'und',
  'created' => 1393418096,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9f67f43b-7e65-40d3-9f11-7083ec6aa31a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Hostworks Media Foundry is a suite of services that serves organisations in the business of managing and distributing live and on-demand content. If you have a requirement to manage and deliver media to audiences around the globe via the internet, the Media Foundry is the media delivery solution for you.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The Hostworks Media Foundry is a suite of services that serves organisations in the business of managing and distributing live and on-demand content. If you have a requirement to manage and deliver media to audiences around the globe via the internet, the Media Foundry is the media delivery solution for you.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_front_blk_image' => array(),
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
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'Media Foundry',
  ),
  'domain_source' => -5,
  'nodeblock' => array(
    'nid' => 45,
    'enabled' => 1,
    'machine_name' => 45,
    'block_title' => 'What\'s Media Foundry?',
    'view_mode' => 'full',
    'node_link' => 0,
    'comment_link' => 0,
    'translation_fallback' => 0,
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:10:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;s:10:"fb_visible";N;s:9:"fb_avatar";N;s:14:"geoip_location";a:2:{s:10:"ip_address";s:13:"172.27.141.69";s:9:"timestamp";i:1401859199;}s:11:"remember_me";b:1;}',
  'date' => '2014-02-26 18:04:56 +0530',
);
  return $nodes;
}
