<?php
	
  $query = db_select('node', 'n');
  $query->fields('n', array('uuid','nid'))->condition('n.uuid', "9f67f43b-7e65-40d3-9f11-7083ec6aa31a", '=');
  $result = $query->execute();
  $get_nid = $result->fetchObject();
  $block_details = node_load($get_nid->nid);
?>
<h2 class="block-title"><?php echo $block_details->title; ?></h2>
<?php echo $block_details->body['und'][0]['value']; ?>
