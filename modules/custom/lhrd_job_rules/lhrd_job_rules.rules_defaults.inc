<?php
/**
 * @file
 * lhrd_job_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lhrd_job_rules_default_rules_configuration() {
  $items = array();
  $items['rules_fill_kronos_supervisor_with_author_if_selected_yes'] = entity_import('rules_config', '{ "rules_fill_kronos_supervisor_with_author_if_selected_yes" : {
      "LABEL" : "fill kronos supervisor with author if selected yes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job post", "student" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--job_student" : { "bundle" : "job_student" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-lhrd-krns-is-stdn-super" ], "value" : "Yes" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_lhrd_kronos_supervisor" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "node:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched_author_uid" : "Fetched user author uid" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-lhrd-kronos-supervisor" ],
            "value" : [ "entity-fetched-author-uid" ]
          }
        }
      ]
    }
  }');
  $items['rules_job_post'] = entity_import('rules_config', '{ "rules_job_post" : {
      "LABEL" : "job post",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job post" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_publish_job" : [] },
      "DO" : [
        { "node_publish" : { "node" : [ "flagged-node" ] } },
        { "drupal_message" : { "message" : "[flagged-node:title] has been published." } }
      ]
    }
  }');
  $items['rules_job_unpost'] = entity_import('rules_config', '{ "rules_job_unpost" : {
      "LABEL" : "job unpost",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job", "unpost" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_unflagged_publish_job" : [] },
      "DO" : [
        { "node_unpublish" : { "node" : [ "flagged-node" ] } },
        { "drupal_message" : { "message" : "[flagged-node:title] has been unpublished." } }
      ]
    }
  }');
  $items['rules_request_job_re_posting'] = entity_import('rules_config', '{ "rules_request_job_re_posting" : {
      "LABEL" : "Request job re-posting",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job", "student" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_unpublish_student_job" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "6" : "6" } },
            "subject" : "solo ventures",
            "message" : "more to come.",
            "from" : "from you"
          }
        },
        { "mail" : {
            "to" : "[entity-fetched-author-uid:mail]",
            "subject" : "Student Job [node:nid] - [node:status]",
            "message" : "Your student requisition has been received. You job request will be reviewed and posted as soon as possible.  Once its posted you will receive an email. If there, are problems you will receive an email with a note about the problem. [node:url]\\t",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "Your student job has been requested for posting." } }
      ]
    }
  }');
  $items['rules_unpublish_or_request_student_job'] = entity_import('rules_config', '{ "rules_unpublish_or_request_student_job" : {
      "LABEL" : "unpublish student job",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job", "student" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_unflagged_unpublish_student_job" : [] },
      "DO" : [
        { "node_unpublish" : { "node" : [ "flagged-node" ] } },
        { "flag_unflagnode" : {
            "flag" : "publish_job",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  return $items;
}
