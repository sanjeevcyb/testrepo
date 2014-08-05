$(document).ready(function(){
	$('.tab-div').hide();
	$('#tabs-1').show();
	$(".tab-div").niceScroll({cursorcolor:"#47759e",cursorborderradius:"0"});
	$(".rev-tab").niceScroll({cursorcolor:"#47759e",cursorborderradius:"0"});
	$(".popular-video-list ul").niceScroll({cursorcolor:"#47759e",cursorborderradius:"0"});
	$(".create-live-event").niceScroll({cursorcolor:"#47759e",cursorborderradius:"0"});
	$('.live-wrap ul li').click(function(){
		$('.live-wrap ul li').removeClass('active');
		$(this).addClass('active');
		var dataurl = $(this).data('tab');
		$('.tab-div').hide();
		$('#'+dataurl).show();
	});
	
	$(window).resize(function(){
		$('.bg-color').css({'width':$(document).width(),'height':$(document).height()});
	});
	$( "#start-date" ).datepicker();
	$( "#end-date" ).datepicker();
	$('#tag1').tagsInput({
    // my parameters here
	});
		$('.week').change(function(){
		var value = $(this).val();
		$('.select-value').html(value);
	});
	$('.create-live-events').click(function(){
		$('.creale-live-event-wrapper').toggleClass('bg-color');
		$('.bg-color').css({'width':$(document).width(),'height':$(document).height()});
		$('.create-live-event').toggle();
	});
	
	$('.select').change(function(){
		var value = $(this).val();
		$('.select-box span').html(value);
	});
	$('#tag1_tagsinput').live('keydown',function(event) {
		var keycode = event.keyCode;
        if (keycode == 9) {
           $('#tag1_tag').focus();
        }   
	});
});