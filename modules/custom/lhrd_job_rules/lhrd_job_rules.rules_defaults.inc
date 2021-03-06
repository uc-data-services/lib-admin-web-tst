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
  $items['rules_commentaddedtostudentjob'] = entity_import('rules_config', '{ "rules_commentaddedtostudentjob" : {
      "LABEL" : "CommentAddedToStudentJob",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_conditional", "comment" ],
      "ON" : { "comment_insert--comment_node_job_student" : { "bundle" : "comment_node_job_student" } },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        },
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "job_student" : "job_student" } }
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "unpublish_student_job",
            "node" : [ "comment:node" ],
            "flagging_user" : [ "comment:author" ],
            "permission_check" : 1
          }
        },
        { "mail" : {
            "to" : [ "comment:node:author:mail" ],
            "subject" : "Needs further review: Student Job [comment:node:nid] [comment:node:title]",
            "message" : "Comment Title: [comment:title]\\r\\nComment Body: [comment:body]\\r\\n\\r\\nPlease review, revise, and resubmit your recently submitted request, [comment:node:nid] [comment:node:title]. You may visit the job\\u2019s url ([comment:node:url]) to view the comments for details and make changes as needed. \\r\\n\\r\\nURL: [comment:node:url]\\r\\nJob ID: [comment:node:nid]\\r\\nJob Title: [comment:node:title]\\r\\nStudent Supervisor: [comment:node:field-las-supervisor]\\r\\nDepartment: [comment:node:field-unit]\\r\\nClassification: [comment:node:field-classification]\\r\\nRequested By: [comment:node:author]",
            "language" : [ "" ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : {
                  "data" : [ "comment:node:field-las-supervisor" ],
                  "value" : [ "comment:node:author" ]
                }
              },
              "DO" : [
                { "mail" : {
                    "to" : [ "comment:node:field-las-supervisor:mail" ],
                    "subject" : "Needs further review: Student Job [comment:node:nid] [comment:node:title]",
                    "message" : "Comment Title: [comment:title]\\r\\nComment Body: [comment:body]\\r\\n\\r\\nPlease review, revise, and resubmit your recently submitted request, [comment:node:nid] [comment:node:title]. You may visit the job\\u2019s url ([comment:node:url]) to view the comments for details and make changes as needed.\\r\\n\\r\\nURL: [comment:node:url]\\r\\nJob ID: [comment:node:nid]\\r\\nJob Title: [comment:node:title]\\r\\nStudent Supervisor: [comment:node:field-las-supervisor]\\r\\nDepartment: [comment:node:field-unit]\\r\\nClassification: [comment:node:field-classification]\\r\\nRequested By: [comment:node:author]",
                    "language" : [ "" ]
                  }
                },
                { "drupal_message" : { "message" : "An email has been sent to [comment:node:field-las-supervisor]." } }
              ]
            }
          ]
        },
        { "drupal_message" : { "message" : "Supervisor [comment:node:field-las-supervisor] has been notified about your comment." } }
      ]
    }
  }');
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
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
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
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "Ready for your review: Student Job [flagged-node:nid] [flagged-node:title]",
            "message" : "Student Job [flagged-node:nid] [flagged-node:title] for the [flagged-node:field-unit] department was approved and is posted. Please visit the job request at [flagged-node:edit-url] to review and approve the job.\\r\\n\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]"
          }
        },
        { "mail" : {
            "to" : [ "flagged-node:author:mail" ],
            "subject" : "Approved and posted: Student Job [flagged-node:nid] [flagged-node:title]",
            "message" : "Your job has been posted and is now open to receive applications.\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]\\r\\nRequested By: [flagged-node:author]",
            "language" : [ "" ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : {
                  "data" : [ "flagged-node:field-las-supervisor" ],
                  "value" : [ "flagged-node:author" ]
                }
              },
              "DO" : [
                { "mail" : {
                    "to" : [ "flagged-node:field-las-supervisor:mail" ],
                    "subject" : "Approved and posted: Student Job [flagged-node:nid] [flagged-node:title]",
                    "message" : "Your job has been posted and is now open to receive applications.\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]\\r\\nRequested By: [flagged-node:author]",
                    "language" : [ "" ]
                  }
                },
                { "drupal_message" : { "message" : "An email has been sent to [flagged-node:field-las-supervisor]." } }
              ]
            }
          ]
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
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
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
        { "CONDITIONAL" : [
            {
              "IF" : { "node_is_published" : { "node" : [ "flagged-node" ] } },
              "DO" : [
                { "node_unpublish" : { "node" : [ "flagged-node" ] } },
                { "mail_to_users_of_role" : {
                    "roles" : { "value" : { "4" : "4" } },
                    "subject" : "Closed: Student Job [flagged-node:nid] [flagged-node:title]",
                    "message" : "The following student job has been closed and is no longer accepting applications:\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]\\r\\nRequested By: [flagged-node:author]"
                  }
                },
                { "mail" : {
                    "to" : [ "flagged-node:author:mail" ],
                    "subject" : "Closed: Student Job [flagged-node:nid] [flagged-node:title]",
                    "message" : "The following student job has been closed and is no longer accepting applications:\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]\\r\\nRequested By: [flagged-node:author]",
                    "language" : [ "" ]
                  }
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT data_is" : {
                          "data" : [ "flagged-node:field-las-supervisor" ],
                          "value" : [ "flagged-node:author" ]
                        }
                      },
                      "DO" : [
                        { "mail" : {
                            "to" : [ "flagged-node:field-las-supervisor:mail" ],
                            "subject" : "Closed: Student Job [flagged-node:nid] [flagged-node:title]",
                            "message" : "The following student job has been closed and is no longer accepting applications:\\r\\n\\r\\nJob Information:\\r\\nURL: [flagged-node:url]\\r\\nJob ID: [flagged-node:nid]\\r\\nJob Title: [flagged-node:title]\\r\\nDepartment: [flagged-node:field-unit]\\r\\nClassification: [flagged-node:field-student-job-classification]\\r\\nChartstring: [flagged-node:field-las-unit-chartstring]\\r\\nRequested By: [flagged-node:author]",
                            "language" : [ "" ]
                          }
                        },
                        { "drupal_message" : { "message" : "An email has been sent to [flagged-node:field-las-supervisor]." } }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "drupal_message" : { "message" : "[flagged-node:title] has been unpublished." } }
      ]
    }
  }');
  $items['rules_las_flag_as_lbs_approved'] = entity_import('rules_config', '{ "rules_las_flag_as_lbs_approved" : {
      "LABEL" : "Flag as LBS Approved",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "temp_jobtopublish" : { "label" : "JobToPublish", "type" : "node" } },
      "IF" : [
        { "NOT flag_flagged_node" : {
            "flag" : "las_lbschartstringcheck",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "las_lbschartstringcheck",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  $items['rules_las_flag_as_published'] = entity_import('rules_config', '{ "rules_las_flag_as_published" : {
      "LABEL" : "Publish Job(s)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "temp_jobtopublish" : { "label" : "JobToPublish", "type" : "node" } },
      "IF" : [
        { "NOT flag_flagged_node" : {
            "flag" : "publish_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "publish_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  $items['rules_las_flag_as_request'] = entity_import('rules_config', '{ "rules_las_flag_as_request" : {
      "LABEL" : "Request Job(s)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "temp_jobtopublish" : { "label" : "JobToPublish", "type" : "node" } },
      "IF" : [
        { "NOT flag_flagged_node" : {
            "flag" : "unpublish_student_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "unpublish_student_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  $items['rules_las_unflag_as_draft'] = entity_import('rules_config', '{ "rules_las_unflag_as_draft" : {
      "LABEL" : "Revert to Draft",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "temp_jobtopublish" : { "label" : "JobToPublish", "type" : "node" } },
      "IF" : [
        { "flag_flagged_node" : {
            "flag" : "unpublish_student_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "unpublish_student_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        }
      ]
    }
  }');
  $items['rules_las_unflag_as_unpublished'] = entity_import('rules_config', '{ "rules_las_unflag_as_unpublished" : {
      "LABEL" : "Unpublish Job(s)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "temp_jobtopublish" : { "label" : "JobToPublish", "type" : "node" } },
      "IF" : [
        { "flag_flagged_node" : {
            "flag" : "publish_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "publish_job",
            "node" : [ "temp-jobtopublish" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        }
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
            "message" : "You have successfully submitted a job request to the Student Employment Coordinator. It is now pending review.\\r\\n\\r\\nJob Information:\\r\\nURL: [node:url]\\r\\nJob ID: [node:nid] \\r\\nJob Title: [node:field-las-jobtitle]\\r\\nDepartment: [node:field-unit]\\r\\nClassification: [node:field_student_job_classification]\\r\\nChartstring: [node:field-las-unit-chartstring]\\r\\nRequested By: [node:author]",
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
                { "mail" : {
                    "to" : "[node:field-las-supervisor:mail]",
                    "subject" : "Student Job Request [node:nid] [node:field-las-jobtitle]",
                    "message" : "You have successfully submitted a job request to the Student Employment Coordinator. It is now pending review.\\r\\n\\r\\nJob Information:\\r\\nURL: [node:url]\\r\\nJob ID: [node:nid] \\r\\nJob Title: [node:field-las-jobtitle]\\r\\nDepartment: [node:field-unit]\\r\\nClassification: [node:field_student_job_classification]\\r\\nChartstring: [node:field-las-unit-chartstring]\\r\\nRequested By: [node:author]",
                    "language" : [ "" ]
                  }
                },
                { "drupal_message" : { "message" : "An email has been sent to [node:field-las-supervisor]." } }
              ]
            }
          ]
        },
        { "redirect" : { "url" : "[node:url]-[node:nid]" } }
      ]
    }
  }');
  $items['rules_request_job_re_posting'] = entity_import('rules_config', '{ "rules_request_job_re_posting" : {
      "LABEL" : "Request job re-posting",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "job", "student" ],
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
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
            "message" : "[flagged-node:field-las-supervisor] in the [flagged-node:field-las-supervisor:field_unit] department has submitted job request [flagged-node:nid] [flagged-node:field-las-jobtitle] ([flagged-node:field-student-job-classification]) under chartstring [flagged-node:field-las-unit-chartstring].\\r\\n\\r\\nYou may visit the job request at [flagged-node:url] to review and edit the job request.\\r\\n"
          }
        },
        { "mail" : {
            "to" : [ "flagged-node:author:mail" ],
            "subject" : "Student Job [flagged-node:nid] - [flagged-node:field-las-jobtitle]",
            "message" : "Your student requisition has been received. You job request will be reviewed and posted as soon as possible.  Once its posted you will receive an email. If there, are problems you will receive an email with a note about the problem. [flagged-node:url]\\t",
            "language" : [ "" ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : {
                  "data" : [ "flagged-node:field-las-supervisor" ],
                  "value" : [ "flagged-node:author" ]
                }
              },
              "DO" : [
                { "mail" : {
                    "to" : [ "flagged-node:field-las-supervisor:mail" ],
                    "subject" : "Student Job [flagged-node:nid] - [flagged-node:field-las-jobtitle]",
                    "message" : "Your student requisition has been received. You job request will be reviewed and posted as soon as possible.  Once its posted you will receive an email. If there, are problems you will receive an email with a note about the problem. [flagged-node:url]\\t",
                    "language" : [ "" ]
                  }
                },
                { "drupal_message" : { "message" : "An email has been sent to [flagged-node:field-las-supervisor]." } }
              ]
            }
          ]
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
