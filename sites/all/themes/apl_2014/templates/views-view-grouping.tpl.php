<?php

/**
 * @file
 * This template is used to print a single grouping in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $grouping: The grouping instruction.
 * - $grouping_level: Integer indicating the hierarchical level of the grouping.
 * - $rows: The rows contained in this grouping.
 * - $title: The title of this grouping.
 * - $content: The processed content output that will normally be used.
 */
//$my_title = substr($title, 62,9);
preg_match("/>(\w*)\s?.*</",$title,$matches);
//$my_title =$title;
?>
<div class="view-grouping <?php print strtolower($matches[1]); ?>">
  <div class="view-grouping-header"><?php print $title; ?></div>
  <div class="view-grouping-content">
    <?php print $content; ?>
  </div>
</div>
