
(function($){$.fn.editable=function(target,options){if('disable'==target){$(this).data('disabled.editable',true);return;}
if('enable'==target){$(this).data('disabled.editable',false);return;}
if('destroy'==target){$(this).unbind($(this).data('event.editable')).removeData('disabled.editable').removeData('event.editable');return;}
var settings=$.extend({},$.fn.editable.defaults,{target:target},options);var plugin=$.editable.types[settings.type].plugin||function(){};var submit=$.editable.types[settings.type].submit||function(){};var buttons=$.editable.types[settings.type].buttons||$.editable.types['defaults'].buttons;var content=$.editable.types[settings.type].content||$.editable.types['defaults'].content;var element=$.editable.types[settings.type].element||$.editable.types['defaults'].element;var reset=$.editable.types[settings.type].reset||$.editable.types['defaults'].reset;var callback=settings.callback||function(){};var onedit=settings.onedit||function(){};var onsubmit=settings.onsubmit||function(){};var onreset=settings.onreset||function(){};var onerror=settings.onerror||reset;if(settings.tooltip){$(this).attr('title',settings.tooltip);}
settings.autowidth='auto'==settings.width;settings.autoheight='auto'==settings.height;return this.each(function(){var self=this;var savedwidth=$(self).width();var savedheight=$(self).height();$(this).data('event.editable',settings.event);if(!$.trim($(this).html())){$(this).html(settings.placeholder);}
$(this).bind(settings.event,function(e){if(true===$(this).data('disabled.editable')){return;}
if(self.editing){return;}
if(false===onedit.apply(this,[settings,self])){return;}
e.preventDefault();e.stopPropagation();if(settings.tooltip){$(self).removeAttr('title');}
if(0==$(self).width()){settings.width=savedwidth;settings.height=savedheight;}else{if(settings.width!='none'){settings.width=settings.autowidth?$(self).width():settings.width;}
if(settings.height!='none'){settings.height=settings.autoheight?$(self).height():settings.height;}}
if($(this).html().toLowerCase().replace(/(;|")/g,'')==settings.placeholder.toLowerCase().replace(/(;|")/g,'')){$(this).html('');}
self.editing=true;self.revert=$(self).html();$(self).html('');var form=$('<form />');if(settings.cssclass){if('inherit'==settings.cssclass){form.attr('class',$(self).attr('class'));}else{form.attr('class',settings.cssclass);}}
if(settings.style){if('inherit'==settings.style){form.attr('style',$(self).attr('style'));form.css('display',$(self).css('display'));}else{form.attr('style',settings.style);}}
var input=element.apply(form,[settings,self]);var input_content;if(settings.loadurl){var t=setTimeout(function(){input.disabled=true;content.apply(form,[settings.loadtext,settings,self]);},100);var loaddata={};loaddata[settings.id]=self.id;if($.isFunction(settings.loaddata)){$.extend(loaddata,settings.loaddata.apply(self,[self.revert,settings]));}else{$.extend(loaddata,settings.loaddata);}
$.ajax({type:settings.loadtype,url:settings.loadurl,data:loaddata,async:false,success:function(result){window.clearTimeout(t);input_content=result;input.disabled=false;}});}else if(settings.data){input_content=settings.data;if($.isFunction(settings.data)){input_content=settings.data.apply(self,[self.revert,settings]);}}else{input_content=self.revert;}
content.apply(form,[input_content,settings,self]);input.attr('name',settings.name);buttons.apply(form,[settings,self]);$(self).append(form);plugin.apply(form,[settings,self]);$(':input:visible:enabled:first',form).focus();if(settings.select){input.select();}
input.keydown(function(e){if(e.keyCode==27){e.preventDefault();reset.apply(form,[settings,self]);}});var t;if('cancel'==settings.onblur){input.blur(function(e){t=setTimeout(function(){reset.apply(form,[settings,self]);},500);});}else if('submit'==settings.onblur){input.blur(function(e){t=setTimeout(function(){form.submit();},200);});}else if($.isFunction(settings.onblur)){input.blur(function(e){settings.onblur.apply(self,[input.val(),settings]);});}else{input.blur(function(e){});}
form.submit(function(e){if(t){clearTimeout(t);}
e.preventDefault();if(false!==onsubmit.apply(form,[settings,self])){if(false!==submit.apply(form,[settings,self])){if($.isFunction(settings.target)){var str=settings.target.apply(self,[input.val(),settings]);$(self).html(str);self.editing=false;callback.apply(self,[self.innerHTML,settings]);if(!$.trim($(self).html())){$(self).html(settings.placeholder);}}else{var submitdata={};submitdata[settings.name]=input.val();submitdata[settings.id]=self.id;if($.isFunction(settings.submitdata)){$.extend(submitdata,settings.submitdata.apply(self,[self.revert,settings]));}else{$.extend(submitdata,settings.submitdata);}
if('PUT'==settings.method){submitdata['_method']='put';}
$(self).html(settings.indicator);var ajaxoptions={type:'POST',data:submitdata,dataType:'html',url:settings.target,success:function(result,status){if(ajaxoptions.dataType=='html'){$(self).html(result);}
self.editing=false;callback.apply(self,[result,settings]);if(!$.trim($(self).html())){$(self).html(settings.placeholder);}},error:function(xhr,status,error){onerror.apply(form,[settings,self,xhr]);}};$.extend(ajaxoptions,settings.ajaxoptions);$.ajax(ajaxoptions);}}}
$(self).attr('title',settings.tooltip);return false;});});this.reset=function(form){if(this.editing){if(false!==onreset.apply(form,[settings,self])){$(self).html(self.revert);self.editing=false;if(!$.trim($(self).html())){$(self).html(settings.placeholder);}
if(settings.tooltip){$(self).attr('title',settings.tooltip);}}}};});};$.editable={types:{defaults:{element:function(settings,original){var input=$('<input type="hidden"></input>');$(this).append(input);return(input);},content:function(string,settings,original){$(':input:first',this).val(string);},reset:function(settings,original){original.reset(this);},buttons:function(settings,original){var form=this;if(settings.submit){if(settings.submit.match(/>$/)){var submit=$(settings.submit).click(function(){if(submit.attr("type")!="submit"){form.submit();}});}else{var submit=$('<button type="submit" />');submit.html(settings.submit);}
$(this).append(submit);}
if(settings.cancel){if(settings.cancel.match(/>$/)){var cancel=$(settings.cancel);}else{var cancel=$('<button type="cancel" />');cancel.html(settings.cancel);}
$(this).append(cancel);$(cancel).click(function(event){if($.isFunction($.editable.types[settings.type].reset)){var reset=$.editable.types[settings.type].reset;}else{var reset=$.editable.types['defaults'].reset;}
reset.apply(form,[settings,original]);return false;});}}},text:{element:function(settings,original){var input=$('<input />');if(settings.width!='none'){input.width(settings.width);}
if(settings.height!='none'){input.height(settings.height);}
input.attr('autocomplete','off');$(this).append(input);return(input);}},textarea:{element:function(settings,original){var textarea=$('<textarea />');if(settings.rows){textarea.attr('rows',settings.rows);}else if(settings.height!="none"){textarea.height(settings.height);}
if(settings.cols){textarea.attr('cols',settings.cols);}else if(settings.width!="none"){textarea.width(settings.width);}
$(this).append(textarea);return(textarea);}},select:{element:function(settings,original){var select=$('<select />');$(this).append(select);return(select);},content:function(data,settings,original){if(String==data.constructor){eval('var json = '+data);}else{var json=data;}
for(var key in json){if(!json.hasOwnProperty(key)){continue;}
if('selected'==key){continue;}
var option=$('<option />').val(key).append(json[key]);$('select',this).append(option);}
$('select',this).children().each(function(){if($(this).val()==json['selected']||$(this).text()==$.trim(original.revert)){$(this).attr('selected','selected');}});}}},addInputType:function(name,input){$.editable.types[name]=input;}};$.fn.editable.defaults={name:'value',id:'id',type:'text',width:'auto',height:'auto',event:'click.editable',onblur:'cancel',loadtype:'GET',loadtext:'Loading...',placeholder:'Click to edit',loaddata:{},submitdata:{},ajaxoptions:{}};})(jQuery);;

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
				jQuery(this).parent().find('.select-text').html(jQuery(".drupalSelect option[value='" + selVal + "']").text());
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
	 
	;
