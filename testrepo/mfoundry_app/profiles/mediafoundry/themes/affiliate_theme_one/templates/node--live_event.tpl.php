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
hide($content['comments']);
hide($content['links']);
?>
<?php
global $base_url;

$tid = $content['body']['#object']->field_category['und'][0]['taxonomy_term']->tid;
$term = taxonomy_term_load($tid); // load term object
$term_uri = taxonomy_term_uri($term); // get array with path
$term_title = taxonomy_term_title($term);
$term_path  = drupal_get_path_alias($term_uri['path']);
$taxonomy_value = l($term_title,$term_path);
	//$taxonomy_term=$content['body']['#object']->field_category['und'][0]['taxonomy_term']->tid;
	//$taxonomy_value='taxonomy/term/'.$taxonomy_term;

	$event_title=$content['body']['#object']->title;
	$event_category=$content['body']['#object']->field_category['und'][0]['taxonomy_term']->name;
?>
<div id="container-box" class="blog">
	<div class="width-set video-page">
		<div class="video-container left">
			<div class="video">
			  <h3 class="blog_title"><?php echo $event_title; ?></h3>
				<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
				 <div <?php print $content_attributes; ?>>
				   <?php print render($content['extra_link']); ?>
				    <?php // print render($content['field_media_server_integration']); ?>
				     <!-- Code to add live event stream  -->
                         <?php
                           $start_date = $node->field_schedule_from['und'][0]['value'];
                           $end_date = $node->field_schedule_from['und'][0]['value2'];
                           $baseurl = base_path();
                           $currtime = time();
                           $live_conn_url = variable_get('http_live_app_address', 'http://192.168.254.93:1935/live');
                           if(!empty($node->field_media_server_integration)) {
                             $stream_name = $node->field_media_server_integration['und'][0]['value'];
                           }
                           else {
                             $stream_name = "";
                           }
                            $livestreampath = $live_conn_url."/_definst_/".$stream_name."/playlist.m3u8";
                         ?>
                         <div class="video_rating clearfix">
                          <div class="liveventwidth">
                           <?php  if( $currtime < $start_date) { ?>
                                <img width="727" height="420" src="<?php print base_path() . path_to_theme(); ?>/images/comingsoon.jpg" alt="Event coming soon" />
                           <?php }
                           else if( $currtime > $end_date) {
                           ?>
                                <img width="727" height="420" src="<?php print base_path() . path_to_theme(); ?>/images/liveeventover.jpg" alt="Event over" />
                           <?php } else { ?>
                           <div id="mediaplayer"></div>
                           <?php } ?>
                          </div>
                          <!-- // end of live event stream -->

                           <div class="video-details">
                                  <span class="wrap-span left">
                                  	<span class="views"><!-- 678 Views --></span>
                                          <span class="rating"><?php print render($content['field_ratings']); ?></span>
                                  </span>
                                  <!--
                                  TODO :: If client wants to add subscribe button on video landing page then with understanding of requirement add this button.
                                  <input type="button" class="subscribe" value="Subscribe">  -->
								</div>		<!-- END video-details -->
								</div><!-- END video_rating-->
								<div class="about-video">
                                <div class="abt-heading">
                                        <h6>
                                        <span class="abtactive">About Video</span>
                                        </h6>
                                        <div class="abt-video-data">
                                                <span class="date"><?php print $submitted; ?></span>
                                                <span class="category">Category: <span class="cat-option">
									            <?php echo $taxonomy_value;?>
                                                </span></span>
                                                <div class="desc">Description</div>
                                                <span class="information">
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
			</div>
		</div>
	</div>
</div>

<script type="text/javascript">
    var noPlayerList = /Android|iPhone|iPod/i
    var path = '<?php echo $livestreampath; ?>';
    if( noPlayerList.test(navigator.userAgent) == false) {

       jwplayer('mediaplayer').setup({
       	    wmode: "transparent",
       		width: "100%",
       		height: "420",
       		autostart: 'false',
       		playlist: [{
   				sources: [{file: path}]
   			}],

    });
   }
   else {
       $html = '<video type="application/x-mpegurl" src="'+path+'" width="100%" height="420" autoplay="false" controls="true"></video>'
   	jQuery('#mediaplayer').html($html);
    }
</script>