<div class="single-column">
	<div class="large-col">	  
        <div class="content">
		   <!-- Hide the content that is being rendered by default -->
		   <?php hide($content) ?>  
           <!-- Format and display fields in the required order -->		   
           <h1><?php print render($content['field_news_caption1']);  ?> </h1> 
		   <h3><?php print render($content['field_news_caption2']);  ?> </h3>
           <hr />		   
	       <b><?php print render($content['field_address1']);  ?> </b>
	 	   <b><?php print render($content['field_address2']);  ?> </b>
		   <hr />
		   <h3 align="center"><?php print render($title);  ?> </h3>
		   <?php print render($content['body']);  ?>
		   <div class="back_button"><input type="button" name="Back" value="Back" onclick="javascript:history.back();"></div>
		   <div style="clear:both;"></div>  
        </div>
	</div>
</div><!-- /single-columns -->
		  


