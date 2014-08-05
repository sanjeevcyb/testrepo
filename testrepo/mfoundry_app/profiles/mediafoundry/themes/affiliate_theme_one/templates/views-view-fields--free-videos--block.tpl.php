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
$flagDisplay = 0 ;
$node = $row->_field_data['nid']['entity'];

$detect = mobile_detect_get_object();
$is_tablet = $detect->isTablet();
$is_mobile = $detect->isMobile();
if($is_mobile || $is_tablet)
{
  $DeviceIds = $node->field_select_devices['und'];
  $dids = array();
  foreach ($DeviceIds as $DeviceId) {
    $dids[] = $DeviceId['tid'];
  }
  $devices = taxonomy_term_load_multiple($dids);
  foreach ($devices as $device) {
    //echo "mobile...".$is_mobile;
    //echo "tab...".$is_tablet;
    //echo "device name...".$device->name;
    if(($is_mobile && !$is_tablet) && !strcasecmp($device->name, 'Mobile'))
    {
      $flagDisplay = 1;
    }
    if($is_tablet && !strcasecmp($device->name, 'Tablet'))
    {
      $flagDisplay = 1;
    }
  }
}

if(isset($_COOKIE["ip"]))
{
  $ip = $_COOKIE["ip"];
  if(isset($_COOKIE["country"]))
  {
    $country = $_COOKIE["country"];

    $countryIds = $node->field_restricted_country['und'];
    $tids = array();
    foreach ($countryIds as $countryId) {
      $tids[] = $countryId['tid'];
    }

    $countreis = taxonomy_term_load_multiple($tids);
   // print_r($countryNames);
    foreach ($countreis as $countryName) {
      if(!strcasecmp($country,$countryName->name))
      {
        $flagDisplay = 1 ;
        //print_r($flagDisplay);
       // return;
      }
    }
  }

  if($node->field_restricted_ip['und'][0]['value']!=='' && strstr($node->field_restricted_ip['und'][0]['value'],$ip))
  {
    $flagDisplay = 1 ;
    //return;;
  }
}

if($flagDisplay==0)
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
<?php }?>