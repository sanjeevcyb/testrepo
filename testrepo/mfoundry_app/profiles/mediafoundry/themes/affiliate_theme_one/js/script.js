
jQuery(document).ready(function(){
		jQuery('.view-event-catalogue-with-filter .views-row').each(function(){
			if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
				jQuery(this).find('.subscribe_price').css({display:"none"});
				}
			});
		if (jQuery("#branding a img").length > 0){
			jQuery('#name-and-slogan #site-name').hide();
			}
		else
			{
				jQuery('#name-and-slogan #site-name').show();
			}	
		var menulength = jQuery('.menu-wrapper ul.menu').children().length;
		if(menulength > 10)
		{
			jQuery(".menu-wrapper").hide();
			jQuery('#primary-menu-bar').addClass('dropdownmenu');
			jQuery('a#menu-icon').css({display:"block"});
			jQuery(document).click(function (e) {
		        var e2 = jQuery(".menu-wrapper");
		        if (e2.is(":visible")) {
		            e2.hide();
		        }
		    });
		}
		jQuery('.page-node-101 #page #userprofile').hide();
		jQuery("#embedCodeSize option[value='0']").attr("selected", true);
		
		/****Dropdown Box*****/
		jQuery(".drupalSelect option[value='0']").attr("selected", true);
		jQuery('.videoSizeValue span').html(jQuery('#embedCodeSize option:selected').text());
		
		
		jQuery('.drupalSelect').each(function(){
			var currId=jQuery(this).attr('id');
			jQuery(this).parent().find('.select-text').html(jQuery("#" + currId + " option:selected").text());
		});
		/*****End Dropdown Box****/
		jQuery('.view-homepageevents .views-row').each(function(){
		if (jQuery(this).find('.subscribe_price span').html()==""){
			jQuery(this).find('.subscribe_price').css({display:"none"});
			}
		});
		
		jQuery('.view-homepagevideo .views-row').each(function(){
			if (jQuery(this).find('.subscribe_price span').html()==""){
				jQuery(this).find('.subscribe_price').css({display:"none"});
				}
			});
		jQuery('.view-catalogue-with-filter .views-row').each(function(){
			if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
				jQuery(this).find('.subscribe_price').css({display:"none"});
				}
			});
		
		jQuery("#quicktabs-tab-catalogue_page_block-1").click(function(e){
			jQuery('.view-event-catalogue-with-filter .views-row').each(function(){
				if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
					jQuery(this).find('.subscribe_price').css({display:"none"});
					}
				});
		});
	
		
		jQuery('#edit-comment-body-und-0-value').attr("placeholder","Leave a Comment");
		jQuery('a.sign-up').parent().parent().addClass('align-ul');
		
		if(jQuery("div.login-box .error").html()!=null)
		{
			if(jQuery("div.login-box .forgot-password .error").html()!=null)
			{
				jQuery("div.forgot-password").attr("id","forgot-pwd");
				jQuery('.login').hide();
				jQuery('#forgot-pwd').show();
			}
			jQuery('.page-catalogue #page-title').live('click',function(){
				
				jQuery('.page-catalogue .view-filters').toggle();
			});
			
			jQuery('.login-box').toggle();
			if ( jQuery('.login').is(':visible') )
			{
				jQuery('.forgot-password').hide();
				jQuery('.login').show();
			}
		}
	
		jQuery("#menu-icon").click(function(e){
			e.stopPropagation();
			jQuery('.menu-wrapper').toggle();
		});
		
		jQuery(window).resize(function() {
		    windowsize = jQuery(window).width();
		    if (windowsize < 768) {
		    	jQuery(".menu-wrapper").hide();
				jQuery(document).click(function (e) {
			        var e2 = jQuery(".menu-wrapper");
			        if (e2.is(":visible")) {
			            e2.hide();
			        }
			    });
		    }
		  else if(menulength < 10)
		    	{
		    	jQuery(".menu-wrapper").show();
		    	jQuery(document).click(function (e) {
		    		jQuery(".menu-wrapper").show();
		    		});
		    	}
		});
		
		jQuery('.cat-menu-icon').click(function(e){
			e.stopPropagation();
			jQuery('.page-product-catalogue .views-exposed-widgets').toggle();
		}); 
		
		jQuery(window).resize(function() {
		    windowsize = jQuery(window).width();
		    if (windowsize < 768) {
		    	jQuery(".page-product-catalogue .views-exposed-widgets").hide();
		    	jQuery(document).click(function (e) {
		        var e2 = jQuery(".page-product-catalogue .views-exposed-widgets");
		        if (e2.is(":visible")) {
		            e2.hide();
		        }
		    	}); 
		    }
		    else
	    	{
		    	jQuery(".page-product-catalogue .views-exposed-widgets").show();
		    	jQuery(document).click(function (e) {
		    		jQuery(".page-product-catalogue .views-exposed-widgets").show();
		    		});
	    	}
		});
		/***********Login for user image icon***********/
		jQuery('.mobile-profile').click(function(e){
			e.stopPropagation();
			jQuery("#topcontent").toggle();
			jQuery("#main-content").toggle();
			jQuery('.login-box').toggle();
			jQuery('.signin').toggleClass('change-color');
		});
		jQuery(window).resize(function() {
			var curruntSize = jQuery(window).width();
			if(curruntSize > 768){
				jQuery("#topcontent").show();
				jQuery("#main-content").show();
			}
			else if(curruntSize < 768)
				{
				 var e2 = jQuery(".login");
			        if (e2.is(":visible")) 
			        {
						jQuery("#topcontent").hide();
						jQuery("#main-content").hide();
			        }
			    }
		});
		
		jQuery(document).click(function() {
	      var e2 = jQuery(".login-box");
	        if (e2.is(":visible")) {
	        	jQuery(".login-box").hide();
	        	jQuery("#topcontent").show();
	        	jQuery("#main-content").show();
				jQuery("#block-block-10").show();
	        }
	    });
		/***********Login for user image icon***********/
		/****Logout link on image click******/
		jQuery('.mobile-profile-welcome').click(function(e){
			e.stopPropagation();
			jQuery("#topcontent").toggle();
			jQuery("#main-content").toggle();
			jQuery(".region-sidebar-second").toggle();
			jQuery('.profile').toggle();
			jQuery("#userprofile").css({display:"block"});
		});
		
		jQuery(window).resize(function() {
			var curruntSize = jQuery(window).width();
			if(curruntSize > 768){
				jQuery("#topcontent").show();
				jQuery("#main-content").show();
			}
			else if(curruntSize < 768)
				{
				 var e3=jQuery("#userprofile");
			        if (e3.is(":visible")) 
			        {
						jQuery("#topcontent").hide();
						jQuery("#main-content").hide();
						jQuery(".region-sidebar-second").hide();
			        }
			    }
		});
		
		/****Logout link on image click******/
		
		/***************Related Videos Scroll***************/
		jQuery(document).ready(function(){
			var currentWidth = jQuery(window).width();
				if(currentWidth < 769){
					jQuery('.view-related-video ul').niceScroll({cursorcolor:"#666666",cursorborderradius:"2px",cursorwidth :'5px'});
					console.log("complete");
				}
		});
		/************Related Videos Scroll******************/
		jQuery('.login').click(function(e)
		{	
			e.stopPropagation();
		});
		
		//Reset button issue
		jQuery('#edit-reset').click(function(){
			jQuery("input:checkbox").each(function() {
			    jQuery(this).removeAttr('checked');
			});
			
			jQuery('form').reset();
			return false;
			});
		
		
		
	jQuery('.forgot-password').click(function(e)
	{	
		e.stopPropagation();
	});
		
	jQuery('#embedCodeSize').change(function(){
		jQuery('.videoSizeValue span').html(jQuery('#embedCodeSize option:selected').text());
		
	});
	/****Dropdown Box*****/
	jQuery('.drupalSelect').live('change',function(){
		var currId=jQuery(this).attr('id');
		jQuery(this).parent().find('.select-text').html(jQuery("#" + currId + " option:selected").text());
		
	});
	 
	jQuery( document ).ajaxStop(function() {
		  jQuery('.drupalSelect').each(function(){
				var selVal=jQuery(this).val();
				var selText = jQuery(this).find('option:selected').text();
				jQuery(this).parent().find('.select-text').html(selText);
			});
		  
		  jQuery('.view-catalogue-with-filter .views-row').each(function(){
				if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
					jQuery(this).find('.subscribe_price').css({display:"none"});
					}
				});
		  
		  jQuery('.view-event-catalogue-with-filter .views-row').each(function(){
				if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
					jQuery(this).find('.subscribe_price').css({display:"none"});
					}
				});
		});
	
	/****End of Dropdown Box*****/
	jQuery('.down-arrow-black').click(function(e){
		e.stopPropagation();
		jQuery('.login-box').toggle();
		jQuery('.login').show();
		jQuery('.forgot-password').hide();
		jQuery('.signin').toggleClass('change-color');
	});
	
	jQuery(document).click(function () {
        var e2 = jQuery(".login-box");
        if (e2.is(":visible")) {
            e2.hide();
        }
    });
	
	jQuery('.recover-password').click(function(e){
		e.stopPropagation();
		e.preventDefault();
		jQuery('.login').hide();
		jQuery('.forgot-password').show();
	});
	
	jQuery('.Cancel').click(function(){
		jQuery('.login').show();
		jQuery('.forgot-password').hide();
	});
	
	jQuery("#submit-btn").click(function(){
		jQuery(".forgot-password").hide();
		jQuery(".submit-form").show();
	});
	
	jQuery("#okay").click(function(){
		jQuery('.login').show();
		jQuery('.submit-form').hide();
	});
	
    
    if (isIE () == 8) {
	 // IE8 code
		jQuery('.login-box').append('<span class="triangle"></span>');
	}
	
	jQuery('.video-list li').click(function(){
		var url = jQuery(this).find('img').attr('videourl');
		jQuery('video source[type="video/mp4; codecs="avc1.42E01E, mp4a.40.2""]').attr('src',url+'.mp4');
		jQuery('video source[type="video/webm; codecs="vp8, vorbis""]').attr('src',url+'.mp4');
		jQuery('video source[type="video/ogg; codecs="theora, vorbis""]').attr('src',url+'.mp4');
		jQuery("video").get(0).currentTime = 0;
		jQuery("video").get(0).play();
	});

	/* video page */
	jQuery(".shareactive").click(function(){
		jQuery(this).addClass("abtactive");
		jQuery(this).siblings().removeClass("abtactive");
		jQuery(".abt-heading .socialbtn").show();
		jQuery(".abt-video-data").hide();
	});
	jQuery(".abtactive").click(function(){
		jQuery(this).addClass("abtactive");
		jQuery(this).siblings().removeClass("abtactive");
		jQuery(".abt-heading .socialbtn").hide();
		jQuery(".abt-video-data").show();
	});
	
	});

function isIE () {
  var myNav = navigator.userAgent.toLowerCase();
  return (myNav.indexOf('msie') != -1) ? parseInt(myNav.split('msie')[1]) : false;
}
