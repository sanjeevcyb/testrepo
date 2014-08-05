
	
<form action="<?php echo $elements['#action']; ?>"  method="<?php echo $elements['#method']; ?>" id="<?php echo $elements['#id'] ; ?>" accept-charset="UTF-8">

<input type="hidden" value="<?php print $elements['form_build_id']['#value']; ?> " name="form_build_id">
<input type="hidden" value="<?php print $elements['form_id']['#value']; ?>" name="form_id">


<div class="login-box">
		<div class="login">
	 
	
				<label>Let's Get Started!</label>
				
				<?php echo $elements['name']['#children']; ?>
	
				<?php echo $elements['pass']['#children']; ?>
  	
  		</div>
								   		
		<div class="item-list">
			<ul class="align-ul">
					<li class="odd last">	<?php echo $elements['remember_me']['#children']; ?></li>
					<li class="even first"><a class="recover-password" href="javascript:logintoggle()">Forgot password</a></li>
			</ul>
		</div>
		
		<div class="btn-signin">
			<input type="hidden" value="user_login_block" name="form_id">
			<input type="submit" class="form-submit" value="Sign In" name="op" id="edit-submit--12" tabindex="1">
	     </div>
	
</div>    <!--END login-box -->

</form>



