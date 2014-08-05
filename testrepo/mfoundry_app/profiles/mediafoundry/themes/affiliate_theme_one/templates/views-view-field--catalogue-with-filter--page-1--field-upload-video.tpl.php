<?php
	// Fetchning the data in the View Field and exploding it to get the values.
	$outputValues = explode("@@",$output); 

	// Array 1st param for video nid and retreiving pathalias
	$videoDisplayPath = drupal_get_path_alias("node/".$outputValues[0]);  

	// Array 2nd param for Video Thumbnail
	$videoThumbnail = $outputValues[1];

	// Array 3rd param for product nid and retreiving pathalias
	$productDisplayPath = drupal_get_path_alias("node/".$outputValues[2]);


	// Finding whether vidoe has been subscribed for. If subscribed it will have access to view.
	$node = node_load($outputValues[0]);
	$accessFlag = node_access('view', $node);

	// Modifying pathlink acc to the access
	if($accessFlag == 0)
		$path = $productDisplayPath;
	else if($accessFlag == 1)
		$path = $videoDisplayPath;
?>

<a href="<?php print $path; ?>"><?php print $videoThumbnail; ?></a>