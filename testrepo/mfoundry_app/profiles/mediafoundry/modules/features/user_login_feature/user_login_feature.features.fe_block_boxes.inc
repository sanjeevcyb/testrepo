<?php
/**
 * @file
 * user_login_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function user_login_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'User Login';
  $fe_block_boxes->format = 'custom_text_format';
  $fe_block_boxes->machine_name = 'user_login';
  $fe_block_boxes->body = '<span class="notlogged_outer"><div class="signin">Sign in/Register</div><span class="down-arrow-black"></span></span>
<div class="mobile-profile notlogged"></div>';

  $export['user_login'] = $fe_block_boxes;

  return $export;
}
