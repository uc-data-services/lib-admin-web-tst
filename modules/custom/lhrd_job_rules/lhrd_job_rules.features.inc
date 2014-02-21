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
  // Exported flag: "Published".
  $flags['publish_job'] = array(
    'entity_type' => 'node',
    'title' => 'Published',
    'global' => 1,
    'types' => array(
      0 => 'job_student',
    ),
    'flag_short' => 'Publish',
    'flag_long' => 'Publish this job.',
    'flag_message' => 'The job has been published. ',
    'unflag_short' => 'Unpublish',
    'unflag_long' => 'Unpublish this job. ',
    'unflag_message' => 'The job has been unpublished. ',
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
  // Exported flag: "student job republish request unpublish toggle".
  $flags['unpublish_student_job'] = array(
    'entity_type' => 'node',
    'title' => 'student job republish request unpublish toggle',
    'global' => 1,
    'types' => array(
      0 => 'job_student',
    ),
    'flag_short' => 'Unpost',
    'flag_long' => 'Unpost this job',
    'flag_message' => 'The job was unpublished.',
    'unflag_short' => ' Request Job Posting',
    'unflag_long' => 'Request Student Job to be Re-posted',
    'unflag_message' => 'Your request for this job to be re-posted has been sent to an HR Analyst.',
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
