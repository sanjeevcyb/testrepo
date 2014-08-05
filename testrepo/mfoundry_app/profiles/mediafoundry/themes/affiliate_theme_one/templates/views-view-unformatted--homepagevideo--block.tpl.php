<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php global $base_url;
$query = db_select('node', 'n');
$query->fields('n', array('nid'))->condition('n.uuid', '46a51e23-70c1-458f-adfb-cdee1d9e4c11', '=');
$result = $query->execute();
$get_nid = $result->fetchObject();

$node_details = node_load($get_nid->nid);
print $node_details->body['und'][0]['value'];
 ?>
<p><a class="btn btn-primary liveeventbtn" href="<?php print $base_url; ?>/product-catalogue">View all Videos >></a></p>


<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>


