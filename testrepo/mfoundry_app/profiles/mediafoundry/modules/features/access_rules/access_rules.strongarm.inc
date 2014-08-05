<?php
/**
 * @file
 * access_rules.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function access_rules_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_blog';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'priority' => '-1',
  );
  $export['content_access_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_event_display';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 7,
      3 => 3,
      4 => 5,
      5 => 6,
    ),
    'priority' => '-1',
  );
  $export['content_access_event_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_front_page_slide_show';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'priority' => '-1',
  );
  $export['content_access_front_page_slide_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_key_features';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'priority' => '-1',
    'update_own' => array(
      0 => 3,
      1 => 5,
      2 => 6,
    ),
    'delete_own' => array(
      0 => 3,
      1 => 5,
      2 => 6,
    ),
  );
  $export['content_access_key_features'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_live_event';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'priority' => '1',
    'per_node' => 1,
  );
  $export['content_access_live_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_page';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
  );
  $export['content_access_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_publisher';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'priority' => '-1',
  );
  $export['content_access_publisher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_slide_show_image';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 3,
      3 => 5,
      4 => 6,
    ),
    'priority' => '-1',
  );
  $export['content_access_slide_show_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_video';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 7,
      3 => 3,
      4 => 5,
      5 => 6,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 7,
      3 => 3,
      4 => 5,
      5 => 6,
    ),
    'per_node' => 1,
    'priority' => '1',
  );
  $export['content_access_video'] = $strongarm;

  return $export;
}
