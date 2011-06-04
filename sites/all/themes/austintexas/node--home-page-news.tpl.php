<div class="single-column">
	<div class="large-col">	
       <div>
           Printing before static content
           <?php print render($content['field_news_caption1']);  ?>  
           Printing after static content
		</div>   
        <div class="content">
           <?php render($content); ?>
		   Printing before static content
           <?php print render($content['field_news_caption1']);  ?>  
           Printing after static content
        </div>
	</div>
</div><!-- /single-columns -->
		  


