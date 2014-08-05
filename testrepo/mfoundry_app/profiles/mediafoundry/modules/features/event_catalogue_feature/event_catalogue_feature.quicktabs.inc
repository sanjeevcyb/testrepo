<?php
/**
 * @file
 * event_catalogue_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function event_catalogue_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'event_catalogue_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'event catalogue page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'event_catalogue_with_filter',
      'display' => 'page_1',
      'args' => '',
      'title' => 'Grid',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'event_catalogue_with_filter',
      'display' => 'page_2',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Grid');
  t('List');
  t('event catalogue page');

  $export['event_catalogue_page'] = $quicktabs;

  return $export;
}
