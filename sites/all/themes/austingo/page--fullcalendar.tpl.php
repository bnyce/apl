  <?php print render($page['header']); ?>

  <div id="topmenu"><?php print render($page['topmenu']); ?></div>
  <div id="wrapper">
    <div id="container" class="clearfix">
      <div id="header">
        <div id="toplinks">
          <?php print render($page['toplinks']); ?>
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


        <div class="single-column">
          <div class="breadcrumb-left"><?php print $breadcrumb; ?></div>

		  <div class="br">
          <div class="small-col">
            <?php print render($page['content_right_sidebar']);?>
          </div><!-- / small-col -->
          <div class="large-col">
            <?php print render($page['content_main_blocks']); ?>
            <?php print render($page['content']); ?>
          </div><!-- / large-col -->
          </div><!-- / br -->
        </div><!-- /single-columns -->



      </div></div></div></div> <!-- /.left-corner, /.right-corner, /#squeeze, /#center -->
    </div> <!-- /#container -->
  </div> <!-- /#wrapper -->
  <div id="footer">
    <?php print $feed_icons ?>
    <div style="clear: both;"></div>
    <div id="footer-blocks"><?php print render($page['footer']); ?></div>
    <div style="clear: both;"></div>
    <div id="footer-menu"><?php print render($page['footer_menu']); ?></div>
    <!-- /##fullcalendar template -->
    <?php print_r($node); ?>
  </div>
