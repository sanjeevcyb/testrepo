<?php
	define('DRUPAL_ROOT', getcwd());
	require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
	drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

	$vid_file = array();
	
	
	$dir = "private://";

	if (is_dir($dir)){
	  if ($dh = opendir($dir)){
	    while (($file = readdir($dh)) !== false){
		    if ($file != "." && $file != ".." && $file != ".htaccess") {
				$vid_file = (object) array(
					'uid' => 1,
					'uri' => $file,
					'filemime' => file_get_mimetype($file),
					'status' => 1
				);
				
				echo '<pre>'; print_r($vid_file);
				echo '<br>';

				$node = new stdClass();
				$node->type = 'video';
				$node->uid = '1';
				$node->title = "TEST VIDEO";
				$node->field_category['und'][0]['tid']  = "10";
				$node->field_add_to_subscription['und'][0]['value']  = "1";
				
				$vid_file = file_copy($vid_file, 'private://videos/original');
				
				$media_file = new stdClass();
				$media_file->uid = 1;
				$media_file->filename = $file;
				$media_file->uri = $file;
				$media_file->filemime = file_get_mimetype($vid_file);
				$media_file->type = 'video';
				$media_file->status = 1;
				$media_file = file_save($vid_file);
				//echo '<pre>'; print_r($vid_file); 
				$node->field_upload_video['und'][0] = (array)$vid_file;

				echo '<pre>'; print_r($node); 
				echo '<br>';
				//node_save($node);
		    }
		}
		exit;
	    closedir($dh);
	  }
	}

?>
