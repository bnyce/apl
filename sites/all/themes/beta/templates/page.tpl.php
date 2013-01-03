<?php if ($page['top']): ?>
<div id="city-header">

<?php print render($page['top']); ?>

</div> <!-- /city header -->
<?php endif; ?>  
  
  
<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->
 

  
  <div id="header">
  
	<!-- rwb 12/12/2011 fixed the link issue to work on all drupal 'sites' -->
	

     <?php if ($page['top_navigation']): ?>
      <div id="header-region">
	  <div class="overlogodiv" onclick='window.location.href="<?php print $front_page; ?>";' title="Link to Austin Public Library website.">
	</div>
        <?php print render($page['top_navigation']); ?>
      </div>
    <?php endif; ?>

  </div> <!-- /header -->

  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix">

    <div id="content">
      <div id="content-inner" class="inner column center">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <?php //print $breadcrumb; ?>

            <?php if ($page['highlight']): ?>
              <div id="highlight"><?php print render($page['highlight']) ?></div>
            <?php endif; ?>

            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php if ($tabs): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            
                <?php if ($main_menu || $secondary_menu): ?>
      <div id="navigation" class="menu <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'sub-menu')))); ?>
      </div>
			<?php endif; ?>
            
            <?php if ($page['secondary_navigation']): ?>
      <div id="secondary-navigation" class="column secondary-navigation second">
        <div id="secondary-navigation-inner" class="inner">
          <?php print render($page['secondary_navigation']); ?>
        </div>
      </div>
    <?php endif; ?> <!-- /secondary-navigation -->
            
               
      
                
    <?php if ($page['announcements']): ?>
    <div class="announce-wrap">
      <div class="announce-top"></div>
      <div id="announcements" class="column announcements first">
        <div id="announcements-inner" class="inner">
          <?php print render($page['announcements']); ?>
        </div>
      </div>
      <div class="announce-bottom"></div>
      </div>
    </div>
    <?php endif; ?> <!-- /announcements -->
    

    

            
          </div> <!-- /#content-header -->
        <?php endif; ?>

        <div id="content-area">
          <?php print render($page['content']) ?>
        </div>

        <?php print $feed_icons; ?>

      </div>
    </div> <!-- /content-inner /content -->

</div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>
  
  <?php if ($page['bottom']): ?>
    <div id="bottom">
      <?php print render($page['bottom']); ?>
    </div> <!-- /bottom -->
  <?php endif; ?>

</div> <!-- /page -->
