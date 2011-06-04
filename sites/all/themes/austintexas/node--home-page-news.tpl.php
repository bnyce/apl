
		  
		  
		  <div class="single-column">
		  
		  		

		  	

					<div class="breadcrumb-left">
		  				<?php print $variables['breadcrumb']; ?>
		  			</div>

		  		
		  		
		  		
		  		<div class="large-col"> 
		  		
<div>
  Printing before static content
  <?php print $node->field_news_caption1[0]['view'];  ?>  
  Printing after static content
  <div class="content">
    <?php render($content); ?>
  </div>
</div>

			  		
			  		
		  		</div>
		  		
		  		
		  		
		  		
		  		
		  		
		  	
					  	
		  
		  </div><!-- /single-columns -->
		  


