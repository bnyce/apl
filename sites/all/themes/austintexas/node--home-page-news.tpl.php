  <?php print render($page['header']); ?>

      <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
          <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
          <a id="main-content"></a>
          <?php if ($tabs): ?><div id="tabs-wrapper" class="clearfix"><?php endif; ?>
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
		  <div id="above-content"><?php print render($page['above_content']); ?></div>
		  
		  
		  
		  <div class="single-column">
		  
		  		

		  	

					<div class="breadcrumb-left">
		  				<?php print $breadcrumb; ?>
		  			</div>
		  			<h2>
		  <?php if ($field_news_caption1): ?><?php print render($content['$field_news_caption1']); ?><?php endif; ?>
		  <?php if ($field_news_caption2): ?><?php print render($content['$field_news_caption2']); ?><?php endif; ?>
		  <?php if ($field_address1): ?><?php print render($content['$field_address1']); ?><?php endif; ?>
		  <?php if ($field_address2): ?><?php print render($content['$field_address2']); ?><?php endif; ?></h2>
		  		
		  			<h5><?php print $title; ?></h5>
		  		
		  		
		  		
		  		<div class="large-col"> 
		  		
			  		
			  		<?php print render($page['content']); ?> 
			  		
			  		
		  		</div>
		  		
		  		
		  		
		  		
		  		
		  		
		  	
					  	
		  
		  </div><!-- /single-columns -->
		  
		  
		  
		  
      </div></div></div></div> <!-- /.left-corner, /.right-corner, /#squeeze, /#center -->

    </div> <!-- /#container -->
  </div> <!-- /#wrapper -->
