<!-- slideshow -->   
<script>
document.documentElement.style.overflow = 'hidden';	 // firefox, chrome

    window.onload = setupRefresh;

    function setupRefresh() {
      setTimeout("refreshPage();", 3600000); // milliseconds
    }
    function refreshPage() {
//       alert('hi there');
       window.location = location.href;
    }
</script>

<div style="max-height:1080px !important; max-width:1920px !important; overflow: hidden">
<div id="featured-slider">
    
      <?php 


$viewName = 'imag';
print views_embed_view($viewName);

      ?>
    </div> 
    </div> 

<!-- end slideshow -->
