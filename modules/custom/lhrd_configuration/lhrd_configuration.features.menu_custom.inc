<?php
/**
 * @file
 * lhrd_configuration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function lhrd_configuration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu-left.
  $menus['menu-footer-menu-left'] = array(
    'menu_name' => 'menu-footer-menu-left',
    'title' => 'footer menu left',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-middle.
  $menus['menu-footer-menu-middle'] = array(
    'menu_name' => 'menu-footer-menu-middle',
    'title' => 'footer menu middle',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-right.
  $menus['menu-footer-menu-right'] = array(
    'menu_name' => 'menu-footer-menu-right',
    'title' => 'footer menu right',
    'description' => '',
  );
  // Exported menu: menu-lhrd-benefits-menu.
  $menus['menu-lhrd-benefits-menu'] = array(
    'menu_name' => 'menu-lhrd-benefits-menu',
    'title' => 'LHRD Benefits Menu',
    'description' => '',
  );
  // Exported menu: menu-lhrd-jobseekers-menu.
  $menus['menu-lhrd-jobseekers-menu'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'title' => 'LHRD JobSeekers Menu',
    'description' => '',
  );
  // Exported menu: menu-top-bar.
  $menus['menu-top-bar'] = array(
    'menu_name' => 'menu-top-bar',
    'title' => 'Top bar',
    'description' => 'Top menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Benefits Menu');
  t('LHRD JobSeekers Menu');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top bar');
  t('Top menu');
  t('footer menu left');
  t('footer menu middle');
  t('footer menu right');


  return $menus;
}
