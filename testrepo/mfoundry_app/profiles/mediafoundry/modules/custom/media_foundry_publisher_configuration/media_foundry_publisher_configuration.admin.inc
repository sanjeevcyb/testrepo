<?php

/**
 * @file
 * Provides the administration settings for the publisher instance configuration.
 */
function media_foundry_publisher_configuration_restriction() {
  $form = array();
  $form['no_affiliate_site'] = array(
      '#type' => 'textfield',
      '#title' => t('Max Affiliate Site'),
      '#description' => t('Set the publishers maximum number of affiliate site. Set -1 value to set no limit for affiliate sites'),
      '#required' => TRUE,
      '#default_value' => variable_get('no_affiliate_site', ''),
  );
  $form['no_videos'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of Videos'),
      '#description' => t('Number of videos to be uploaded by this publisher.'),
      '#default_value' => variable_get('no_videos', ''),
      '#required' => TRUE,
  );
  $form['video_disk_storage_capacity'] = array(
      '#type' => 'textfield',
      '#title' => t('Total Disk Storage'),
      '#description' => t('Total disk storage availability for publisher to upload video on disk space in GB e.g 100GB.'),
      '#default_value' => variable_get('video_disk_storage_capacity', ''),
      '#required' => TRUE,
  );
  $form['subscription_access'] = array(
      '#type' => 'checkbox',
      '#title' => t('Access to payment gateway'),
      '#description' => t('Check this checkbox if publisher will have access to subscription feature on his instance.'),
      '#default_value' => variable_get('subscription_access', FALSE),
  );
  $form['video_encoding_profile_access'] = array(
      '#type' => 'checkbox',
      '#title' => t('Access to video encoding profile'),
      '#description' => t('Check this checkbox if publisher will have access to video encoding profiles to change and set the different video encoding profiles to trancode videos on his instance.'),
      '#default_value' => variable_get('video_encoding_profile_access', FALSE),
  );
  $form['live_event_access'] = array(
      '#type' => 'checkbox',
      '#title' => t('Access to live event'),
      '#description' => t('Check this checkbox if publisher will have access to create and publish live from his instance.'),
      '#default_value' => variable_get('live_event_access', FALSE),
  );

  return system_settings_form($form);
}