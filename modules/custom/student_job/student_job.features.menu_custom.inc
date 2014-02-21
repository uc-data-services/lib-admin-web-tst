<?php
/**
 * @file
 * student_job.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function student_job_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-lhrd-students-menu.
  $menus['menu-lhrd-students-menu'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'title' => 'LHRD Students Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Students Menu');


  return $menus;
}
