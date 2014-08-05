<?php
/**
 * @file
 * publisher_dashbaord_with_main_menu.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function publisher_dashbaord_with_main_menu_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'catalogue_page_block';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Catalogue Page block';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'affiliate_catalogue_page',
      'title' => 'Video',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'machine_name' => 'event_catalogue_page',
      'title' => 'Event',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Catalogue Page block');
  t('Event');
  t('Video');

  $export['catalogue_page_block'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'publisher_dashboard_events_block';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Publisher Dashboard Events block';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_live_events-block_2',
      'hide_title' => 1,
      'title' => 'Current',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_live_events-block',
      'hide_title' => 1,
      'title' => 'Upcoming',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Current');
  t('Publisher Dashboard Events block');
  t('Upcoming');

  $export['publisher_dashboard_events_block'] = $quicktabs;

  return $export;
}
