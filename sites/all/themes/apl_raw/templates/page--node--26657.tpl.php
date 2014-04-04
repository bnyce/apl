<?php if ($page['top']): ?>
<div id="austin_city_header">

<?php print render($page['top']); ?>

</div> <!-- /city header -->
<?php endif; ?>  
  
  
<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->
 

  
  <div id="header">
  
	<!-- rwb 12/12/2011 fixed the link issue to work on all drupal 'sites' -->
	

<?php if ($page['top_navigation']): ?>
<div id="header-region">
 <div class="overlogodiv" onclick='window.location.href="<?php print $front_page; ?>";'></div>
</div>
<?php endif; ?>

<?php print render($page['top_navigation']); ?>

</div> <!-- /header -->
