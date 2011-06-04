<div class="single-column">
	<div class="large-col">	
       <div>
           Printing before static content
           <?php print render($node->field_news_caption1[0]['value']);  ?>  
           Printing after static content
		</div>   
        <div class="content">
           <?php render($content); ?>
        </div>
	</div>
</div><!-- /single-columns -->
		  


