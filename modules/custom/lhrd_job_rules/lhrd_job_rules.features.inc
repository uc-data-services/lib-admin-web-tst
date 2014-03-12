<?php
/**
 * @file
 * lhrd_job_rules.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function lhrd_job_rules_flag_default_flags() {
  $flags = array();
  // Exported flag: "Is Chartstring Correct".
  $flags['las_lbschartstringcheck'] = array(
    'entity_type' => 'node',
    'title' => 'Is Chartstring Correct',
    'global' => 1,
    'types' => array(
      0 => 'job_student',
    ),
    'flag_short' => 'Flag this item',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'lhrd_job_rules',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Analyst StudentJob Publish/Unpublish".
  $flags['publish_job'] = array(
    'entity_type' => 'node',
    'title' => 'Analyst StudentJob Publish/Unpublish',
    'global' => 1,
    'types' => array(
      0 => 'job_student',
    ),
    'flag_short' => 'Publish',
    'flag_long' => 'Publish this student job.',
    'flag_message' => 'This student job has been published. ',
    'unflag_short' => 'Unpublish',
    'unflag_long' => 'Unpublish this student job. ',
    'unflag_message' => 'This student job has been unpublished. ',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'lhrd_job_rules',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Supervisor StudentJob Request/Unpost".
  $flags['unpublish_student_job'] = array(
    'entity_type' => 'node',
    'title' => 'Supervisor StudentJob Request/Unpost',
    'global' => 1,
    'types' => array(
      0 => 'job_student',
    ),
    'flag_short' => 'Request Job Posting',
    'flag_long' => 'Request this Student Job to be Posted',
    'flag_message' => 'Your request for this job to be posted has been sent to an HR Analyst.',
    'unflag_short' => 'Unpost',
    'unflag_long' => 'Unpost this Student Job',
    'unflag_message' => 'This student job has been unposted.',
    'unflag_denied_text' => 'You cannot use this flag.',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'lhrd_job_rules',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
