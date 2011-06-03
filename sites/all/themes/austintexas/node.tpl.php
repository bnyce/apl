
		  <h5><?php print $title; ?></h5>
		  <?php if ($field_news_caption1): ?><?php print render($field_news_caption1); ?><?php endif; ?>
		  <?php if ($field_news_caption2): ?><?php print render($field_news_caption2); ?><?php endif; ?>
		  <?php if ($field_address1): ?><?php print render($field_address1); ?><?php endif; ?>
		  <?php if ($field_address2): ?><?php print render($field_address2); ?><?php endif; ?>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?>
           <!-- <h1<?php print $tabs ? ' class="with-tabs"' : '' ?>><?php print $title ?></h1> -->
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if ($tabs): ?><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($tabs2); ?>
          <?php print $messages; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
	
			  		
			