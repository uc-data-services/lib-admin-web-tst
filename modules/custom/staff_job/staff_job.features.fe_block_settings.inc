<?php
/**
 * @file
 * staff_job.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function staff_job_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-lhrd-staff-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-lhrd-staff-menu',
    'module' => 'menu',
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

  $export['panels_mini-lhrd_howtoapply_staff'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lhrd_howtoapply_staff',
    'module' => 'panels_mini',
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

  $export['panels_mini-lhrd_staff_index'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lhrd_staff_index',
    'module' => 'panels_mini',
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
