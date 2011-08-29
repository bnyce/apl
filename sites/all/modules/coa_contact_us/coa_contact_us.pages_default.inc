<?php
/**
 * @file
 * coa_contact_us.pages_default.inc
 */

/**
 * Implementation of hook_default_page_manager_pages().
 */
function coa_contact_us_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'global_contact_page';
  $page->task = 'page';
  $page->admin_title = 'Global Contact Page';
  $page->admin_description = 'These are the Elected Positions and Department main contacts.';
  $page->path = 'contact-us';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_global_contact_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'global_contact_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Physical Addresses and Phone Numbers of Departments';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h4>All phone numbers are in the (512) Area Code.</h4>
For emergencies: 9-1-1
For non-emergencies: 3-1-1 or 974-2000
Out of Area non-emergencies: 512-974-2000
TTY for the hearing impaired: 512-972-9848
Fax (for 3-1-1 issues/requests only):  972-9876
Power outages: 512-322-9100
Utility Call Center (Electric/Water): 512-494-9400
Accessibility Issues Inside Public Buildings - Code Enforcement - (SR)
Accessibility Issues w/Sidewalks/Curb/Ramp - Sidewalk/Curb/Ramp - New (SR)

Deliveries and Mailing Addresses
If you have hand-deliveries such as fliers, mail, packets, courier deliveries, packages or shipped deliveries such as FedEx or UPS intended for City Hall, please drop them off or have them delivered to the City of Austin\'s Mail Services. These items will be promptly delivered to the appropriate offices at City Hall. The delivery address is:

City of Austin
Name of Intended Department
ATT: Name of Intended Recipient
2006 East 4th Street
Austin, Texas 78702
 
Letters and packages sent through the U.S. Postal Service may be mailed to: 

City of Austin
Name of Intended Department
ATT: Name of Intended Recipient 
Austin, Texas 78767-1088

',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'contact_us-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['center'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'contact_us-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['center'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'contact_us-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['center'][3] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['global_contact_page'] = $page;

 return $pages;

}
