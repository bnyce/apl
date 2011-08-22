<?php
// 

/**
 * @file
 * Displays the approval form block.
 *
 * @see template_preprocess_search_block_form()
 */
?>

<div id="block-<?php print $block->module . '-' . $block->delta; ?>" class="<?php print $classes; ?> roundcorners" <?php print $attributes; ?>>
  <div class="roundtop">
   <img src="<?php print $base_path . path_to_theme() ?>/global/imgs/blockTopLftCrnr.gif" alt="" width="15" height="15" class="corner" style="display: none" />
  </div>
  
  <div class='block-content'>
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
  		<h2><?php print 'MY ' . $block->subject ?></h2>
    <?php endif;?>
    <?php print render($title_suffix); ?>

	<div class="content"<?php print $content_attributes; ?>>
      <?php print $content ?>
	</div>
  </div>
  
  <hr class='clearing' />
   <div class="roundbottom">
		<img src="<?php print $base_path . path_to_theme() ?>/global/imgs/blockBtmLftCrnr.gif" alt="" width="15" height="15" class="corner" style="display: none" />
   </div>
  
</div>