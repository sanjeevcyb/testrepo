<?php
if(arg(0) == 'node' && is_numeric(arg(1)) && ((arg(2) == "" || arg(2) == 'view'))) 
{
	$enid = arg(1);
	$enode = node_load($enid);
?>
	<div>
	<div style= "border:1px dotted black;">
	<strong></strong>
	<div>Publishing Point : <?php  echo $live_conn_url = variable_get('publishing_point', ''); ?></div>
	<strong>Publisher User Credential </strong>
	<div>Username : <?php  echo $live_conn_url = variable_get('publisher_name', ''); ?></div>
	<div>Password : <?php  echo $live_conn_url = variable_get('publisher_pass', ''); ?> </div>
	<div>Stream Name =  <?php echo $enode->field_media_server_integration['und'][0]['value']; ?></div>
	</div>
	</div>
<?php
}
?>	