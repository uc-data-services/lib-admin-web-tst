<?php
/**
 * @file
 * lhrd_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lhrd_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-footer-menu-left'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-left',
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
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-middle'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-middle',
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
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-right'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-right',
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
        'region' => 'footer_third',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-lhrd-benefits-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-lhrd-benefits-menu',
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

  $export['menu-menu-lhrd-jobseekers-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-lhrd-jobseekers-menu',
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

  $export['menu-menu-top-bar'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-top-bar',
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
        'region' => 'topbar',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-lhrd_contactpageinfo'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lhrd_contactpageinfo',
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

  $export['panels_mini-lhrd_footer_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lhrd_footer_info',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
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
        'region' => 'topbar',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
        'weight' => -6,
      ),
      'skeleton_lhrd' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'skeleton_lhrd',
        'weight' => -6,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
        'weight' => -8,
      ),
      'skeleton_lhrd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeleton_lhrd',
        'weight' => -8,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
        'weight' => -7,
      ),
      'skeleton_lhrd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeleton_lhrd',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'las_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'las_seven',
        'weight' => -25,
      ),
      'skeleton_lhrd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeleton_lhrd',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
