<?php
/**
 * @file
 * academic_job.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function academic_job_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-lhrd-academic-menu:academic/managers-supervisors
  $menu_links['menu-lhrd-academic-menu:academic/managers-supervisors'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/managers-supervisors',
    'router_path' => 'academic/managers-supervisors',
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
  // Exported menu link: menu-lhrd-academic-menu:academic/professional-development
  $menu_links['menu-lhrd-academic-menu:academic/professional-development'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/professional-development',
    'router_path' => 'academic/professional-development',
    'link_title' => 'Professional Development',
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
  // Exported menu link: menu-lhrd-academic-menu:academic/resources
  $menu_links['menu-lhrd-academic-menu:academic/resources'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/resources',
    'router_path' => 'academic/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-lhrd-academic-menu:academic/reviews
  $menu_links['menu-lhrd-academic-menu:academic/reviews'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/reviews',
    'router_path' => 'academic',
    'link_title' => 'Reviews',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-lhrd-academic-menu:benefits
  $menu_links['menu-lhrd-academic-menu:benefits'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
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
  // Exported menu link: menu-lhrd-academic-menu:jobs/academic-jobs
  $menu_links['menu-lhrd-academic-menu:jobs/academic-jobs'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'job-seekers/academic-jobs',
    'router_path' => 'job-seekers/academic-jobs',
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
  // Exported menu link: menu-lhrd-academic-menu:new-hires
  $menu_links['menu-lhrd-academic-menu:new-hires'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'new-hires',
    'router_path' => 'new-hires',
    'link_title' => 'New Hires',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Benefits & Work Life');
  t('Job Opportunities');
  t('Managers & Supervisors');
  t('New Hires');
  t('Professional Development');
  t('Resources');
  t('Reviews');


  return $menu_links;
}
