<?php

/**
 * @file
 * Provides the administration settings for the publisher instance creation.
 */


function media_foundry_publisher_instance_creation_form() {
  $form = array();
  $form['publisher_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Publisher Name'),
      '#description' => t('Enter the publisher name'),
     // '#default_value' => '',
	  '#required' => TRUE,
  );
  $form['publisher_email'] = array(
      '#type' => 'textfield',
      '#title' => t('Publisher Email'),
      '#description' => t('Enter the publisher email'),
     // '#default_value' => '',
	  '#required' => TRUE,
  );
  $form['publisher_address'] = array(
      '#type' => 'textfield',
      '#title' => t('Publisher Address'),
      '#description' => t('Enter the publisher address'),
     // '#default_value' => '',
	  '#required' => TRUE,
  );
  $form['publisher_phoneno'] = array(
      '#type' => 'textfield',
      '#title' => t('Publisher Phone Number'),
      '#description' => t('Enter the publisher phone number'),
    //  '#default_value' => '',
	  '#required' => TRUE,
  );
  $form['publisher_domain_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Publisher Domain Name'),
    '#description' => t('The publisher domain name , using the full path.example.com format.
                Leave off the http:// and the trailing slash and do not include any paths.
                Must contain only dots, lowercase alphanumeric characters, dashes'),
  //  '#default_value' => variable_get('publisher_domain_name', ''),
	'#required' => TRUE,
  );
  $form['publisher_dbname'] = array(
      '#type' => 'textfield',
      '#title' => t('Publisher Database Name'),
      '#description' => t('Enter the database name for publisher'),
    //  '#default_value' => variable_get('publisher_dbname', ''),
	  '#required' => TRUE,
  );
  $form['publisher_dbuname'] = array(
     '#type' => 'textfield',
     '#title' => t('Publisher Database User Name'),
     '#description' => t('Enter the database user name for publisher'),
   //  '#default_value' => variable_get('publisher_dbuname', ''),
     '#required' => TRUE,
  );
  $form['publisher_dbpass'] = array(
     '#type' => 'textfield',
     '#title' => t('Publisher Database Password'),
     '#description' => t('Enter the publisher database password'),
    // '#default_value' => variable_get('publisher_dbname', ''),
  );
  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Create Instance'),
  );
  return $form;
}

function media_foundry_publisher_instance_creation_form_validate($form, &$form_state) {
  //dpm($form);
}
function media_foundry_publisher_instance_creation_form_submit($form, &$form_state) {
    $timestamp = REQUEST_TIME;
    $query = db_insert('publisher_instance')->fields(array('pname', 'pemail', 'paddress', 'pphone', 'pdomainname', 'pdbname', 'pdbusername', 'pdbpass', 'pinstance_created'));
    $query->values(array(
        'pname' => $form_state['values']['publisher_name'],
        'pemail' => $form_state['values']['publisher_email'],
        'paddress' => $form_state['values']['publisher_address'],
        'pphone' => $form_state['values']['publisher_phoneno'],
        'pdomainname' => $form_state['values']['publisher_domain_name'],
        'pdbname' => $form_state['values']['publisher_dbname'],
        'pdbusername' => $form_state['values']['publisher_dbuname'],
        'pdbpass' => $form_state['values']['publisher_dbpass'],
        'pinstance_created' => $timestamp,
    ));
    $query->execute();
    drupal_set_message("Publisher instance for publisher " . $form_state['values']['publisher_name'] . "  has been created now, Please do the configuration settings for this customer by submitting following form.");
    drupal_goto("admin/config/publisher/settings");
}