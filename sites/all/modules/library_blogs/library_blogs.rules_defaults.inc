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
            "to" : "[comment:node:author:mail], brazos.price@austintexas.gov",
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
