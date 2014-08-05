<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php 
global $base_url;

$query = db_select('node', 'n');
$query->fields('n', array('nid'))->condition('n.uuid', 'bc624f68-178c-4c43-8677-80557822f32c', '=');
$result = $query->execute();
$get_nid = $result->fetchObject();

$node_details = node_load($get_nid->nid);
print $node_details->body['und'][0]['value'];
?>

<p>
	<a role="button" href="<?php print $base_url; ?>/product-catalogue?qt-catalogue_page_block=1" class="btn  btn-primary liveeventbtn">View all Live Events >> </a>
</p>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>