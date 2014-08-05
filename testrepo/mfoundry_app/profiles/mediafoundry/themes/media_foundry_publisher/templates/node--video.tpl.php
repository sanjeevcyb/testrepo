<?php
/**
 * @file
 * Adaptivetheme implementation to display a node.
 *
 * Adaptivetheme variables:
 * AT Core sets special time and date variables for use in templates:
 * - $submitted: Submission information created from $name and $date during
 *   adaptivetheme_preprocess_node(), uses the $publication_date variable.
 * - $datetime: datetime stamp formatted correctly to ISO8601.
 * - $publication_date: publication date, formatted with time element and
 *   pubdate attribute.
 * - $datetime_updated: datetime stamp formatted correctly to ISO8601.
 * - $last_update: last updated date/time, formatted with time element and
 *   pubdate attribute.
 * - $custom_date_and_time: date time string used in $last_update.
 * - $header_attributes: attributes such as classes to apply to the header element.
 * - $footer_attributes: attributes such as classes to apply to the footer element.
 * - $links_attributes: attributes such as classes to apply to the nav element.
 * - $is_mobile: Bool, requires the Browscap module to return TRUE for mobile
 *   devices. Use to test for a mobile context.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */

/**
 * Hiding Content and Printing it Separately
 *
 * Use the hide() function to hide fields and other content, you can render it
 * later using the render() function. Install the Devel module and use
 * <?php print dsm($content); ?> to find variable names to hide() or render().
 */
 
 global $base_url;
 hide($content['comments']);
 hide($content['links']);
 
 $video_thumbnail = $node->field_upload_video['und'][0]['thumbnailfile'];
 $video_thumbnail_url = file_create_url($video_thumbnail->uri);
 $video_files = $node->field_upload_video['und'][0]['playablefiles'];
 $vod_conn_url = variable_get('http_vod_app_address', 'http://192.168.254.93:1935/vod');
 $vod_folderid = $node->field_upload_video['und'][0]['fid'];
 $vod_path_android = $vod_conn_url."/_definst_/mp4:dev/videos/converted/".$vod_folderid."/".$video_files[0]->filename."/chunklist.m3u8";
 $vod_bitrate_path = $base_url."/sites/default/files/manifest/manifest_".$video_thumbnail->fid.".m3u8";

 // Check video trascoding status is successful and then generate the manifest file.

 $video_transcode_status = getVideoTranscodingStatus($node->nid);
 if($video_transcode_status == "10") {
	generateManifest($video_thumbnail->fid, $video_files);
 }
?>
<?php
    $video_title=$content['field_category']['#object']->title;
    $video_category=$content['field_category']['#object']->field_category['und'][0]['taxonomy_term']->name;
    $mediaFid = $node->field_upload_video['und'][0]['fid'];

    //URL for embed code
   $url_media = file_create_url($node->field_upload_video['und'][0]['uri']);

    //echo "<pre>";
    $vodName = $node->field_upload_video['und'][0]['filename'];
    $playableVodFiles = $node->field_upload_video['und'][0]['playablefiles'];
    $playable = array();
    for($ii=0; $ii<count($playableVodFiles);$ii++)
    {
      $playableVodFileArray = array();
      $playableVodFileArray[] = explode('videos/',$playableVodFiles[$ii]->uri);
      $playable[] = $playableVodFileArray[0][1];
    }
  
?>
<script type="text/javascript">
<?php
	$js_array = json_encode($playable);
	echo "var jsPlayableArray = ". $js_array . ";\n";
?>
var vod_conn_url = '<?php echo $vod_conn_url."/_definst_/mp4:dev/videos/"?>';
var screenWidth = window.screen.width;
var screenHeight = window.screen.height;
var video_thumb_url = '<?php echo $video_thumbnail_url; ?>';
var vod_bitrate_path = '<?php echo $vod_bitrate_path; ?>';
var vod_path_android = '<?php echo $vod_path_android; ?>';
var vodPath = vod_conn_url+jsPlayableArray[0]+'/playlist.m3u8';
for(i=0;i<jsPlayableArray.length;i++) {
	if(jsPlayableArray[i].search(window.screen.width)>0)
	{
		vodPath = vod_conn_url+jsPlayableArray[i]+'/playlist.m3u8';
	}
}
</script>

<?php 

if($video_transcode_status == '1') {
	$msg = "Video not yet transcoded";
}
else if($video_transcode_status == '5') {
	$msg = "Video transcoding under process";
}
else if($video_transcode_status == '10') {
	$msg = "Video transcoded successfully";
}
else if($video_transcode_status == '20') {
	$msg = "Video transcoding failed";
}
else
	$msg = "Transcoding Status :- NA";
?>
<div class="workbench-info-block">
	<strong><?php print $msg; ?></strong>
	<span style="float:right"><?php print l(t('REQUEUE VIDEO FOR TRANSCODING'), 'perform-video-requeue/'.arg(1), array('attributes' => array('class' => 'video-enqueue'))); ?></span>
</div><br>

<!-- Video Transcoding Status End  -->

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>

  <?php if ($title && !$page): ?>
    <header<?php print $header_attributes; ?>>
      <?php if ($title): ?>
        <h1<?php print $title_attributes; ?>>
          <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a>
        </h1>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <div<?php print $content_attributes; ?>>
  <?php print render($content['extra_link']); ?>
  <?php render($content['field_upload_video']); ?>

  <div class="video_rating clearfix">
  <div id="mediaplayer"></div>
  <div class="video-details">
							<span class="wrap-span">
								<span class="views"><!-- 678 Views --></span>
								<span class="rating"><?php print render($content['field_ratings']); ?></span>
							</span>
						<!--
						TODO :: If client wants to add subscribe button on video landing page then with understanding of requirement add this button.
						<input type="button" class="subscribe" value="Subscribe">  -->
	</div>		<!-- END video-details -->
  </div>

	<div class="about-video">
							<div class="abt-heading">
								<h6>
								<span class="abtactive">About Video</span>
								<?php /*if($node->field_add_to_subscription['und'][0]['value']==1):?>
								<span class="shareactive">Share</span>
								<?php endif;*/?>
								</h6>
								<div class="socialbtn">
									<!-- <div class="shr">
										<ul>
											<li>Share this video to:</li>
											<li class="f"></li>
											<li class="t"></li>
											<li class="g"></li>
										</ul>
									</div>-->
									<?php /*if($node->field_add_to_subscription['und'][0]['value']==1):?>
									<div class="emb">
										<span class="embtxt">Embed:</span>
										<a id="embedTab" href="#embedPane">Get Embed Code</a>
                                        <?php
                                        $mediaFid = $node->field_upload_video['und'][0]['fid'];
                                        $url_media = file_create_url($node->field_upload_video['und'][0]['uri']);
                                        flowplayer_add('#' . 'player', $url_media);
                                        ?>
										<a href="<?php print $url_media?>" id="player" class="player" style="display:none;width:425px;height:300px;margin:10px auto"></a>
										<div id="embedPane"><textarea id="embedcode" style="width:745px;height:200px;margin:10px auto"></textarea></div>
										<div class="videoSize">
    										<span class="videoSizeLabel">Video Size:</span>
    										<span class="videoSizeValue">
        										<select id="embedCodeSize" name="embedCodeSize">
        										  <option value="0">420 by 315</option>
        										  <option value="1">480 by 360</option>
        										  <option value="2">640 by 480</option>
        										  <option value="3">760 by 720</option>
        										</select>
    										</span>
										</div>
									</div>
									<?php endif;?*/?>
									<!-- <div class="videosz">
										<span class="vsztxt">Video Size:</span>
										<span class="select-text">Select Size</span>
										<select class="select-style">
											<option>Select Size</option>
											<option>560x315</option>
											<option>560x315</option>
										</select>
									</div> -->
								</div>
								<div class="abt-video-data">
									<span class="date"><?php print $submitted; ?></span>
									<?php print render($content['field_category']); ?>
										<span class="information">
										<div class="desc">Description</div>
										<?php  print render($content['body']); ?>
									</span>

								</div>
							</div>
	</div>	<!-- END about-video -->
	<div class="post-comment">

	   <?php print render($content['comments']['comment_form']); ?>
   </div>

	<div class="posted-comments">
		<?php print render($content['comments']); ?>
	</div>


    </div>

  <?php if ($links = render($content['links'])): ?>
    <nav<?php print $links_attributes; ?>><?php print $links; ?></nav>
  <?php endif; ?>



  <?php print render($title_suffix); ?>
</article>

<script type="text/javascript">
var noPlayerList = /Android|iPhone|iPod/i
/* Sharing on Social Media*/
if( noPlayerList.test(navigator.userAgent) == false) {
jwplayer('mediaplayer').setup({
	    wmode: "transparent",
        width: "100%",
	    height: "360",
		autostart: 'false',
		skin: 'bekle',
		playlist: [{
		image: video_thumb_url,
			sources: [{
                                //file: 'http://riaus-dev.mediafoundry.com.au/sites/default/files/manifest/manifest_2642.m3u8',
                                  file: vod_bitrate_path,
		          
					   }]
		}],

    });
} else {
    $html = '<video type="application/x-mpegurl" src="'+vod_path_android+'" width="380" height="358" autoplay="false" controls="true"></video>'
	jQuery('#mediaplayer').html($html);
 }
</script>