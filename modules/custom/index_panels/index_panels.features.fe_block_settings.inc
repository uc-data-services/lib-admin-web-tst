<?php
/**
 * @file
 * index_panels.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function index_panels_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-lhrd_indexpanels_announcements'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lhrd_indexpanels_announcements',
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
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-lhrd_indexpanels_img'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lhrd_indexpanels_img',
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
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-lhrd_indexpanels_news'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lhrd_indexpanels_news',
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
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-lhrd_indexpanels_welcome'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lhrd_indexpanels_welcome',
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
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
