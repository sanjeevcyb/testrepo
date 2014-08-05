<?php
/**
 * @file
 * captcha_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function captcha_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_administration_mode';
  $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'image_captcha/Image';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description';
  $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_enable_stats';
  $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '0';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_response';
  $strongarm->value = 'mETah';
  $export['captcha_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_sid';
  $strongarm->value = 65;
  $export['captcha_sid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_token';
  $strongarm->value = 'a3e5c1a924fcfd41c7e3fbd0b87fff76';
  $export['captcha_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_background_color';
  $strongarm->value = '#ffffff';
  $export['image_captcha_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_bilinear_interpolation';
  $strongarm->value = 0;
  $export['image_captcha_bilinear_interpolation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_character_spacing';
  $strongarm->value = '1.2';
  $export['image_captcha_character_spacing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_code_length';
  $strongarm->value = '5';
  $export['image_captcha_code_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_distortion_amplitude';
  $strongarm->value = '0';
  $export['image_captcha_distortion_amplitude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_dot_noise';
  $strongarm->value = 0;
  $export['image_captcha_dot_noise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_file_format';
  $strongarm->value = '1';
  $export['image_captcha_file_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_fonts';
  $strongarm->value = array(
    'sites/all/modules/captcha/image_captcha/fonts/Tesox/tesox.ttf' => 'sites/all/modules/captcha/image_captcha/fonts/Tesox/tesox.ttf',
    'sites/all/modules/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf' => 'sites/all/modules/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf',
    'sites/all/modules/captcha/image_captcha/fonts/Tuffy/Tuffy_Bold.ttf' => 0,
    'BUILTIN' => 0,
  );
  $export['image_captcha_fonts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_fonts_preview_map_cache';
  $strongarm->value = array(
    '2d0e63850e91ee2c999b22e41eb0b20c' => (object) array(
      'uri' => 'sites/all/modules/captcha/image_captcha/fonts/Tesox/tesox.ttf',
      'filename' => 'tesox.ttf',
      'name' => 'tesox',
    ),
    'ce92a4de20aa1d6efd138e3cd8dfe600' => (object) array(
      'uri' => 'sites/all/modules/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf',
      'filename' => 'Tuffy.ttf',
      'name' => 'Tuffy',
    ),
    'c31b0fe3cc9e58e9868672fc9882f325' => (object) array(
      'uri' => 'sites/all/modules/captcha/image_captcha/fonts/Tuffy/Tuffy_Bold.ttf',
      'filename' => 'Tuffy_Bold.ttf',
      'name' => 'Tuffy_Bold',
    ),
  );
  $export['image_captcha_fonts_preview_map_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_font_size';
  $strongarm->value = '30';
  $export['image_captcha_font_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_foreground_color';
  $strongarm->value = '#000000';
  $export['image_captcha_foreground_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_foreground_color_randomness';
  $strongarm->value = '100';
  $export['image_captcha_foreground_color_randomness'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_image_allowed_chars';
  $strongarm->value = 'aAbBCdEeFfGHhijKLMmNPQRrSTtWXYZ23456789';
  $export['image_captcha_image_allowed_chars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_line_noise';
  $strongarm->value = 0;
  $export['image_captcha_line_noise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_noise_level';
  $strongarm->value = '5';
  $export['image_captcha_noise_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_ajax_api';
  $strongarm->value = 0;
  $export['recaptcha_ajax_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_nocookies';
  $strongarm->value = 0;
  $export['recaptcha_nocookies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_private_key';
  $strongarm->value = '6Lfi1fASAAAAAGNQonuKkU6Fwzz2DEkj4Z8OVAR8';
  $export['recaptcha_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_public_key';
  $strongarm->value = '6Lfi1fASAAAAAM2212JnuPOwYGyRFvLrSP7ngbPk';
  $export['recaptcha_public_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_tabindex';
  $strongarm->value = '';
  $export['recaptcha_tabindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_theme';
  $strongarm->value = 'red';
  $export['recaptcha_theme'] = $strongarm;

  return $export;
}
