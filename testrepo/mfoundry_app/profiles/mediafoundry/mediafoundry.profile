<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function mediafoundry_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Media Foundry';
  $form['site_information']['site_mail']['#default_value'] = 'admin@mediafoundry.com';

  // Account information defaults
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@mediafoundry.com';
  
  // Date/time settings
  $form['server_settings']['site_default_country']['#default_value'] = 'IN';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Asia/Kolkata';
  // Unset the timezone detect stuff
  unset($form['server_settings']['date_default_timezone']['#attributes']['class']);
  
  // Only check for updates, no need for email notifications
  $form['update_notifications']['update_status_module']['#default_value'] = array(0);
    
}
