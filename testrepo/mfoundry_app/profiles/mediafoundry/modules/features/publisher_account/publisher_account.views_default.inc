<?php
/**
 * @file
 * publisher_account.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function publisher_account_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publisher_account';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publisher Account';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publisher Account';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';

  //RETRIEVING THE RIDS FROM UUID
  $access_rids =array();
  $query = db_select('role', 'r');
  $query->fields('r', array('rid'))->condition('r.uuid', array('6c2a7bdd-0f5c-4c75-b20d-7c7ca2f2c4a4','106a6282-433a-4cdb-aa2f-29e39d374f04'), 'IN');
  $result = $query->execute();
  while($get_rid = $result->fetchObject())
  {
    array_push($access_rids, $get_rid->rid);
  }

  $handler->display->display_options['access']['role'] = array(
    $access_rids[0] => $access_rids[0],
    $access_rids[1] => $access_rids[1],
  );

  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publisher' => 'publisher',
  );

  /* Display: Page: Publisher Account */
  $handler = $view->new_display('page', 'Page: Publisher Account', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Account Manager (field_account_manager) */
  $handler->display->display_options['relationships']['field_account_manager_uid']['id'] = 'field_account_manager_uid';
  $handler->display->display_options['relationships']['field_account_manager_uid']['table'] = 'field_data_field_account_manager';
  $handler->display->display_options['relationships']['field_account_manager_uid']['field'] = 'field_account_manager_uid';
  $handler->display->display_options['relationships']['field_account_manager_uid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_account_manager_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_account_manager_uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_account_manager_uid';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_account_manager_uid';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_account_manager_uid';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Contact Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'field_account_manager_uid';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: User: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_account_manager_uid';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Publisher Name */
  $handler->display->display_options['fields']['field_publisher_name']['id'] = 'field_publisher_name';
  $handler->display->display_options['fields']['field_publisher_name']['table'] = 'field_data_field_publisher_name';
  $handler->display->display_options['fields']['field_publisher_name']['field'] = 'field_publisher_name';
  $handler->display->display_options['fields']['field_publisher_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher_name']['type'] = 'jeditable_textfield';
  /* Field: Content: Publisher ID */
  $handler->display->display_options['fields']['field_publisher_id']['id'] = 'field_publisher_id';
  $handler->display->display_options['fields']['field_publisher_id']['table'] = 'field_data_field_publisher_id';
  $handler->display->display_options['fields']['field_publisher_id']['field'] = 'field_publisher_id';
  $handler->display->display_options['fields']['field_publisher_id']['exclude'] = TRUE;
  /* Field: Content: Email Id */
  $handler->display->display_options['fields']['field_email_id']['id'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['table'] = 'field_data_field_email_id';
  $handler->display->display_options['fields']['field_email_id']['field'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_id']['type'] = 'jeditable_textfield';
  /* Field: Content: Publisher Website URL */
  $handler->display->display_options['fields']['field_publisher_website_url']['id'] = 'field_publisher_website_url';
  $handler->display->display_options['fields']['field_publisher_website_url']['table'] = 'field_data_field_publisher_website_url';
  $handler->display->display_options['fields']['field_publisher_website_url']['field'] = 'field_publisher_website_url';
  $handler->display->display_options['fields']['field_publisher_website_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher_website_url']['type'] = 'jeditable_textfield';
  /* Field: Content: Publisher Address */
  $handler->display->display_options['fields']['field_publisher_address']['id'] = 'field_publisher_address';
  $handler->display->display_options['fields']['field_publisher_address']['table'] = 'field_data_field_publisher_address';
  $handler->display->display_options['fields']['field_publisher_address']['field'] = 'field_publisher_address';
  $handler->display->display_options['fields']['field_publisher_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher_address']['type'] = 'jeditable_textfield';
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'jeditable_textfield';
  /* Field: Content: Account Owner */
  $handler->display->display_options['fields']['field_account_owner']['id'] = 'field_account_owner';
  $handler->display->display_options['fields']['field_account_owner']['table'] = 'field_data_field_account_owner';
  $handler->display->display_options['fields']['field_account_owner']['field'] = 'field_account_owner';
  $handler->display->display_options['fields']['field_account_owner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_owner']['type'] = 'jeditable_textfield';
  /* Field: Content: Account Status */
  $handler->display->display_options['fields']['field_account_status']['id'] = 'field_account_status';
  $handler->display->display_options['fields']['field_account_status']['table'] = 'field_data_field_account_status';
  $handler->display->display_options['fields']['field_account_status']['field'] = 'field_account_status';
  $handler->display->display_options['fields']['field_account_status']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="account-details left">
<div class="detail-info left">
    [picture]
<span class="user-name left">    
    [field_first_name]
    [field_last_name]
</span> <br>
<span class="email-ph">
	<span class="user-email-id">
             [mail]</span>
	     <span>|</span>
	<span class="user-number"> 
                [field_phone]
         </span>
</span>
   <p class="about-user">
        [field_description]
    </p>
</div>
</div>

<div class="set-width">
        
       <div class="add-user-profile left form-width">
                      <h3 class="left">Account Information</h3>
                            <div class="add-profile left form-width publisher">
<div class="outerdiv">
                           <div class="firstdiv">
                           <p class="left">
							<span class="label_left">Publisher Name: </span>
							 <p  class="border"> [field_publisher_name] </p>
			   </p>


                            <p class="left">
							 <span  class="label_left">Publisher ID: </span>
							 <p  class="border">  [field_publisher_id]</p>
			   </p>

                            <p class="left">
							  <span  class="label_left">Email Id:  </span>
							  <p  class="border">[field_email_id] </p>
 			    </p>

                           <p class="left">
							 <span class="label_left">Publisher Website URL:  </span>
							 <p class="border">[field_publisher_website_url] </p>
			   </p>
                          </div>
                          <div class="seconddiv">

                           <p class="left">
							<span class="label_left">Publisher Address:  </span>
							 <p  class="border"> [field_publisher_address]</p>
			   </p>

                          <p class="left">
							 <span  class="label_left">Phone Number: </span>
							 <p class="border"> [field_phone_number] </p>
			   </p>

                           <p class="left">
							<span class="label_left">Account Owner:</span>
							<p class="border">  [field_account_owner] </p>
			   </p>

                           <p class="left">
 							<span class="label_left">Account Status: </span>
							<p class="border">[field_account_status]  </p>
			   </p>
                           </div>
</div>

                    


               </div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'publisher-account';
  $export['publisher_account'] = $view;

  return $export;
}
