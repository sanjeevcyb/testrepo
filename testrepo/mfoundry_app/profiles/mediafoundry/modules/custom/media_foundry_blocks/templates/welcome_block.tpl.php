<div class="wel welcome-btn">welcome <span> <?php  if (user_is_logged_in() == TRUE) {
    global $user;
    print  $user->name;
} ?> </span>
<span class="down-arrow-black"></span>
</div>
<div class="mobile-profile-welcome"></div>
	 <?php
global $user;
global $base_url;
$quantity = 0;

$order = commerce_cart_order_load($user->uid);
if ($order) {
    $wrapper = entity_metadata_wrapper('commerce_order', $order);
    $line_items = $wrapper->commerce_line_items;
    $quantity = commerce_line_items_quantity($line_items, commerce_product_line_item_types());
}
?>
<a href="<?php print base_path( )?>cart" class="cart-btn" >
	<?php print ($quantity==0)?'':$quantity; ?>
</a>
<div class="login-box change-right remove-arrow" id="userprofile">
						
						<div style="display: block;" class="profile">
							<ul>
								<li>
									<span class="pro">
										 <img src='<?php echo base_path().drupal_get_path('theme', 'affiliate_theme_one').'/images/pro.png'; ?>' alt='defaultimg' /> 
									</span>
                   <a href="<?php print $base_url;?>/user/<?php  print $user->uid; ?>" > 
									<span class="protxt">
										Profile
									</span>
                  </a>
								</li>
								<li>
									<span class="pro">
										   <img src='<?php echo base_path().drupal_get_path('theme', 'affiliate_theme_one').'/images/logout.png'; ?>' alt='defaultimg' /> 
									</span>
                  <a href="<?php print $base_url;?>/user/logout">
									<span class="protxt">
										Logout
									</span>
                  </a>
								</li>
							</ul>
						</div>
					</div>


