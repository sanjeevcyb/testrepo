<?php
/**
 * @file
 * webform_feature.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function webform_feature_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Contact Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9103138b-2899-4011-9e36-6ae5a6bc67a0',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1395919393,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8cbb94d9-9fb7-47aa-bd4e-988ea340339f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>&nbsp;</div>

<div>
<div>
<div>
<div>
<div>
<h3><strong>SALES TEAM</strong></h3>

<p><em>"we love to chat, and we\'re not just saying that"</em><br />
Phone: 1300 30 48 48<br />
Email: sales@hostworks.com.au</p>
</div>
</div>
</div>
</div>

<div>
<div>
<div>
<div>
<h3><strong>SUPPORT TEAM</strong></h3>

<p><em>"the real people behind what works"</em><br />
Phone: 1300 30 39 39<br />
Email: support@hostworks.com.au</p>
</div>
</div>
</div>
</div>

<div>
<div>
<div>
<div>
<h3><strong>HEAD OFFICE</strong></h3>

<p>Level 10, Tower A<br />
799 Pacific Highway<br />
Chatswood NSW 2067<br />
Direct: +61 2 9239 2700</p>
</div>
</div>
</div>
</div>

<div>
<div>
<div>
<div>
<h3><strong>ADELAIDE</strong></h3>

<p>(Customer Management Centre)<br />
340 Findon Road<br />
Kidman Park<br />
Adelaide SA 5025<br />
Direct: +61 8 8461 4800</p>
</div>
</div>
</div>
</div>
</div>


<h3><strong>ONLINE ENQUIRY</strong></h3>',
        'summary' => '',
        'format' => 'custom_text_format',
        'safe_value' => '<div> </div>
<div>
<div>
<div>
<div>
<div>
<h3><strong>SALES TEAM</strong></h3>
<p><em>"we love to chat, and we\'re not just saying that"</em><br />
Phone: 1300 30 48 48<br />
Email: <a href="mailto:sales@hostworks.com.au">sales@hostworks.com.au</a></p>
</div>
</div>
</div>
</div>
<div>
<div>
<div>
<div>
<h3><strong>SUPPORT TEAM</strong></h3>
<p><em>"the real people behind what works"</em><br />
Phone: 1300 30 39 39<br />
Email: <a href="mailto:support@hostworks.com.au">support@hostworks.com.au</a></p>
</div>
</div>
</div>
</div>
<div>
<div>
<div>
<div>
<h3><strong>HEAD OFFICE</strong></h3>
<p>Level 10, Tower A<br />
799 Pacific Highway<br />
Chatswood NSW 2067<br />
Direct: +61 2 9239 2700</p>
</div>
</div>
</div>
</div>
<div>
<div>
<div>
<div>
<h3><strong>ADELAIDE</strong></h3>
<p>(Customer Management Centre)<br />
340 Findon Road<br />
Kidman Park<br />
Adelaide SA 5025<br />
Direct: +61 8 8461 4800</p>
</div>
</div>
</div>
</div>
</div>
<h3><strong>ONLINE ENQUIRY</strong></h3>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
  'webform' => array(
    'nid' => 101,
    'confirmation' => '',
    'confirmation_format' => 'blog_text_format',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'machine_name' => 'contact_us',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
      5 => 7,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 101,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'machine_name' => 'contact_us__name',
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 101,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 1,
        'machine_name' => 'contact_us__email',
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 101,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'phone_number',
        'name' => 'Phone Number',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 2,
        'machine_name' => 'contact_us__phone_number',
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 101,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'state_province',
        'name' => 'State/Province',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'ACT|Australian Capital Territory
NT|Northern Territory
NSW|New South Wales
QL|Queensland
SA|South Australia
TA|Tasmania
WA|Western Australia',
          'multiple' => 0,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 3,
        'machine_name' => 'contact_us__state_province',
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 101,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 4,
        'machine_name' => 'contact_us__message',
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
    2 => 2,
    4 => 4,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'Media Foundry',
    2 => 'Dev affiliate 1',
    3 => 'Dev affiliate 2',
  ),
  'domain_source' => -5,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2014-03-27 16:53:13 +0530',
);
  return $nodes;
}
