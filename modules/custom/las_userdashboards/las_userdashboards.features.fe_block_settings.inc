<?php
/**
 * @file
 * las_userdashboards.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function las_userdashboards_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-view_student_jobs-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'view_student_jobs-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
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

  $export['views-view_student_jobs-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'view_student_jobs-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
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

  $export['views-view_student_jobs-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'view_student_jobs-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
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

  $export['views-view_student_jobs-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'view_student_jobs-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
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
