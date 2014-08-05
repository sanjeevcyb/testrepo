<?php

/**
 * @file
 * Provides the administration settings for the live event streaming .
 */

/**
 * Administration settings for the Flowplayer Drupal module.
 */
function media_foundry_live_event_admin_settings() {
  $form = array();
  $form['http_live_app_address'] = array(
    '#type' => 'textfield',
    '#title' => t('HTTP Live streaming application address'),
    '#description' => t('HTTP Live streaming application address on wowza server'),
    '#default_value' => variable_get('http_live_app_address', ''),
  );
 $form['http_vod_app_address'] = array(
      '#type' => 'textfield',
      '#title' => t('HTTP VOD streaming application address'),
      '#description' => t('HTTP VOD streaming application address on wowza server'),
      '#default_value' => variable_get('http_vod_app_address', ''),
  );

 $form['wowza_host_ip'] = array(
     '#type' => 'textfield',
     '#title' => t('Wowza Host IP Address'),
     '#description' => t('Virtual Host IP Address for live and vod application on wowza'),
     '#default_value' => variable_get('wowza_host_ip', ''),
 );
 
 $form['wowza_streaming_path'] = array(
     '#type' => 'textfield',
     '#title' => t('Wowza Streaming Path'),
     '#description' => t('Video Streaming path configured into wowza'),
     '#default_value' => variable_get('wowza_streaming_path', ''),
 ); 
 
 $form['publishing_point'] = array(
     '#type' => 'textfield',
     '#title' => t('Publishing point'),
     '#description' => t('Live event publishing point on wowza server'),
     '#default_value' => variable_get('publishing_point', ''),
 );
 $form['publisher_name'] = array(
     '#type' => 'textfield',
     '#title' => t('Publisher Username'),
     '#description' => t('Use this username while broadcasting the live event from third party tool. e.g wirecast'),
     '#default_value' => variable_get('publisher_name', ''),
 );
 $form['publisher_pass'] = array(
     '#type' => 'textfield',
     '#title' => t('Publisher Password'),
     '#description' => t('Use this password while broadcasting the live event from third party tool. e.g wirecast'),
     '#default_value' => variable_get('publihser_pass', ''),
 );

 return system_settings_form($form);

}

function media_foundry_live_event_prepend_sku_code() {
  $form_sku = array();
  $form_sku['sku_code'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter code to be prepended with SKU'),
    '#size' => 60,
    '#default_value' => variable_get('sku_code', NULL),
    '#maxlength' => 3,
    '#required' => TRUE,
  );
 
 return system_settings_form($form_sku);
}