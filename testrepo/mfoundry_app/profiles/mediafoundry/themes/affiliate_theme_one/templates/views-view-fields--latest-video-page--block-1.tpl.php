<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php
$product_id=$row->_field_data['nid']['entity']->field_display_name['und'][0]['product_id'];
$product = commerce_product_load($product_id);
$mediaNodeId = $product->field_premium_node['und'][0]['nid'];
$mediaNode = node_load($mediaNodeId);
$domain = domain_get_domain();
if($domain['domain_id'] != 1){
if($mediaNode->domain_site == True || in_array($domain['domain_id'], $mediaNode->domains)){

$currentTime = time() ;

if($mediaNode->type == 'live_event'){
  if($currentTime <= $mediaNode->field_schedule_from['und'][0]['value2'])
  {
    ?>
    <?php foreach ($fields as $id => $field): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <?php print $field->wrapper_prefix; ?>
      <?php print $field->label_html; ?>
      <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
    <?php endforeach; ?>
    <?php
  }
}
else{
//echo "<pre>";
//print_r($mediaNode);
if($mediaNode->status==1 && $mediaNode->workbench_moderation['published']->state == 'published')
{
?>
<?php foreach ($fields as $id => $field): ?>

    <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>
  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
<?php
}

}

}//End of if($mediaNode->domain_site == True || in_array($domain['domain_id'], $mediaNode->domains))
}//End of if($domain['domain_id'] != 1)
?>