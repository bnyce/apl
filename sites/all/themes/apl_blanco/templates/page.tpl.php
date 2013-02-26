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

<!-- Search Boxen -->

<div id="search">

<form onsubmit="javascript: MooTools_$(this).getElements('input.defaultText').set('value','');" method="get" id="globalSearch" class="clearfix" action="/search">
<!--
        <h1>Find books, music, movies, and more.</h1>
-->				
 	   		    <input type="submit" value="Search" title="Search" role="button" name="commit" class="search_button" alt="Search">
				<input type="hidden" value="keyword" name="search_category" id="search_category">		
				 
	 
				<input type="text" name="q" id="globalQuery" class="text ui-autocomplete-input" autocomplete="off" role="textbox" aria-autocomplete="list" aria-haspopup="true">
<!--
				<select name="t" id="t" class="hideMe"><option value="smart" title="Keyword">Keyword</option>
<option value="title" title="Title">Title</option>
<option value="author" title="Author">Author</option>
<option value="series" title="Series">Series</option>
<option value="subject" title="Subject">Subject</option>
<option value="tag" title="Tag">Tag</option>
<option value="userlist" title="List">List</option>
<option value="user" title="User">User</option></select>			
-->
  		    <div class="searchOptions">
    				<input type="radio" value="catalogue" name="searchOpt" id="searchOpt_catalogue" class="inline" checked="checked"><label class="inline" for="searchOpt_catalogue">Catalog</label>
    					<input type="radio" value="website" name="searchOpt" id="searchOpt_website" class="inline"><label class="inline" for="searchOpt_website">Website</label>
    					<input type="radio" value="articles" name="searchOpt" id="searchOpt_articles" class="inline"><label class="inline" for="searchOpt_articles">Articles</label>
    			</div>     
  			                      
  			
  			<a class="moreSearch" href="/search">Advanced Search</a>

</form>

</div>
<!-- Search Boxen Enden -->

</div>
<?php endif; ?>

<?php print render($page['top_navigation']); ?>

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
