
(function ($) {
  Drupal.Panels = Drupal.Panels || {};

  Drupal.Panels.autoAttach = function() {
    if ($.browser.msie) {
      // If IE, attach a hover event so we can see our admin links.
      $("div.panel-pane").hover(
        function() {
          $('div.panel-hide', this).addClass("panel-hide-hover"); return true;
        },
        function() {
          $('div.panel-hide', this).removeClass("panel-hide-hover"); return true;
        }
      );
      $("div.admin-links").hover(
        function() {
          $(this).addClass("admin-links-hover"); return true;
        },
        function(){
          $(this).removeClass("admin-links-hover"); return true;
        }
      );
    }
  };

  $(Drupal.Panels.autoAttach);
})(jQuery);
;
/**
 * @file
 * Adds some show/hide to the admin form to make the UXP easier.
 */
(function($){
  Drupal.behaviors.video = {
    attach: function (context, settings) {
      //lets see if we have any jmedia movies
      if($.fn.media) {
        $('.jmedia').media();
      }
	
      if(settings.video) {
        $.fn.media.defaults.flvPlayer = settings.video.flvplayer;
      }
	
      //lets setup our colorbox videos
      $('.video-box').each(function() {
        var url = $(this).attr('href');
        var data = $(this).metadata();
        var width = data.width;
        var height= data.height;
        var player = settings.video.player; //player can be either jwplayer or flowplayer.
        $(this).colorbox({
          html: '<a id="video-overlay" href="'+url+'" style="height:'+height+'; width:'+width+'; display: block;"></a>',
          onComplete:function() {
            if(player == 'flowplayer') {
              flowplayer("video-overlay", settings.video.flvplayer, {
                clip: {
                  autoPlay: settings.video.autoplay,
                  autoBuffering: settings.video.autobuffer
                }
              });
            } else {
              $('#video-overlay').media({
                flashvars: {
                  autostart: settings.video.autoplay
                },
                width:width,
                height:height
              });
            }
          }
        });
      });
    }
  };

  // On change of the thumbnails when edit.
  Drupal.behaviors.videoEdit = {
    attach : function(context, settings) {
      function setThumbnail(widget, type) {
        var thumbnails = widget.find('.video-thumbnails input');
        var defaultthumbnail = widget.find('.video-use-default-video-thumb');
        var largeimage = widget.find('.video-preview img');

        var activeThumbnail = thumbnails.filter(':checked');
        if (activeThumbnail.length > 0 && type != 'default') {
          var smallimage = activeThumbnail.next('label.option').find('img');
          largeimage.attr('src', smallimage.attr('src'));
          defaultthumbnail.attr('checked', false);
        }
        else if(defaultthumbnail.is(':checked')) {
          thumbnails.attr('checked', false);
          largeimage.attr('src', defaultthumbnail.data('defaultimage'));
        }
        else {
          // try to select the first thumbnail.
          if (thumbnails.length > 0) {
            thumbnails.first().attr('checked', 'checked');
            setThumbnail(widget, 'thumb');
          }
        }
      }

      $('.video-thumbnails input', context).change(function() {
        setThumbnail($(this).parents('.video-widget'), 'thumb');
      });

      $('.video-use-default-video-thumb', context).change(function() {
        setThumbnail($(this).parents('.video-widget'), 'default');
      });

      $('.video-widget', context).each(function() {
        setThumbnail($(this), 'both');
      });
    }
  }
})(jQuery);
;
jQuery(document).ready(function($) {
		if($('form').attr('action')!=undefined)
		{
		if($('form').attr('action').split('add').length == 2){
			
			initCheck();
		}
		if($('form').attr('action').split('edit').length == 2)
		{
			var arrDomains = $('#edit-domains div input');
			  if($('#edit-domain-site').is(":checked")) {				  
				  for(ii=0;ii<arrDomains.length;ii++){
					  	arrDomains[ii].checked = true;
					  	$(arrDomains[ii]).addClass('disableCheckbox');
					  	$(arrDomains[ii]).unbind('click');
					  }
			  }
		}
		}
		$('#edit-domain-site').click(function() {
		  initCheck();
		});
				
	  function initCheck(){
		  var arrDomains = $('#edit-domains div input');
		  if($('#edit-domain-site').is(":checked")) {				  
			  for(ii=0;ii<arrDomains.length;ii++){
				  	arrDomains[ii].checked = true;
				  	$(arrDomains[ii]).addClass('disableCheckbox');
				  	$(arrDomains[ii]).unbind('click');
				  }
		  }
		  else{
			  for(ii=0;ii<arrDomains.length;ii++)
			  {
			  	arrDomains[ii].checked = false;
			  	$(arrDomains[ii]).removeClass('disableCheckbox');
			  	$(arrDomains[ii]).bind('click');
			  }
		  }	
	  } 
});;
(function ($) {

/**
 * Toggle the visibility of a fieldset using smooth animations.
 */
Drupal.toggleFieldset = function (fieldset) {
  var $fieldset = $(fieldset);
  if ($fieldset.is('.collapsed')) {
    var $content = $('> .fieldset-wrapper', fieldset).hide();
    $fieldset
      .removeClass('collapsed')
      .trigger({ type: 'collapsed', value: false })
      .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Hide'));
    $content.slideDown({
      duration: 'fast',
      easing: 'linear',
      complete: function () {
        Drupal.collapseScrollIntoView(fieldset);
        fieldset.animating = false;
      },
      step: function () {
        // Scroll the fieldset into view.
        Drupal.collapseScrollIntoView(fieldset);
      }
    });
  }
  else {
    $fieldset.trigger({ type: 'collapsed', value: true });
    $('> .fieldset-wrapper', fieldset).slideUp('fast', function () {
      $fieldset
        .addClass('collapsed')
        .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Show'));
      fieldset.animating = false;
    });
  }
};

/**
 * Scroll a given fieldset into view as much as possible.
 */
Drupal.collapseScrollIntoView = function (node) {
  var h = document.documentElement.clientHeight || document.body.clientHeight || 0;
  var offset = document.documentElement.scrollTop || document.body.scrollTop || 0;
  var posY = $(node).offset().top;
  var fudge = 55;
  if (posY + node.offsetHeight + fudge > h + offset) {
    if (node.offsetHeight > h) {
      window.scrollTo(0, posY);
    }
    else {
      window.scrollTo(0, posY + node.offsetHeight - h + fudge);
    }
  }
};

Drupal.behaviors.collapse = {
  attach: function (context, settings) {
    $('fieldset.collapsible', context).once('collapse', function () {
      var $fieldset = $(this);
      // Expand fieldset if there are errors inside, or if it contains an
      // element that is targeted by the URI fragment identifier.
      var anchor = location.hash && location.hash != '#' ? ', ' + location.hash : '';
      if ($fieldset.find('.error' + anchor).length) {
        $fieldset.removeClass('collapsed');
      }

      var summary = $('<span class="summary"></span>');
      $fieldset.
        bind('summaryUpdated', function () {
          var text = $.trim($fieldset.drupalGetSummary());
          summary.html(text ? ' (' + text + ')' : '');
        })
        .trigger('summaryUpdated');

      // Turn the legend into a clickable link, but retain span.fieldset-legend
      // for CSS positioning.
      var $legend = $('> legend .fieldset-legend', this);

      $('<span class="fieldset-legend-prefix element-invisible"></span>')
        .append($fieldset.hasClass('collapsed') ? Drupal.t('Show') : Drupal.t('Hide'))
        .prependTo($legend)
        .after(' ');

      // .wrapInner() does not retain bound events.
      var $link = $('<a class="fieldset-title" href="#"></a>')
        .prepend($legend.contents())
        .appendTo($legend)
        .click(function () {
          var fieldset = $fieldset.get(0);
          // Don't animate multiple times.
          if (!fieldset.animating) {
            fieldset.animating = true;
            Drupal.toggleFieldset(fieldset);
          }
          return false;
        });

      $legend.append(summary);
    });
  }
};

})(jQuery);
;
