<?php
if ($router_item = menu_get_item()) {
  if ($router_item['access']=='1') {
?>

<script type="text/javascript">
jQuery(document).ready(function() {
	jQuery('span.tagclouds-term a:first-child').first().addClass('tagclouds level6 level1');
	jQuery('span.tagclouds-term a').addClass('tagclouds level1');
});
</script>
<section class="block block-tagclouds" id="block-tagclouds-1">
	<div class="block-inner clearfix">  
      <h2 class="block-title">Tag Cloud</h2>
  
  <div class="block-content content">
  
		<?php 
			foreach ($rows as $row) {
				if($row['field_tags'] != '') {
		?>
		<span class="tagclouds-term"><?php print $row['field_tags']; ?></span>
		<?php
				}
			}
		?>
		<div class="more-link"><a title="more tags" href="/tags/more">More</a></div></div>
	</div>
</section>
<?php } } ?>