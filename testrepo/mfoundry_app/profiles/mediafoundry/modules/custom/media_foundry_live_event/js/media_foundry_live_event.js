jQuery(document).ready(function() {
	/*jQuery("div.start-date-wrapper label").html('Start Date');
	jQuery("div.end-date-wrapper label").last().html('End Date');
	jQuery("div.end-date-wrapper input").attr("readonly","true");
	jQuery("div.start-date-wrapper input").attr("readonly","true");
	jQuery("div.end-date-wrapper input").focus(function() {
		jQuery("#ui-datepicker-div").hide();
	});*/
	//alert(jQuery('section.field-name-field-subscription-type ul li a').html());
	//if(jQuery('div.form-item-attributes-field-subscription-type').length==0 && jQuery('section.field-name-field-subscription-type ul li a').html() == 'One Time'){
	if(jQuery('section.field-name-field-subscription-type ul li a').html() != 'Time Based'){
		jQuery('.field-name-field-start-date').hide();
	}
	jQuery('.commerce-product-field-field-subscription-type ul li a').bind('click', false);
});

jQuery(document).ajaxComplete(function( event,request, settings ) {
	if(jQuery("div.form-item-attributes-field-subscription-type select :selected",this).text() == "Time Based") {
	    jQuery('.field-name-field-start-date').show();
		jQuery("div.start-date-wrapper label").html('Start Date');
		jQuery("div.end-date-wrapper label").first().hide();
		jQuery("div.end-date-wrapper label").last().html('End Date');
	}
	else {
		jQuery('.field-name-field-start-date').hide();
	}
	jQuery("div.end-date-wrapper input").attr("readonly",true);
	jQuery("div.end-date-wrapper input").focus(function() {
		jQuery("#ui-datepicker-div").hide();
	});
	//jQuery("div.end-date-wrapper input").removeClass("hasDatepicker").removeAttr('id');
	jQuery('.commerce-product-field-field-subscription-type ul li a').bind('click', false);
});

function setenddate(noofdays) {
	
	var startdate = jQuery("div.start-date-wrapper input").val();
	
	myDate=startdate.split("-");
	var newDate=myDate[1]+"/"+myDate[2]+"/"+myDate[0];
	var startdatetime = new Date(newDate).getTime();
	var enddate =  startdatetime + (noofdays)*24*60*60*1000;
	jQuery("div.end-date-wrapper input").val(myDateFormatter(enddate));
		
}

function myDateFormatter (dateObject) {
    var d = new Date(dateObject);
    var day = d.getDate();
    var month = d.getMonth() + 1;
    var year = d.getFullYear();
    if (day < 10) {
        day = "0" + day;
    }
    if (month < 10) {
        month = "0" + month;
    }
    var date = year + "-" + month + "-" + day;

    return date;
}; 