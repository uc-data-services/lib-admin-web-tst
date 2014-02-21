<?php
/**
 * @file
 * academic_job.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function academic_job_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-lhrd-academic-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-lhrd-academic-menu',
    'module' => 'menu',
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

  $export['panels_mini-lhrd_academic_index'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lhrd_academic_index',
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

  $export['panels_mini-lhrd_howtoapply_academic'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lhrd_howtoapply_academic',
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
