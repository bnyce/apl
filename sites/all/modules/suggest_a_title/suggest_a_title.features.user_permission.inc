<?php
/**
 * @file
 * suggest_a_title.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function suggest_a_title_user_default_permissions() {
  $permissions = array();

  // Exported permission: create body.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_anticipated_.
  $permissions['create field_anticipated_'] = array(
    'name' => 'create field_anticipated_',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_austin_public_library_card.
  $permissions['create field_austin_public_library_card'] = array(
    'name' => 'create field_austin_public_library_card',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_author_performer_band.
  $permissions['create field_author_performer_band'] = array(
    'name' => 'create field_author_performer_band',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_follow_up.
  $permissions['create field_follow_up'] = array(
    'name' => 'create field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_format.
  $permissions['create field_format'] = array(
    'name' => 'create field_format',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_how_did_you_learn_about_th.
  $permissions['create field_how_did_you_learn_about_th'] = array(
    'name' => 'create field_how_did_you_learn_about_th',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_isbn_issn_upc.
  $permissions['create field_isbn_issn_upc'] = array(
    'name' => 'create field_isbn_issn_upc',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_language.
  $permissions['create field_language'] = array(
    'name' => 'create field_language',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_publisher.
  $permissions['create field_publisher'] = array(
    'name' => 'create field_publisher',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ready_to_email_.
  $permissions['create field_ready_to_email_'] = array(
    'name' => 'create field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_selector_s_comment.
  $permissions['create field_selector_s_comment'] = array(
    'name' => 'create field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_selector_s_comment_2.
  $permissions['create field_selector_s_comment_2'] = array(
    'name' => 'create field_selector_s_comment_2',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_targeted_age_level_of_item.
  $permissions['create field_targeted_age_level_of_item'] = array(
    'name' => 'create field_targeted_age_level_of_item',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_text_publication_year.
  $permissions['create field_text_publication_year'] = array(
    'name' => 'create field_text_publication_year',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_url.
  $permissions['create field_url'] = array(
    'name' => 'create field_url',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_which_library_locations_do.
  $permissions['create field_which_library_locations_do'] = array(
    'name' => 'create field_which_library_locations_do',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_your_e_mail.
  $permissions['create field_your_e_mail'] = array(
    'name' => 'create field_your_e_mail',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create suggest_a_title content.
  $permissions['create suggest_a_title content'] = array(
    'name' => 'create suggest_a_title content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any suggest_a_title content.
  $permissions['delete any suggest_a_title content'] = array(
    'name' => 'delete any suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own suggest_a_title content.
  $permissions['delete own suggest_a_title content'] = array(
    'name' => 'delete own suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any suggest_a_title content.
  $permissions['edit any suggest_a_title content'] = array(
    'name' => 'edit any suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: edit body.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_anticipated_.
  $permissions['edit field_anticipated_'] = array(
    'name' => 'edit field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_austin_public_library_card.
  $permissions['edit field_austin_public_library_card'] = array(
    'name' => 'edit field_austin_public_library_card',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_author_performer_band.
  $permissions['edit field_author_performer_band'] = array(
    'name' => 'edit field_author_performer_band',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_follow_up.
  $permissions['edit field_follow_up'] = array(
    'name' => 'edit field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_format.
  $permissions['edit field_format'] = array(
    'name' => 'edit field_format',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_how_did_you_learn_about_th.
  $permissions['edit field_how_did_you_learn_about_th'] = array(
    'name' => 'edit field_how_did_you_learn_about_th',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_isbn_issn_upc.
  $permissions['edit field_isbn_issn_upc'] = array(
    'name' => 'edit field_isbn_issn_upc',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_language.
  $permissions['edit field_language'] = array(
    'name' => 'edit field_language',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_publisher.
  $permissions['edit field_publisher'] = array(
    'name' => 'edit field_publisher',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ready_to_email_.
  $permissions['edit field_ready_to_email_'] = array(
    'name' => 'edit field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_selector_s_comment.
  $permissions['edit field_selector_s_comment'] = array(
    'name' => 'edit field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_selector_s_comment_2.
  $permissions['edit field_selector_s_comment_2'] = array(
    'name' => 'edit field_selector_s_comment_2',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_targeted_age_level_of_item.
  $permissions['edit field_targeted_age_level_of_item'] = array(
    'name' => 'edit field_targeted_age_level_of_item',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_text_publication_year.
  $permissions['edit field_text_publication_year'] = array(
    'name' => 'edit field_text_publication_year',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_url.
  $permissions['edit field_url'] = array(
    'name' => 'edit field_url',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_which_library_locations_do.
  $permissions['edit field_which_library_locations_do'] = array(
    'name' => 'edit field_which_library_locations_do',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_your_e_mail.
  $permissions['edit field_your_e_mail'] = array(
    'name' => 'edit field_your_e_mail',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own body.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_anticipated_.
  $permissions['edit own field_anticipated_'] = array(
    'name' => 'edit own field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_austin_public_library_card.
  $permissions['edit own field_austin_public_library_card'] = array(
    'name' => 'edit own field_austin_public_library_card',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_author_performer_band.
  $permissions['edit own field_author_performer_band'] = array(
    'name' => 'edit own field_author_performer_band',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_follow_up.
  $permissions['edit own field_follow_up'] = array(
    'name' => 'edit own field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_format.
  $permissions['edit own field_format'] = array(
    'name' => 'edit own field_format',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_how_did_you_learn_about_th.
  $permissions['edit own field_how_did_you_learn_about_th'] = array(
    'name' => 'edit own field_how_did_you_learn_about_th',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_isbn_issn_upc.
  $permissions['edit own field_isbn_issn_upc'] = array(
    'name' => 'edit own field_isbn_issn_upc',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_language.
  $permissions['edit own field_language'] = array(
    'name' => 'edit own field_language',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_publisher.
  $permissions['edit own field_publisher'] = array(
    'name' => 'edit own field_publisher',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ready_to_email_.
  $permissions['edit own field_ready_to_email_'] = array(
    'name' => 'edit own field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_selector_s_comment.
  $permissions['edit own field_selector_s_comment'] = array(
    'name' => 'edit own field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_selector_s_comment_2.
  $permissions['edit own field_selector_s_comment_2'] = array(
    'name' => 'edit own field_selector_s_comment_2',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_targeted_age_level_of_item.
  $permissions['edit own field_targeted_age_level_of_item'] = array(
    'name' => 'edit own field_targeted_age_level_of_item',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_text_publication_year.
  $permissions['edit own field_text_publication_year'] = array(
    'name' => 'edit own field_text_publication_year',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_url.
  $permissions['edit own field_url'] = array(
    'name' => 'edit own field_url',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_which_library_locations_do.
  $permissions['edit own field_which_library_locations_do'] = array(
    'name' => 'edit own field_which_library_locations_do',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_your_e_mail.
  $permissions['edit own field_your_e_mail'] = array(
    'name' => 'edit own field_your_e_mail',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own suggest_a_title content.
  $permissions['edit own suggest_a_title content'] = array(
    'name' => 'edit own suggest_a_title content',
    'roles' => array(
      0 => 'materials selector',
    ),
    'module' => 'node',
  );

  // Exported permission: exclude from message filtering.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(),
    'module' => 'disable_messages',
  );

  // Exported permission: view body.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view error messages.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'materials selector',
      5 => 'meeting rooms administrator',
      6 => 'pio',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view field_anticipated_.
  $permissions['view field_anticipated_'] = array(
    'name' => 'view field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_austin_public_library_card.
  $permissions['view field_austin_public_library_card'] = array(
    'name' => 'view field_austin_public_library_card',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_author_performer_band.
  $permissions['view field_author_performer_band'] = array(
    'name' => 'view field_author_performer_band',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_follow_up.
  $permissions['view field_follow_up'] = array(
    'name' => 'view field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_format.
  $permissions['view field_format'] = array(
    'name' => 'view field_format',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_how_did_you_learn_about_th.
  $permissions['view field_how_did_you_learn_about_th'] = array(
    'name' => 'view field_how_did_you_learn_about_th',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_isbn_issn_upc.
  $permissions['view field_isbn_issn_upc'] = array(
    'name' => 'view field_isbn_issn_upc',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_language.
  $permissions['view field_language'] = array(
    'name' => 'view field_language',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_publisher.
  $permissions['view field_publisher'] = array(
    'name' => 'view field_publisher',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ready_to_email_.
  $permissions['view field_ready_to_email_'] = array(
    'name' => 'view field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_selector_s_comment.
  $permissions['view field_selector_s_comment'] = array(
    'name' => 'view field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_selector_s_comment_2.
  $permissions['view field_selector_s_comment_2'] = array(
    'name' => 'view field_selector_s_comment_2',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_targeted_age_level_of_item.
  $permissions['view field_targeted_age_level_of_item'] = array(
    'name' => 'view field_targeted_age_level_of_item',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_text_publication_year.
  $permissions['view field_text_publication_year'] = array(
    'name' => 'view field_text_publication_year',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_url.
  $permissions['view field_url'] = array(
    'name' => 'view field_url',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_which_library_locations_do.
  $permissions['view field_which_library_locations_do'] = array(
    'name' => 'view field_which_library_locations_do',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_your_e_mail.
  $permissions['view field_your_e_mail'] = array(
    'name' => 'view field_your_e_mail',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own body.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_anticipated_.
  $permissions['view own field_anticipated_'] = array(
    'name' => 'view own field_anticipated_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_austin_public_library_card.
  $permissions['view own field_austin_public_library_card'] = array(
    'name' => 'view own field_austin_public_library_card',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_author_performer_band.
  $permissions['view own field_author_performer_band'] = array(
    'name' => 'view own field_author_performer_band',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_follow_up.
  $permissions['view own field_follow_up'] = array(
    'name' => 'view own field_follow_up',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_format.
  $permissions['view own field_format'] = array(
    'name' => 'view own field_format',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_how_did_you_learn_about_th.
  $permissions['view own field_how_did_you_learn_about_th'] = array(
    'name' => 'view own field_how_did_you_learn_about_th',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_isbn_issn_upc.
  $permissions['view own field_isbn_issn_upc'] = array(
    'name' => 'view own field_isbn_issn_upc',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_language.
  $permissions['view own field_language'] = array(
    'name' => 'view own field_language',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_publisher.
  $permissions['view own field_publisher'] = array(
    'name' => 'view own field_publisher',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ready_to_email_.
  $permissions['view own field_ready_to_email_'] = array(
    'name' => 'view own field_ready_to_email_',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_selector_s_comment.
  $permissions['view own field_selector_s_comment'] = array(
    'name' => 'view own field_selector_s_comment',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_selector_s_comment_2.
  $permissions['view own field_selector_s_comment_2'] = array(
    'name' => 'view own field_selector_s_comment_2',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'materials selector',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_targeted_age_level_of_item.
  $permissions['view own field_targeted_age_level_of_item'] = array(
    'name' => 'view own field_targeted_age_level_of_item',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_text_publication_year.
  $permissions['view own field_text_publication_year'] = array(
    'name' => 'view own field_text_publication_year',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_url.
  $permissions['view own field_url'] = array(
    'name' => 'view own field_url',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_which_library_locations_do.
  $permissions['view own field_which_library_locations_do'] = array(
    'name' => 'view own field_which_library_locations_do',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_your_e_mail.
  $permissions['view own field_your_e_mail'] = array(
    'name' => 'view own field_your_e_mail',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view status messages.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'materials selector',
      5 => 'meeting rooms administrator',
      6 => 'pio',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'materials selector',
      2 => 'pio',
    ),
    'module' => 'system',
  );

  // Exported permission: view warning messages.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'materials selector',
      5 => 'meeting rooms administrator',
      6 => 'pio',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
