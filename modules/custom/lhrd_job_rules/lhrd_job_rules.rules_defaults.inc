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
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : { "job_student" : "job_student" } }
          }
        },
        { "user_has_role" : { "account" : [ "flagging-user" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "flagged-node" ] } },
        { "mail" : {
            "to" : "[flagged-node:author:mail]",
            "subject" : "Approved and posted: Student Job [flagged-node:nid] [flagged-node:title]",
            "message" : "Your job has been posted and is now open to receive applications.\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]",
            "language" : [ "" ]
          }
        },
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
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : { "job_student" : "job_student" } }
          }
        },
        { "user_has_role" : { "account" : [ "flagging-user" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "flagged-node" ] } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Closed: Student Job [flagged-node:nid] [flagged-node:title]",
            "message" : "The following student job has been closed and is no longer accepting applications:\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]",
            "from" : "[site:mail]"
          }
        },
        { "mail" : {
            "to" : "[flagged-node:author:mail]",
            "subject" : "Closed: Student Job [flagged-node:nid] [flagged-node:title]",
            "message" : "The following student job has been closed and is no longer accepting applications:\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "[flagged-node:title] has been unpublished." } }
      ]
    }
  }');
  $items['rules_lhrd_request_new_updated_student_job'] = entity_import('rules_config', '{ "rules_lhrd_request_new_updated_student_job" : {
      "LABEL" : "CreateNewStudentJob",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job post", "student" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_insert--job_student" : { "bundle" : "job_student" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "job_student" : "job_student" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "Student Job Request [node:nid] [node:field-las-jobtitle]",
            "message" : "You have successfully submitted a job request to the Student Employment Coordinator. It is now pending review.\\r\\n\\r\\nJob Information:\\r\\nURL: [node:url]\\r\\nJob ID: [node:nid] \\r\\nJob Title: [node:field-las-jobtitle]\\r\\nDepartment: [node:field-unit]\\r\\nClassification: [node:field_student_job_classification]\\r\\nChartstring: [node:field-las-unit-chartstring]",
            "language" : [ "" ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : {
                  "data" : [ "node:field-las-supervisor" ],
                  "value" : [ "site:current-user" ]
                }
              },
              "DO" : [
                { "drupal_message" : { "message" : "An email has (NOT YET) been sent to [node:field-las-supervisor]." } }
              ]
            }
          ]
        }
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
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : { "job_student" : "job_student" } }
          }
        },
        { "user_has_role" : { "account" : [ "flagging-user" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Ready for your review: Student Job Request [flagged-node:nid] [flagged-node:field-las-jobtitle]",
            "message" : "[flagged-node:author] in the [flagged-node:author:field_unit] department has submitted job request [flagged-node:nid] [flagged-node:field-las-jobtitle] ([flagged-node:field-student-job-classification]) under chartstring [flagged-node:field-las-unit-chartstring].\\r\\n\\r\\nYou may visit the job request at [flagged-node:url] to review and edit the job request.\\r\\n",
            "from" : "[site:mail]"
          }
        },
        { "mail" : {
            "to" : "[flagging-user:mail]",
            "subject" : "Student Job [flagged-node:nid] - [flagged-node:field-las-jobtitle]",
            "message" : "Your student requisition has been received. You job request will be reviewed and posted as soon as possible.  Once its posted you will receive an email. If there, are problems you will receive an email with a note about the problem. [flagged-node:url]\\t",
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
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : { "job_student" : "job_student" } }
          }
        },
        { "user_has_role" : { "account" : [ "flagging-user" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "flagged-node" ] } },
        { "flag_unflagnode" : {
            "flag" : "publish_job",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 1
          }
        },
        { "drupal_message" : { "message" : "[flagged-node:title] has been unrequested." } }
      ]
    }
  }');
  return $items;
}
