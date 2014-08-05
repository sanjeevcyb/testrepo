<?php
/**
 * @file
 * latest_news.features.inc
 */

/**
 * Implements hook_node_info().
 */
function latest_news_node_info() {
  $items = array(
    'latest_news' => array(
      'name' => t('Latest News'),
      'base' => 'node_content',
      'description' => t('Helps you to flash latest news'),
      'has_title' => '1',
      'title_label' => t('Latest News'),
      'help' => '',
    ),
  );
  return $items;
}
