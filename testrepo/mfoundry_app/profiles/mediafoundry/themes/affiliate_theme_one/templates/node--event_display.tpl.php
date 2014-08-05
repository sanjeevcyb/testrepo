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

$product_id = $content['field_display_name']['#object']->field_display_name['und'][0]['product_id'];

$product = commerce_product_load($product_id);
$mediaNodeId = $product->field_premium_node['und'][0]['nid'];
$mediaNode = node_load($mediaNodeId);
//print_r($mediaNode);
if($mediaNode->type == 'live_event'){
  $imagelink = $mediaNode->field_event_thumbnail['und'][0]['uri'];
}else if($mediaNode->type == 'video'){
  $imagelink = $mediaNode->field_upload_video['und'][0]['thumbnailfile']->uri;
}

$mediaimage = array(
    'style_name' => 'affiliate_homepage_videotab', //the image style created
    'path' => $imagelink,
);
$category=$content['field_category']['#object']->field_category['und'][0]['taxonomy_term']->name;
?>
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
  <div class="contentImage"><?php print theme('image_style', $mediaimage); ?></div>
  <h2 class="category_title field-label">Category:</h2><span class="category_value"><?php echo $category; ?></span>
  
  <div class="contentDescription event_display_desc"><?php print ($mediaNode->body['und'][0]['value']);?></div>
  
  <?php print render($content); ?>
  <?php
  global $user;
  // Code for Anonymous user
  $subMessage = "";
  if($user->uid==0)
  {
    $subMessage = "Please Login To Subscribe The Product";
  }
  else
  {
    $subMessage = "You Have Already Subscribed The Product Or The Product Is Already Added To Your Cart";
  }

  ?>
  <div class='subMessage'><?php echo $subMessage;?></div>
  </div>

  <?php if ($links = render($content['links'])): ?>
    <nav<?php print $links_attributes; ?>><?php  print $links; ?></nav>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

  <?php print render($title_suffix); ?>
</article>
<style>
.subMessage{
  display:none;
}
</style>
<script type='text/javascript'>
	jQuery(document).ready(function() {
	jQuery("div.start-date-wrapper label").html('Start Date');
	jQuery("div.end-date-wrapper label").last().html('End Date');
	jQuery("div.end-date-wrapper input").attr("readonly","true");
	jQuery("div.start-date-wrapper input").attr("readonly","true");
	jQuery("div.end-date-wrapper input").focus(function() {
			jQuery("#ui-datepicker-div").hide();
		});
	var btnCart = jQuery('div.field-name-field-display-name form input[type="submit"]').val();
	  var message = jQuery('div#messages div.messages status').html();
	if(btnCart != 'Add to cart')
	{
		jQuery('.subMessage').show();
	}
	else
	{
		jQuery('.subMessage').hide();
	}
});
</script>