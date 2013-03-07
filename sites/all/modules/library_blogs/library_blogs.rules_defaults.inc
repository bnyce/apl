<?php
/**
 * @file
 * library_blogs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function library_blogs_default_rules_configuration() {
  $items = array();
  $items['rules_blog_comment_moderation'] = entity_import('rules_config', '{ "rules_blog_comment_moderation" : {
      "LABEL" : "Blog Comment Moderation",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "blogs" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_blog_comment_moderation" ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "7" : "7" } },
            "subject" : "A comment has been flagged for moderation at [flagged-comment:url]",
            "message" : "A comment at [flagged-comment:url] has been flagged for moderation \\u003Cbr \\/\\u003E\\r\\n\\r\\nYou must login before you will be able to moderate the comment. \\u003Cbr \\/\\u003E\\r\\n\\r\\nComment Subject: [flagged-comment:subject] \\u003Cbr \\/\\u003E\\r\\n\\r\\nComment Body: [flagged-comment:comment-body]\\r\\n"
          }
        }
      ]
    }
  }');
  $items['rules_blog_comments'] = entity_import('rules_config', '{ "rules_blog_comments" : {
      "LABEL" : "Blog Comments",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "blogs", "comments" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "blog" : "blog" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[comment:node:author:mail]",
            "subject" : "Comment Posted at [comment:url] on [comment:node]",
            "message" : "Comment Posted at [comment:url] on [comment:node]\\r\\n\\u003Cbr \\/\\u003E\\r\\nAuthor: [comment:author]\\r\\n\\u003Cbr \\/\\u003E\\r\\nSubject: [comment:subject]\\r\\n\\u003Cbr \\/\\u003E\\r\\nBody: [comment:body]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
