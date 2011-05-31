  <?php print render($page['header']); ?>

  <div id="topmenu"><?php print render($page['topmenu']); ?></div>
  <div id="wrapper">
    <div id="container" class="clearfix">
      <div id="header">
		<div id="toplinks">  <div class="region region-toplinks">
    <div class="block block-menu contextual-links-region clearfix" id="block-menu-menu-action-navigation">
  <div class="content">
    <ul class="menu"><li class="first leaf icon-payment"><a title="" href="/">Make A Payment</a></li>
<li class="leaf icon-services"><a title="" href="/">Services</a></li>
<li class="leaf icon-calendar"><a title="" href="/">Calendar</a></li>
<li class="leaf icon-media"><a title="" href="/">Media Center</a></li>
<li class="leaf icon-contact"><a title="" href="/">Contact Us</a></li>
<li class="last leaf icon-311"><a title="" href="/">311</a></li>
</ul>  </div>
</div>
  </div>
</div>
        <div id="logo-floater">
        <?php if ($logo || $site_title): ?>
          <?php if ($title): ?>
            <div id="branding"><strong><a href="<?php print $front_page ?>">
            <?php if ($logo): ?>
              <img src="<?php print $logo ?>" alt="<?php print $site_name_and_slogan ?>" title="<?php print $site_name_and_slogan ?>" alt="<?php print $site_name_and_slogan ?>" id="logo" />
            <?php endif; ?>
            <?php print $site_html ?>
            </a></strong></div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="branding"><a href="<?php print $front_page ?>">
            <?php if ($logo): ?>
              <img src="<?php print $logo ?>" alt="<?php print $site_name_and_slogan ?>" title="<?php print $site_name_and_slogan ?>" id="logo" />
            <?php endif; ?>
            <?php print $site_html ?>
            </a></h1>
        <?php endif; ?>
        <?php endif; ?>
        </div>
         <?php if ($main_menu): ?>
     <div id="menubar">
    	<div class="region region-menubar">
  	 		<div class="block block-system contextual-links-region block-menu clearfix" id="block-system-main-menu">

        <?php print theme('links__system_main_menu', array(
          'links' => $main_menu,
          'attributes' => array(
            'id' => 'main-menu-links',
            'class' => array('links', 'clearfix'),
          ),
          'heading' => array(
            'text' => t('Main menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </div> <!-- /#main-menu -->
      </div>
      </div>
    <?php endif; ?>
        <div id="submenubar"><?php print render($page['submenubar']); ?></div>
		<div id="header-banner" class="br"><?php print render($page['header_banner']); ?></div>
        <div id="search" class="br"><?php print render($page['search']); ?></div>
      </div> <!-- /#header -->

      <div id="center"><div id="squeeze"><div class="right-corner"><div class="left-corner">
          <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
          <a id="main-content"></a>
          <?php if ($tabs): ?><div id="tabs-wrapper" class="clearfix"><?php endif; ?>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?>
           <!-- <h1<?php print $tabs ? ' class="with-tabs"' : '' ?>><?php print $title ?></h1> -->
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if ($tabs): ?><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($tabs2); ?>
          <?php print $messages; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
		  <div id="above-content"><?php print render($page['above_content']); ?></div>
		  
		  
		  
		  <div class="portal-columns">
		  
		  
		  
		  
		  	<div class="port-col-left">
		  	
		  		
		  		<div class="port-col-left-top">
		  			<h5>Household</h5>
		  		</div>
		  		
		  		<?php print render($page['content_left_sidebar']); ?>

		  		
		  		
		  	
			</div><!-- /left -->
		  	
		  	



		  	<div class="port-col-right">
		  	
		  		
		  		<div class="port-col-right-top">
		  			<div class="breadcrumb"><?php print $breadcrumb; ?></div>
		  		</div>
		  		
		  		
		  		
		  		
		  		
		  		
		  		<div class="port-main-content"> 
		  		
			  		<?php render($page['content_main_blocks']); ?>
			  		<?php print render($page['content']); ?>
			  		
			  		
			  		<p>
			  		Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
					</p>

		  		</div>
		  		
		  		
		  		
		  		
		  		
		  		
		  		
		  		<hr class="clear" />
		  		
		  	
			</div><!-- /right -->
		  	
		  
		  </div><!-- /portal-columns -->
		  
		  
		  
		  
      </div></div></div></div> <!-- /.left-corner, /.right-corner, /#squeeze, /#center -->

    </div> <!-- /#container -->
  </div> <!-- /#wrapper -->
  <div id="footer">
  <?php print $feed_icons ?>
  <div style="clear: both;"></div>
  <div id="footer-blocks"><?php print render($page['footer']); ?></div>
  <div style="clear: both;"></div>
  <div id="footer-menu"><?php print render($page['footer_menu']); ?></div>
  </div>