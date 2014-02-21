<?php
/**
 * @file
 * academic_job.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function academic_job_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-lhrd-academic-menu.
  $menus['menu-lhrd-academic-menu'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'title' => 'LHRD Academic Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Academic Menu');


  return $menus;
}
