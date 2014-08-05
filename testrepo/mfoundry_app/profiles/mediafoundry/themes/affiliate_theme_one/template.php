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


// Add conditional stylesheets for IE

function affiliate_theme_one_preprocess_page(&$vars) {
  $path = drupal_get_path_alias();
   if ($path == 'tagclouds/chunk/1')
  {
    drupal_set_title('Tag Cloud');
  }
  $status = drupal_get_http_header("status");
  if($status == '403 Forbidden') {
      $vars['theme_hook_suggestions'][] = 'page__403';
  }
  if($status == '404 Not Found') {
      $vars['theme_hook_suggestions'][]  = 'page__404';
  }
}
function affiliate_theme_one_form_alter( &$form, &$form_state, $form_id ) {
    if (in_array( $form_id, array( 'user_login', 'user_login_block')))
    {
        $form['name']['#attributes']['placeholder'] = t( 'Email' );
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
	if (in_array( $form_id, array( 'comment-form')))
    {
        $form['comment-form']['#attributes']['placeholder'] = t( 'Leave a Comment' );
        //$form['pass']['#attributes']['placeholder'] = t( 'Password' );

	}


}


function affiliate_theme_one_get_login_block() {
    global $variables;
    $renderForm = drupal_get_form('user_login_block');
    $form = render($renderForm);
    return theme_status_messages($variables).$form;
}

function affiliate_theme_one_get_forgot_password() {
	 global $variables;
    $renderForm1 = drupal_get_form('user_pass');
    $form1 = render($renderForm1);
    return theme_status_messages($variables).$form1;
}

function affiliate_theme_one_select($variables) {
 $element = $variables['element'];
 element_set_attributes($element, array('id', 'name', 'size'));
 _form_set_class($element, array('form-select'));

 return '<div class="styled-select"><span class="select-text" ></span><select class="drupalSelect"' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select></div>';
}

function change_title($variables, $hook) {
  switch($hook){
    case 'page':
      if (drupal_get_title()) {
        $head_title = array(strip_tags(drupal_get_title()), variable_get('site_name', 'drupal'));
      }
      else {
        $head_title = array(variable_get('site_name', 'drupal'));
        if (variable_get('site_slogan', '')) {
          $head_title[] = variable_get('site_slogan', ''); }
      }
      $variables['head_title'] = implode(' | ', $head_title);
      $variables['head_title'] = str_replace('Access denied | ' , '' ,$variables['head_title']);
      break;
  }
  return $variables;
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
		if ($fh = fopen('' . $filename, 'w')) { // we create the file, notice the 'w'. This is to be able to write to the file once.
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