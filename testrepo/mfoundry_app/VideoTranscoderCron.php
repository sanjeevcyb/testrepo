<?php
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

watchdog("Video Cron", "SCRIPT STARTED");

$transcoder = new Transcoder();
$transcoder->runQueue();

watchdog("Video Cron", "SCRIPT COMPLETED");


?>
