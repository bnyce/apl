<?php
/**
 * @file
 * coa_directory.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function coa_directory_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'customer_service_directory_view';
  $view->description = 'Glossary view of Online Services Directory';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer_service_directory_view';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Customer Service Directory';
  $handler->display->display_options['css_class'] = 'services-table';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'field_news_link' => 'field_news_link',
    'title_1' => 'title_1',
    'field_service_body' => 'field_news_link',
    'field_phone1' => 'field_phone1',
    'field_email' => 'field_email',
    'field_contact1' => 'field_contact1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_news_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_service_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_phone1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_contact1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<!--You are viewing the results from a filter "A".<a href="/glossary">Reset Filter</a>-->

<style type="text/css">
div.view-service-directory-view div.view-header {
  float: left;
}
</style>
<span class="views-summary views-summary-unformatted"> 
<a href="/glossary/all">All</a> |&nbsp;
<a href="/glossary/a">A</a> |&nbsp;
<a href="/glossary/b">B</a> |&nbsp;
<a href="/glossary/c">C</a> |&nbsp;


</span>

';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 1;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_news_link']['id'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['table'] = 'field_data_field_news_link';
  $handler->display->display_options['fields']['field_news_link']['field'] = 'field_news_link';
  $handler->display->display_options['fields']['field_news_link']['label'] = 'SERVICE';
  $handler->display->display_options['fields']['field_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_news_link]';
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Content: Service Description */
  $handler->display->display_options['fields']['field_service_body']['id'] = 'field_service_body';
  $handler->display->display_options['fields']['field_service_body']['table'] = 'field_data_field_service_body';
  $handler->display->display_options['fields']['field_service_body']['field'] = 'field_service_body';
  $handler->display->display_options['fields']['field_service_body']['label'] = '';
  $handler->display->display_options['fields']['field_service_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_service_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_service_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_service_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_service_body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_service_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_service_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_service_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_service_body']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'PHONE';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone1']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_contact1']['id'] = 'field_contact1';
  $handler->display->display_options['fields']['field_contact1']['table'] = 'field_data_field_contact1';
  $handler->display->display_options['fields']['field_contact1']['field'] = 'field_contact1';
  $handler->display->display_options['fields']['field_contact1']['label'] = 'CONTACT';
  $handler->display->display_options['fields']['field_contact1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['path'] = 'directory/[nid_1]/[field_contact1]';
  $handler->display->display_options['fields']['field_contact1']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Content: Title';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['title']['glossary'] = 1;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<!--You are viewing the results from a filter "A".<a href="/glossary">Reset Filter</a>-->
<p >The Customer Service Directory contains Web links about Departments and their services, phone numbers, and e-mail addresses for City of Austin services. For links to Web sites EXTERNAL to the City of Austin follow this link to our<a href="http://www.ci.austin.tx.us/links.htm" style="text-decoration:none"><strong> LINKS PAGE</strong></a>.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area_1']['id'] = 'area_1';
  $handler->display->display_options['empty']['area_1']['table'] = 'views';
  $handler->display->display_options['empty']['area_1']['field'] = 'area';
  $handler->display->display_options['empty']['area_1']['empty'] = FALSE;
  $handler->display->display_options['empty']['area_1']['content'] = 'Reasons you may not have succeeded: 
1. Misspelling of any word in the keyword search box.
2. Asking for an employee directory. We do not publicize our staff directory due to privacy concerns. You can call     3-1-1 or (512) 974-2000 and be transferred to anyone\'s desk.
3. The service may be handled by other levels of government:
      a. Travis County Government
      b. Texas State Government
      c. United States Government
4. Your phrasing does not match our phrasing in the keywords section for that service, try fewer words or use our     Mini-Google search engine which can handle more complicated searches.
5. If you are an employee, you may need to search our employee site - CitySpace (you must be on the COA network     to view this).
 

   
For links to Web sites EXTERNAL to the City of Austin follow this link to our LINKS PAGE. 
';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Keyword Search';
  $handler->display->display_options['filters']['keys']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'glossary';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<style type="text/css">
div.view-customer-service-directory-view div.view-header {
  float: right
}
</style>
<span class="views-summary views-summary-unformatted"> 
<a href="/glossary/a">A</a> |&nbsp;
<a href="/glossary/b">B</a> |&nbsp;
<a href="/glossary/c">C</a> |&nbsp;
<a href="/glossary/d">D</a> |&nbsp;
<a href="/glossary/e">E</a> |&nbsp;
<a href="/glossary/f">F</a> |&nbsp;
<a href="/glossary/g">G</a> |&nbsp;
<a href="/glossary/h">H</a> |&nbsp;
<a href="/glossary/i">I</a> |&nbsp;
<a href="/glossary/j">J</a> |&nbsp;
<a href="/glossary/k">K</a> |&nbsp;
<a href="/glossary/l">L</a> |&nbsp;
<a href="/glossary/m">M</a> |&nbsp;
<a href="/glossary/n">N</a> |&nbsp;
<a href="/glossary/o">O</a> |&nbsp;
<a href="/glossary/p">P</a> |&nbsp;
<a href="/glossary/q">Q</a> |&nbsp;
<a href="/glossary/r">R</a> |&nbsp;
<a href="/glossary/s">S</a> |&nbsp;
<a href="/glossary/t">T</a> |&nbsp;
<a href="/glossary/u">U</a> |&nbsp;
<a href="/glossary/v">V</a> |&nbsp;
<a href="/glossary/w">W</a> |&nbsp;
<a href="/glossary/x">X</a> |&nbsp;
<a href="/glossary/y">Y</a> |&nbsp;
<a href="/glossary/z">Z</a> |&nbsp;
<a href="/glossary/all">All</a>&nbsp;
</span>

';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = '1';
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = '|';
  $handler->display->display_options['arguments']['title']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['title']['glossary'] = 1;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = 0;
  $handler->display->display_options['inherit_exposed_filters'] = 0;
  $translatables['customer_service_directory_view'] = array(
    t('Master'),
    t('Customer Service Directory'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<!--You are viewing the results from a filter "A".<a href="/glossary">Reset Filter</a>-->

<style type="text/css">
div.view-service-directory-view div.view-header {
  float: left;
}
</style>
<span class="views-summary views-summary-unformatted"> 
<a href="/glossary/all">All</a> |&nbsp;
<a href="/glossary/a">A</a> |&nbsp;
<a href="/glossary/b">B</a> |&nbsp;
<a href="/glossary/c">C</a> |&nbsp;


</span>

'),
    t('SERVICE'),
    t('[field_news_link]'),
    t('PHONE'),
    t('Email'),
    t('CONTACT'),
    t('directory/[nid_1]/[field_contact1]'),
    t('Content: Title'),
    t('All'),
    t('Page'),
    t('<!--You are viewing the results from a filter "A".<a href="/glossary">Reset Filter</a>-->
<p >The Customer Service Directory contains Web links about Departments and their services, phone numbers, and e-mail addresses for City of Austin services. For links to Web sites EXTERNAL to the City of Austin follow this link to our<a href="http://www.ci.austin.tx.us/links.htm" style="text-decoration:none"><strong> LINKS PAGE</strong></a>.</p>'),
    t('Reasons you may not have succeeded: 
1. Misspelling of any word in the keyword search box.
2. Asking for an employee directory. We do not publicize our staff directory due to privacy concerns. You can call     3-1-1 or (512) 974-2000 and be transferred to anyone\'s desk.
3. The service may be handled by other levels of government:
      a. Travis County Government
      b. Texas State Government
      c. United States Government
4. Your phrasing does not match our phrasing in the keywords section for that service, try fewer words or use our     Mini-Google search engine which can handle more complicated searches.
5. If you are an employee, you may need to search our employee site - CitySpace (you must be on the COA network     to view this).
 

   
For links to Web sites EXTERNAL to the City of Austin follow this link to our LINKS PAGE. 
'),
    t('Keyword Search'),
    t('Attachment'),
    t('<style type="text/css">
div.view-customer-service-directory-view div.view-header {
  float: right
}
</style>
<span class="views-summary views-summary-unformatted"> 
<a href="/glossary/a">A</a> |&nbsp;
<a href="/glossary/b">B</a> |&nbsp;
<a href="/glossary/c">C</a> |&nbsp;
<a href="/glossary/d">D</a> |&nbsp;
<a href="/glossary/e">E</a> |&nbsp;
<a href="/glossary/f">F</a> |&nbsp;
<a href="/glossary/g">G</a> |&nbsp;
<a href="/glossary/h">H</a> |&nbsp;
<a href="/glossary/i">I</a> |&nbsp;
<a href="/glossary/j">J</a> |&nbsp;
<a href="/glossary/k">K</a> |&nbsp;
<a href="/glossary/l">L</a> |&nbsp;
<a href="/glossary/m">M</a> |&nbsp;
<a href="/glossary/n">N</a> |&nbsp;
<a href="/glossary/o">O</a> |&nbsp;
<a href="/glossary/p">P</a> |&nbsp;
<a href="/glossary/q">Q</a> |&nbsp;
<a href="/glossary/r">R</a> |&nbsp;
<a href="/glossary/s">S</a> |&nbsp;
<a href="/glossary/t">T</a> |&nbsp;
<a href="/glossary/u">U</a> |&nbsp;
<a href="/glossary/v">V</a> |&nbsp;
<a href="/glossary/w">W</a> |&nbsp;
<a href="/glossary/x">X</a> |&nbsp;
<a href="/glossary/y">Y</a> |&nbsp;
<a href="/glossary/z">Z</a> |&nbsp;
<a href="/glossary/all">All</a>&nbsp;
</span>

'),
  );
  $export['customer_service_directory_view'] = $view;

  $view = new view;
  $view->name = 'ser_directory';
  $view->description = 'PHP code to send an email in directory page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PHP code to send an email in directory page';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Sorry, There were no results found.';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<?php $email="[field_email]"; echo "[field_email]";?>';
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = '<?php $email="[field_email]";?>';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_contact1']['id'] = 'field_contact1';
  $handler->display->display_options['fields']['field_contact1']['table'] = 'field_data_field_contact1';
  $handler->display->display_options['fields']['field_contact1']['field'] = 'field_contact1';
  $handler->display->display_options['fields']['field_contact1']['label'] = '';
  $handler->display->display_options['fields']['field_contact1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['text'] = '[field_contact1]';
  $handler->display->display_options['fields']['field_contact1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_contact1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact1']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
     if(isset($_POST[\'submit\'])){
           $to= $data->_field_data[\'nid\'][\'entity\']->field_email[\'en\'][0][\'value\'];  // Get the email address dynamically
           $from = $_REQUEST[\'name\'] ; 
           $email=$_REQUEST[\'email\'];
           $subject=$_REQUEST[\'subject\'];
           $headers = "From:$email"; 
           $question=$_REQUEST[\'question\'];
           $body=$_POST[\'question\'];
         // Validations
           if($_POST[\'email\'] == "") {
               $error_email=1;
           }elseif($_POST[\'subject\'] =="") {
                   $error_subject=1;
           } else { 
            if($_POST[\'question\'] =="") {
                   $error_question=1;
          }else { 
            $send = mail($to, $subject, $body, $headers);  // mail function 
            if($send){
                 //header( "Location: http://www.localhost.com/thankyou.html" ); //  Redirect to this page after submission
                 echo "<b style=\'color:green\'>Thanks for Submission</b>";
           }else{
              print "We encountered an error sending your mail, please notify webmaster@austingo.com"; 
         } 
     }
   }
 }
    $str=strtoupper($data->_field_data[\'nid\'][\'entity\']->field_contact1[\'en\'][0][\'value\']);  //  Get the Contact info dynamically
?>
<head>
     <h2 style=\'color:grey\'>Send an email to <?php print $str ;?></h2>   <!-- header of the contact form-->
</head>
<!-- html form-->
<form method="post" action="">
   *indicates required fileld.
         <table id="table1"  border=1>
                <tr>
                      <td><b>To :</b></td><td><label for=\'<?php print $data->_field_data[\'nid\'][\'entity\']->field_email[\'en\'][0][\'value\']; ?>\' ><?php print $data->_field_data[\'nid\'][\'entity\']->field_contact1[\'en\'][0][\'value\'];?></label></td>
</tr>
                <tr>
                     <td><b>From :</b></td>
                     <td><input type=\'text\' name=\'name\'  value="<?php if (isset($_POST[\'name\'])){ 
                              echo  $_POST[\'name\'];}?>" ><br/>First and Last name(optional)</td>
               </tr>
                <tr>
                      <td><b>*E-mail Address :</b></td>
                       <td><input type=\'email\' name=\'email\' value="<?php if (isset($_POST[\'email\'])){ 
                                                                                                 echo  $_POST[\'email\'];
                                                                                          }?>"><br/>
                              <?php
                                       if(isset($_POST[\'submit\'])){
                                           if(isset($error_email)){
                                                echo "<div class=\'email_error\'>Please enter email,It should not be empty</div>"; 
                                            }
                                       }
                                  ?>
                              Be sure to include your complete e-mail address (including @ symbol).
                      </td>
                 </tr>
                <tr>
                     <td><b>*Subject :</b></td>
                     <td><input type=\'text\' name=\'subject\' value="<?php  
                                 if(isset($_POST[\'subject\'])){ echo $_POST[\'subject\'];}?>">
                                 <?php
                                       if(isset($_POST[\'submit\'])){
                                           if(isset($error_subject)){
                                                echo "<div class=\'email_error\'>Please enter Subject,It should not be empty</div>"; 
                                            }
                                       }
                                  ?> 
                      </td>
                 </tr>
                <tr>
                    <td><b>*Question or Comment :</b></td><td><textarea name=\'question\' rows=5 cols=40 ><?php if (isset($_POST[\'question\'])){ echo $_POST[\'question\'];}?></textarea>
                  <?php
                        if(isset($_POST[\'submit\'])){
                              if(isset($error_question)){
                                  echo "<div class=\'email_error\'>Please enter Question</div>"; 
                              }
                        }
                   ?>
                   </td>
              </tr>
                <tr>
                 <td colspan=2 align="center"><p><input type=\'submit\' name=\'submit\' value=\'SUBMIT\' align=\'center\'   style=\'text-align:center\'/></p></td>
               </tr>
           </table>
    </form>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'directory';
  $translatables['ser_directory'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sorry, There were no results found.'),
    t('<?php $email="[field_email]"; echo "[field_email]";?>'),
    t('<?php $email="[field_email]";?>'),
    t('[field_contact1]'),
    t('Nid'),
    t('All'),
    t('Page'),
  );
  $export['ser_directory'] = $view;

  return $export;
}
