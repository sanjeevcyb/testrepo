<script type="text/javascript">
jQuery(document).ready(function() {
	jQuery('span.tagclouds-term a:first-child').first().addClass('tagclouds level6 level1');
	jQuery('span.tagclouds-term a').addClass('tagclouds level1');
});
</script>

<header class="clearfix" id="main-content-header">
	<h1 id="page-title">Tag Cloud</h1>
</header>

<div class="region" id="content">
	<div class="block block-system no-title" id="block-system-main">  
	  
		<div class="wrapper tagclouds">
		
		<?php 
			foreach ($rows as $row) {
				if($row['field_tags'] != '') {
		?>
			<span class="tagclouds-term"><?php print $row['field_tags']; ?></span>
		<?php 
				}
				}
		?>
		</div>
	</div>
  
</div>
	
	
