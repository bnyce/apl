/**
 * @file
 * README file for coa_taxonomy_selector.
 */

COA Taxonomy Selector 
The coa_taxonomy_selector module provides a link between the workbench_access module's content organization and permission control schema 
and AustinGO's Taxonomy based content organization (using the taxonomy_menu module).  The module modifies the default content edit form 
for each supported content type in the following ways:

    Hides any taxonomy select fields from user.
    Filters workbench access selection list to show only Taxonomy terms that are appropriate for that content type.
    Adds custom validation.
    Adds custom submit function that copies all term ids selected in workbench access to the appropriate taxonomy selection field(s).

When new content types are added in the system a developer will need to make modifications to the module to support the new content type. 

STEPS
1. Create new content type. For the content type add basic select term select fields for each of the taxonomies that the item may be associated with. 
   By convention name these fields 'field_cat_dept', 'field_cat_res', 'field_cat_bus', 'field_cat_dev', 'field_cat_gov' or 'field_cat_env'.
2. Open the default edit form and view source to obtain the form_id.  (ie: type_node_form).
3. Create a new case for this form in coa_taxonomy_selector_form_alter().  Add a dpm command to view the $form elements.  (See sample below):

      case 'type_node_form':          
          dpm($form, "form");
          
      break;

4. Refresh the form in the browser.  You should now see the $form array (assuming that you have DEVEL module installed and configured).  
5. In the case, modify the $form array to hide the taxonomy fields.  

          $form['field_cat_dept']['#type'] = 'hidden';
          $form['field_cat_res']['#type'] = 'hidden';
          $form['field_cat_bus']['#type'] = 'hidden';
          $form['field_cat_dev']['#type'] = 'hidden';
          $form['field_cat_gov']['#type'] = 'hidden';
          $form['field_cat_env']['#type'] = 'hidden';
          
6. In the case add custom validate and submit callbacks.:
          
          $form['#validate'] = array('_coa_taxonomy_selector_workbench_access_validate');
          $form['#submit'][] = 'coa_taxonomy_selector_node_form_submit';
          $form['actions']['submit']['#submit'][] = 'coa_taxonomy_selector_node_form_submit';
          
7. Modify the existing coa_taxonomy_selector_node_form_submit function to copy items from the workbench selector to the appropriate taxonomy field. (see code for example).
8. Save and test.
