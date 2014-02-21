<?php
/**
 * @file
 * student_job.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function student_job_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-lhrd-students-menu:jobs/student-jobs
  $menu_links['menu-lhrd-students-menu:jobs/student-jobs'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'job-seekers/student-jobs',
    'router_path' => 'job-seekers/student-jobs',
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
  // Exported menu link: menu-lhrd-students-menu:student/grad-students
  $menu_links['menu-lhrd-students-menu:student/grad-students'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/grad-students',
    'router_path' => 'student/grad-students',
    'link_title' => 'Graduate Students',
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
    'weight' => -47,
  );
  // Exported menu link: menu-lhrd-students-menu:student/handbook
  $menu_links['menu-lhrd-students-menu:student/handbook'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/handbook',
    'router_path' => 'student/handbook',
    'link_title' => 'Student Handbook',
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
  // Exported menu link: menu-lhrd-students-menu:student/hiring-process
  $menu_links['menu-lhrd-students-menu:student/hiring-process'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/hiring-process',
    'router_path' => 'student/hiring-process',
    'link_title' => 'Hiring Process',
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
  // Exported menu link: menu-lhrd-students-menu:student/managers-supervisors
  $menu_links['menu-lhrd-students-menu:student/managers-supervisors'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/managers-supervisors',
    'router_path' => 'student',
    'link_title' => 'Managers & Supervisors',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-lhrd-students-menu:student/pay-time
  $menu_links['menu-lhrd-students-menu:student/pay-time'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/pay-time',
    'router_path' => 'student/pay-time',
    'link_title' => 'Payroll & Timekeeping',
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
  // Exported menu link: menu-lhrd-students-menu:student/work-study
  $menu_links['menu-lhrd-students-menu:student/work-study'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/work-study',
    'router_path' => 'student/work-study',
    'link_title' => 'Work Study',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Graduate Students');
  t('Hiring Process');
  t('Job Opportunities');
  t('Managers & Supervisors');
  t('Payroll & Timekeeping');
  t('Student Handbook');
  t('Work Study');


  return $menu_links;
}
