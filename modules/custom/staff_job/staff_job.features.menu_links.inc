<?php
/**
 * @file
 * staff_job.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function staff_job_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-lhrd-staff-menu:benefits
  $menu_links['menu-lhrd-staff-menu:benefits'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'benefits',
    'router_path' => 'benefits',
    'link_title' => 'Benefits & Work Life',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-lhrd-staff-menu:jobs/staff-jobs
  $menu_links['menu-lhrd-staff-menu:jobs/staff-jobs'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'job-seekers/staff-jobs',
    'router_path' => 'job-seekers/staff-jobs',
    'link_title' => 'Job Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-lhrd-staff-menu:staff/evaluations
  $menu_links['menu-lhrd-staff-menu:staff/evaluations'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/evaluations',
    'router_path' => 'staff/evaluations',
    'link_title' => 'Performance Evaluations',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-lhrd-staff-menu:staff/learning-and-development
  $menu_links['menu-lhrd-staff-menu:staff/learning-and-development'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/learning-and-development',
    'router_path' => 'staff/learning-and-development',
    'link_title' => 'Learning & Development',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-lhrd-staff-menu:staff/managers-supervisors
  $menu_links['menu-lhrd-staff-menu:staff/managers-supervisors'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/managers-supervisors',
    'router_path' => 'staff/managers-supervisors',
    'link_title' => 'Managers & Supervisors',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-lhrd-staff-menu:staff/resources
  $menu_links['menu-lhrd-staff-menu:staff/resources'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/resources',
    'router_path' => 'staff/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Benefits & Work Life');
  t('Job Opportunities');
  t('Learning & Development');
  t('Managers & Supervisors');
  t('Performance Evaluations');
  t('Resources');


  return $menu_links;
}
