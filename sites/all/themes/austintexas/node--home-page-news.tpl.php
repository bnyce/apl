  <?php print render($page['header']); ?>

      <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
          <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
          <a id="main-content"></a>
          <?php if ($tabs): ?><div id="tabs-wrapper" class="clearfix"><?php endif; ?>
          <?php print render($title_prefix); ?>

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

		  		
		  		
		  		
		  		<div class="large-col"> 
		  		
<h2>
				<?php render($content['field_news_caption1']); ?>here
	
		  <?php print render($field_news_caption1); ?>
		  <?php print render($field_news_caption2); ?>
		  <?php print render($field_address1); ?>
		  <?php print render($field_address2); ?></h2>
		  		
		  		
			  		<?php print render($page['content']); ?> 
			  		
			  		
		  		</div>
		  		
		  		
		  		
		  		
		  		
		  		
		  	
					  	
		  
		  </div><!-- /single-columns -->
		  
		  
		  
		  
      </div></div></div></div> <!-- /.left-corner, /.right-corner, /#squeeze, /#center -->

