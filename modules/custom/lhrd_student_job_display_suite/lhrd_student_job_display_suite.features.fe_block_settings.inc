<?php
/**
 * @file
 * lhrd_student_job_display_suite.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lhrd_student_job_display_suite_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-lhrd_applybutton'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lhrd_applybutton',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeleton_lhrd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-lhrd_howtoapply_student_jobpage'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lhrd_howtoapply_student_jobpage',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeleton_lhrd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
