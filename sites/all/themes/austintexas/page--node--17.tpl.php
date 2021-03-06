  <?php print render($page['header']); ?>

  <div id="topmenu"><?php print render($page['topmenu']); ?></div>
  <div id="wrapper">
    <div id="container" class="clearfix">
      <div id="header">
		<div id="toplinks"><?php print render($page['toplinks']); ?></div>
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
		  		   <h5>
		  		      <?php  
                     $tmp_activeTrail = menu_get_active_trail();
                     print $tmp_activeTrail[2]['link_title'];
  		  			   ?>
  		  			</h5>
		  		</div>
		  		<div class="port-col-left-navigation">
		  	    <?php // get the list of lvl 2 nodes and parse thru until it equals the same name as the lvl2 breadcrumb name 
            $tmp_treeData = menu_build_tree('menu-resident-second-tier', array('expanded' => array(0), 'min_depth' => 1));
            foreach ($tmp_treeData as $tmpValue){
              if (strtolower(trim($tmp_activeTrail[2]['link_title'])) == strtolower(trim($tmpValue['link']['link_title']))){
                $tmp_mlid = $tmpValue['link']['mlid'];
                break;
              } 
            }                        
            unset($tmp_treeData);       
            unset($tmpValue);
            $tmp_treeData = menu_build_tree('menu-resident-second-tier', array('expanded' => array( $tmp_mlid ), 'min_depth' => 2));
            print "<ul>";            
            foreach ($tmp_treeData as $key => $tmpValue){ 
              print '<li><a href="' . url($tmpValue['link']['href']) . '" >' . $tmpValue['link']['link_title'] . '</a></li>';  
            }            
            print "</ul>";  
            unset($tmp_treeData);
            unset($tmpValue);  
					?>
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