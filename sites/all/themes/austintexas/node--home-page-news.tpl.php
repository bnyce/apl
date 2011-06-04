<div class="single-column">
	<div class="large-col">	  
        <div class="content">
		   <?php hide($content) ?>
           <h1><?php print render($content['field_news_caption1']);  ?> </h1> 
		   <?php print render($content['field_news_caption2']);  ?> 
           <hr />		   
	       <?php print render($content['field_address1']);  ?> 
	 	   <?php print render($content['field_address2']);  ?>  
		   <hr />
		   <h3 align="center"><?php print render($title);  ?> </h3>
		   <?php print render($content['body']);  ?>  
        </div>
	</div>
</div><!-- /single-columns -->
		  


