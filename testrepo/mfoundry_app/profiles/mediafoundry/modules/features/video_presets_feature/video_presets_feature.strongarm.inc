<?php
/**
 * @file
 * video_presets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function video_presets_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_autobuffering';
  $strongarm->value = 0;
  $export['video_autobuffering'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_autoplay';
  $strongarm->value = 0;
  $export['video_autoplay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_bypass_conversion';
  $strongarm->value = 0;
  $export['video_bypass_conversion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_convertor';
  $strongarm->value = 'TranscoderAbstractionFactoryFfmpeg';
  $export['video_convertor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_convert_on_save';
  $strongarm->value = 0;
  $export['video_convert_on_save'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_cron';
  $strongarm->value = 0;
  $export['video_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_dimensions';
  $strongarm->value = '256x144
320x180
320x240
384x216
384x288
400x225
400x300
416x234
432x243
432x324
480x200
480x270
480x360
512x288
560x315
560x420
640x360
640x480
648x486
720x405
720x480
720x486
720x540
720x576
768x576
852x480
864x486
960x400
960x540
960x720
1024x576
1280x720
1280x960
1280x1080
1440x1080
1920x800
1920x1080';
  $export['video_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3g2';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_3g2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3g2_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_3g2_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3gp';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_3gp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3gp_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_3gp_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_asf';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_asf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_asf_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_asf_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_avi';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_avi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_avi_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_avi_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dcr';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_dcr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dcr_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_dcr_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dir';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dir_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_dir_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_divx';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_divx'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_divx_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_divx_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_f4v';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_f4v'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_f4v_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_f4v_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_flv';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_flv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_flv_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_flv_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_m4v';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_m4v'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_m4v_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_m4v_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mkv';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_mkv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mkv_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_mkv_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mov';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_mov'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mov_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_mov_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mp3';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_mp3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mp3_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_mp3_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mp4';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_mp4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mp4_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_mp4_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpeg';
  $strongarm->value = 'video_play_html5';
  $export['video_extension_mpeg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpeg_html5_player';
  $strongarm->value = 'video';
  $export['video_extension_mpeg_html5_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpg';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_mpg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpg_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_mpg_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogg';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_ogg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogg_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_ogg_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogv';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_ogv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogv_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_ogv_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_rm';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_rm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_rm_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_rm_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_swf';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_swf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_swf_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_swf_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_webm';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_webm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_webm_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_webm_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_wmv';
  $strongarm->value = 'video_play_flv';
  $export['video_extension_wmv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_wmv_flash_player';
  $strongarm->value = 'jwplayer';
  $export['video_extension_wmv_flash_player'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_flvtool2_path';
  $strongarm->value = '';
  $export['video_ffmpeg_flvtool2_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_instances';
  $strongarm->value = '5';
  $export['video_ffmpeg_instances'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_path';
  $strongarm->value = '/usr/bin/ffmpeg';
  $export['video_ffmpeg_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_qtfaststart_path';
  $strongarm->value = '';
  $export['video_ffmpeg_qtfaststart_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_jwplayer_preset';
  $strongarm->value = 'small_player';
  $export['video_jwplayer_preset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_preset';
  $strongarm->value = array(
    0 => 'MF_MP4_416x234p',
    1 => 'MF_MP4_960x540p',
  );
  $export['video_preset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_publish_on_complete';
  $strongarm->value = FALSE;
  $export['video_publish_on_complete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_queue_timeout';
  $strongarm->value = '60';
  $export['video_queue_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_thumbnail_count';
  $strongarm->value = '1';
  $export['video_thumbnail_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_thumbnail_path';
  $strongarm->value = 'videos/thumbnails';
  $export['video_thumbnail_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_transcode_timeout';
  $strongarm->value = '10';
  $export['video_transcode_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_use_default_thumb';
  $strongarm->value = 0;
  $export['video_use_default_thumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_use_preset_wxh';
  $strongarm->value = TRUE;
  $export['video_use_preset_wxh'] = $strongarm;

  return $export;
}
