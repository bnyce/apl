  <?php print render($page['header']); ?>		  
		  <div class="single-column">

					<div class="breadcrumb-left">
		  				<?php print $breadcrumb; ?>
		  			</div>
	  		
		  		<div class="large-col"> 
		  		
			  				  			<h2>
		  <?php if ($field_news_caption1): ?><?php print $field_news_caption1; ?><?php endif; ?>here
		  <?php if ($field_news_caption2): ?><?php print render($content['$field_news_caption2']); ?><?php endif; ?>
		  <?php if ($field_address1): ?><?php print render($content['$field_address1']); ?><?php endif; ?>
		  <?php if ($field_address2): ?><?php print render($content['$field_address2']); ?><?php endif; ?></h2>
		  		
		  			<h5><?php print $title; ?></h5>
			  		<?php print render($page['content']); ?> 
			  		
		  		</div>
	  
		  </div><!-- /single-columns -->
		  
		  
		  
