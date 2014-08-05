<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "media_foundry_one" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "media_foundry_one".
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
function media_foundry_publisher_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function media_foundry_publisher_process_html(&$vars) {
}
// */

function media_foundry_publisher_preprocess_html(&$vars) {
	$vars['site_logo'] = '/profiles/mediafoundry/themes/media_foundry_publisher/images/logo.png'; // change the site logo
	return $vars;
}
/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions*/
function media_foundry_publisher_preprocess_page(&$vars) {

global $user;
global $base_url;
if ( $user->uid )
 {
	$vars['site_logo'] = $vars['logo_img'] ? l($vars['logo_img'],$base_url.'/media/dashboard', array('attributes' => array('title' => t('Home page')), 'html' => TRUE)) : '';
  }
 else
	{
		$vars['site_logo'] = $vars['logo_img'] ? l($vars['logo_img'],$base_url, array('attributes' => array('title' => t('Home page')), 'html' => TRUE)) : '';
	}
	
  $path = drupal_get_path_alias();
   if ($path == 'tagclouds/chunk/1') 
  {
    drupal_set_title('Tag Cloud');
  }
	
}


/*function media_foundry_publisher_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function media_foundry_publisher_preprocess_node(&$vars) {
}
function media_foundry_publisher_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function media_foundry_publisher_preprocess_comment(&$vars) {
}
function media_foundry_publisher_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function media_foundry_publisher_preprocess_block(&$vars) {
}
function media_foundry_publisher_process_block(&$vars) {
}
// */

function media_foundry_publisher_form_alter( &$form, &$form_state, $form_id )
{
    if (in_array( $form_id, array( 'user_login', 'user_login_block')))
    {
        $form['name']['#attributes']['placeholder'] = t( 'Username' );
        $form['pass']['#attributes']['placeholder'] = t( 'Password' );

	}
	if (in_array( $form_id, array( 'user_pass')))
    {
        $form['name']['#attributes']['placeholder'] = t( 'Email' );
        //$form['pass']['#attributes']['placeholder'] = t( 'Password' );

	}

	if (in_array( $form_id, array( 'search_block_form')))
    {
        $form['search_block_form']['#attributes']['placeholder'] = t( 'Search' );
        //$form['pass']['#attributes']['placeholder'] = t( 'Password' );

	}


}

function media_foundry_publisher_checkbox($variables) {
	$element = $variables['element'];
	$element['#attributes']['type'] = 'checkbox';
	element_set_attributes($element, array('id', 'name','#return_value' => 'value'));

	// Unchecked checkbox has #value of integer 0.
	if (!empty($element['#checked'])) {
		$element['#attributes']['checked'] = 'checked';
	}
	_form_set_class($element, array('form-checkbox'));

	return '<input' . drupal_attributes($element['#attributes']) . ' />';
}


/*
function media_foundry_publisher_get_login_block() {

    $form = render(drupal_get_form('user_login_block'));
    return theme_status_messages().$form;

}
*/
function media_foundry_publisher_get_forgot_password() {
    global $variables;
    $drupalForm = drupal_get_form('user_pass');
    $form1 = render($drupalForm);
      return theme_status_messages($variables).$form1;
    
}




function media_foundry_publisher_form_element($variables) {
  $element = &$variables['element'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

 if ($element['#type'] == 'checkbox') {
	//echo '<pre>'; print_r($variables); exit;
	$output .= ' ' . $prefix . $element['#children'] . $suffix;
  	$output .= ' ' . theme('form_element_label', $variables) . "\n";
  }
  else{
  	switch ($element['#title_display']) {
  		case 'before':
  		case 'invisible':
  			$output .= ' ' . theme('form_element_label', $variables);
  			$output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
  			break;

  		case 'after':
  			$output .= ' ' . $prefix . $element['#children'] . $suffix;
  			$output .= ' ' . theme('form_element_label', $variables) . "\n";
  			break;

  		case 'none':
  		case 'attribute':
  			// Output no label and no required marker, only the children.
  			$output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
  			break;
  	}
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

function media_foundry_publisher_select($variables) {
	$element = $variables['element'];
	element_set_attributes($element, array('id', 'name', 'size'));
	_form_set_class($element, array('form-select'));
	
 if ($element['#multiple']) {
	
 	return '<div class="styled-select-multiple"><select class="drupalSelect"' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select></div>';
    
  }
  else 
  {
	   return '<div class="styled-select"><span class="select-text" ></span><select class="drupalSelect select-element"' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select></div>';
	}
}

function generateManifest($vfid, $video_files) {
$manifestPath = drupal_realpath('public://').'/manifest/';
$filename = $manifestPath.'manifest_'.$vfid.'.m3u8';
$vod_streaming_add = variable_get("http_vod_app_address","http://stream-hostworks-dev.mediafoundry.com.au/vod");
$replaceString = "private://";	
if (!file_exists($manifestPath.$filename)) {
       foreach($video_files as $key => $vfiles) {
	  $arrayPlayList[] = str_replace($replaceString, "", $vfiles->uri);
       }
	$stringData = '';
	//$wowzaStreamingPath = $vod_streaming_add.'/_definst_/mp4:dev/'; 
	$wowzaStreamingPath = variable_get("wowza_streaming_path","");
	$stringData .= "#EXTM3U"."\n";
	$stringData .= "#EXT-X-VERSION:3";
	 foreach($arrayPlayList as $key => $videoPath){
        $metaData = getMetaDataFromWowza($videoPath);
		$stringData .= str_replace(array('chunklist.m3u8','#EXTM3U','#EXT-X-VERSION:3'),array('','',''),$metaData);
		$stringData .= $wowzaStreamingPath.$videoPath."/chunklist.m3u8"."\n";
		if ($fh = fopen('' . $filename, 'w')) { 
		// we create the file, notice the 'w'. This is to be able to write to the file once.
					// Write the meta data to the m3u8 file created
					fwrite($fh, $stringData);
					//echo "Writing file...";
					//echo "Closing file...";
		} else {
		 // do something to capture failure logs
		//echo "failure";
            watchdog('Publisher Manifest Message', 'Failure');
		//exit;
				}
	  }//print_r($stringData);exit;
	 fclose($fh);
	}
}

function getMetaDataFromWowza($videoPath){
$wowzaStreamingPath = variable_get("wowza_streaming_path","");
	$actualUrl =  $wowzaStreamingPath.$videoPath."/playlist.m3u8";
   // Send the POST request with cURL
	$ch = curl_init();
	// set url
	curl_setopt($ch, CURLOPT_URL, $actualUrl);

	curl_setopt($ch, CURLOPT_FOLLOWLOCATION, 1);
	curl_setopt($ch, CURLOPT_MAXREDIRS, 2);

	curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, 10);
    //curl_setopt($ch, CURLOPT_USERAGENT, CURL_USER_AGENT);

	$output = curl_exec($ch);
	$error = curl_error($ch);

	//close connection
	curl_close($ch);
	//print_r(explode(' ',$output));exit;
	return $output;
}

function getVideoTranscodingStatus($vnid) {
	$video_transcode_status = '';
	$query = db_select('video_queue', 'vq');
	$query->fields('vq', array('status'))->condition('vq.entity_id', $vnid, '=');
	$result = $query->execute();
	while($transcode_status = $result->fetchObject())
	{
		$video_transcode_status = $transcode_status->status;
	}
	return $video_transcode_status;
}