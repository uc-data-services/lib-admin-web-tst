<?php
/**
 * @file
 * staff_job.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function staff_job_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-lhrd-staff-menu.
  $menus['menu-lhrd-staff-menu'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'title' => 'LHRD Staff Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Staff Menu');


  return $menus;
}
