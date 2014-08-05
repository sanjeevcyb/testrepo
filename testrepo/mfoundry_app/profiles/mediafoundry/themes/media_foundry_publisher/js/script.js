
jQuery(document).ready(function() {

	
	/**********CODE FOR ADDING LABEL TO CHECHBOXES************/	   
	if (jQuery(".form-type-checkbox label").length > 0)   //check wether checkbox is present
	{
		if (jQuery('input[type="checkbox"]').hasClass('form-checkbox')) {
		
			jQuery('input[type="checkbox"]:nth-child(1)').after("<label class='option'></label>");
		}
		else
		{
			jQuery('input[type="checkbox"]').next("label").remove();
		}
	}
	else
	{	
		if(jQuery('.form-type-checkbox').find('input[type="checkbox"]'))
		{
			jQuery('input[type="checkbox"]').after("<label class='option'></label>");
		}
		
	}
	/**********CODE FOR ADDING LABEL TO CHECHBOXES ENDS HERE************/	
	
	/**************CODE FOR ADDING LABEL TO RADIOBOX***************/
	if (jQuery(".form-type-radio label").length == 0)   
	{
		jQuery('input[type="radio"]').each(function()
		{
		    var radio_id = jQuery(this).attr( "id" );
		    jQuery(this).after('<label for="' + radio_id + '"></label>');
		});
	}
	/*************CODE FOR ADDING LABEL TO RADIOBOX****************/
	
	/********Start of Catalogue Filter*********/
	
	jQuery('.view-catalogue-with-filter .views-row').each(function(){
		console.log("ct video");
		if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
			jQuery(this).find('.subscribe_price').css({display:"none"});
			}
		});
	
	jQuery("#quicktabs-tab-catalogue_page_block-1").click(function(e){
		console.log("ct event click");
		jQuery('.view-event-catalogue-with-filter .views-row').each(function(){
			if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
				jQuery(this).find('.subscribe_price').css({display:"none"});
				}
			});
		});
	
	/****To display Catalogue Filters****/
	jQuery('.cat-menu-icon').click(function(e){
		e.stopPropagation();
		jQuery('.page-product-catalogue .views-exposed-widgets').toggle();
	}); 
	/***To display Catalogue Filters*****/
	
	/********End of Catalogue Filter*********/
	
 /****Dropdown Box*****/
	jQuery(".drupalSelect option[value='0']").attr("selected", true);
		
	jQuery('.drupalSelect').each(function(){
		var currId=jQuery(this).attr('id');
		jQuery(this).parent().find('.select-text').html(jQuery("#" + currId + " option:selected").text());
	});
	/*****End Dropdown Box****/
 
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
		  
		  if (jQuery(".form-type-checkbox label").length > 0)   //check wether checkbox is present
			{
				if (jQuery('input[type="checkbox"]').hasClass('form-checkbox')) {
				
					jQuery('input[type="checkbox"]:nth-child(1)').after("<label class='option'></label>");
				}
				else
				{
					jQuery('input[type="checkbox"]').next("label").remove();
				}
			}
			else
			{	
				if(jQuery('.form-type-checkbox').find('input[type="checkbox"]'))
				{
						jQuery('input[type="checkbox"]').after("<label class='option'></label>");
				}
				
			}
		  /****Start of Catalogue Filter****/
		  
		  jQuery('.view-catalogue-with-filter .views-row').each(function(){
			  console.log("In ajax first");
				if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
					jQuery(this).find('.subscribe_price').css({display:"none"});
					}
				});
		  
		  jQuery('.view-event-catalogue-with-filter .views-row').each(function(){
			  console.log("In ajax second");
				if (jQuery(this).find('.subscribe_price span.event_price').is(':empty')){
					jQuery(this).find('.subscribe_price').css({display:"none"});
					}
				});
		  
		  /*****End of Catalogue Filter******/
	});
	
	/****End of Dropdown Box*****/
 
 
 
 
 
	jQuery("#menu-icon").click(function(e){
			e.stopPropagation();
			jQuery('.primary-menu-wrapper').toggle();
	});
	
	jQuery(document).click(function () {
              
        var e2 = jQuery(" #userprofile");
        if (e2.is(":visible")) {
            e2.hide();
        }
       
    });  

	
	
	jQuery(window).resize(function() {
	      var windowsize = jQuery(window).width();
	      if (windowsize < 768)
	      {
	    	  jQuery("#primary-menu-bar nav").hide();
	    	  jQuery(".page-product-catalogue .views-exposed-widgets").hide();
	    	  jQuery(document).click(function ()
	    			  {
	    	        var e2 = jQuery("#primary-menu-bar nav");
	    	        var e3 = jQuery(".page-product-catalogue .views-exposed-widgets");
	    	        if (e2.is(":visible")) {
	    	        	e2.hide();
	    	        	}
    	        	 if (e3.is(":visible")) {
    			            e3.hide();
    			        }	
	    	        
	    			  });
	      }
	      else 
	      {
	    	  jQuery('.primary-menu-wrapper').show();
	    	  jQuery(".page-product-catalogue .views-exposed-widgets").show();
	    	  jQuery(document).click(function ()
	    	  {
		    	  jQuery('.primary-menu-wrapper').show();
		    	  jQuery(".page-product-catalogue .views-exposed-widgets").show();
	    	  });
	    	  
	      }
	    	        
	   });  
	      

	/***** CODE FOR GETTING SUBSTRING FOR UPLOAD VIDEO TITLE*******/		
	jQuery("#video-node-form" ).ajaxComplete(function() {
		  
		
	var filename=jQuery(".video-widget-data span a").html();
		
	jQuery(".video-widget-data span a").html(filename.substr(0,23)+'...');
	});
	
	/***** CODE FOR GETTING SUBSTRING FOR UPLOAD VIDEO TITLE ENDS*******/	
		
 	var content = jQuery(".page-userslist.views-table.views-field-status").text();
 
    if (content == "Yes") {
 
       jQuery(this).css("color", "#008000");
    }
   if (content == "No") {
        jQuery(this).css("color", "#A52A2A"); 
    }
   	
  			
	
	jQuery('.down-arrow-black').click(function(e){
		console.log("on login click");
		e.stopPropagation();
		jQuery('#userprofile').toggle(400);
	});

	jQuery(document).click(function () {
        var $el = jQuery("#userprofile");
        if ($el.is(":visible")) {
            $el.hide();
        }
    });
	
	jQuery("#submit-btn").click(function(){
		jQuery(".forgot-password").hide();
		jQuery(".submit-form").show();
	});
	
	jQuery("#okay").click(function(){
		jQuery('.login').show();
		jQuery('.submit-form').hide();
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
    
  	
	jQuery('.video-list li').click(function(){
		var url = jQuery(this).find('img').attr('videourl');
		jQuery('video source[type="video/mp4; codecs="avc1.42E01E, mp4a.40.2""]').attr('src',url+'.mp4');
		jQuery('video source[type="video/webm; codecs="vp8, vorbis""]').attr('src',url+'.mp4');
		jQuery('video source[type="video/ogg; codecs="theora, vorbis""]').attr('src',url+'.mp4');
		jQuery("video").get(0).currentTime = 0;
		jQuery("video").get(0).play();
	});
	
	var editPage = jQuery('form#video-node-form').attr('action'); 
	var arrEdit = editPage.split('edit');
	if(arrEdit.length>1)
		{
		jQuery('form#video-node-form div#edit-actions input#edit-submit').show();
		}

});

function logintoggle()
{
	console.log("toggle fun");
        jQuery('.login-box').toggle();
		jQuery('.login-box').hide();
		jQuery('.forgot-password').show();
			
	
	 jQuery('.Cancel').click(function(){
		jQuery('.login-box').show();
		jQuery('.forgot-password').hide();
	});
	
  }
	 
	