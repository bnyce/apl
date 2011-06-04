<div class="single-column">
	<div class="large-col">	  
        <div class="content">
		   <?php hide($content) ?>
           <h1><?php print render($content['field_news_caption1']);  ?> </h1> 
		   <?php print render($content['field_news_caption2']);  ?> 
           <hr />		   
	       <h2 align="center"><?php print render($content['field_address1']);  ?></h2> 
	 	   <?php print render($content['field_address2']);  ?>  
		   <hr />
		   <?php print render($title);  ?> 
		   <?php print render($content['body']);  ?>  
        </div>
	</div>
</div><!-- /single-columns -->
		  


