<div class="single-column">
	<div class="large-col">	  
        <div class="content">
		   <?php
				hide($content['title']);
				hide($content);
			?>
           <?php print render($content['field_news_caption1']);  ?>  
		   <?php print render($content['field_news_caption2']);  ?> 
           <hr />		   
	       <?php print render($content['field_address1']);  ?>  
	 	   <?php print render($content['field_address2']);  ?>  
		   <hr />
		   <?php print render($title);  ?> 
		   <?php print render($content['body']);  ?>  
        </div>
	</div>
</div><!-- /single-columns -->
		  


