<?php

/**
 * @file jcarousel-view.tpl.php
 * View template to display a list as a carousel.
 */
?>
<ul class="<?php print $jcarousel_classes; ?>">
  <?php foreach ($rows as $id => $row): ?>
   <?php $content_videos = strstr($row, '<div');
     if(!empty($content_videos)) {?>
    <li class="<?php print $row_classes[$id]; ?>"><?php print $row; ?></li>
    <?php } ?>
  <?php endforeach; ?>
</ul>
