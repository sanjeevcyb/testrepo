<?php
/**
 * @file
 * catalogue_with_filter.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function catalogue_with_filter_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'affiliate_catalogue_page';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'video catalogue page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'catalogue_with_filter',
      'display' => 'page_1',
      'args' => '',
      'title' => 'Grid',
      'weight' => '0',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'catalogue_with_filter',
      'display' => 'page_2',
      'args' => '',
      'title' => 'List',
      'weight' => '0',
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
  t('video catalogue page');

  $export['affiliate_catalogue_page'] = $quicktabs;

  return $export;
}
