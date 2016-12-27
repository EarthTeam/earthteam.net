<?php
/**
 * @file
 * earth_team_green_news.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function earth_team_green_news_default_rules_configuration() {
  $items = array();
  $items['rules_anonymous_submission_green_news_post'] = entity_import('rules_config', '{ "rules_anonymous_submission_green_news_post" : {
      "LABEL" : "Anonymous Submission: Green News Post",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--green_news_post" : { "bundle" : "green_news_post" } },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "entity_save" : { "data" : [ "node" ], "immediate" : 1 } },
        { "redirect" : { "url" : "[site:url]programs\\/green-news" } },
        { "drupal_message" : {
            "message" : "Thank you for your submission, your post has been received! ",
            "repeat" : 0
          }
        },
        { "mail" : {
            "to" : "manuel@earthteam.net",
            "subject" : "A new Green News Post has been submitted!",
            "message" : "Great News!  A new Green News Post has been submitted for you approval.\\r\\n\\r\\nTo view the post, visit: [node:url]\\r\\n\\r\\nHave a nice day!",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
