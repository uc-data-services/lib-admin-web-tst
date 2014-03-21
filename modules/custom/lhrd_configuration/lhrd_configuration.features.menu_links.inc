<?php
/**
 * @file
 * lhrd_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lhrd_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_academic:academic
  $menu_links['main-menu_academic:academic'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'academic',
    'router_path' => 'academic',
    'link_title' => 'ACADEMIC',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'honzi-mainmenu-academic',
        ),
      ),
      'identifier' => 'main-menu_academic:academic',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: main-menu_job-seekers:job-seekers
  $menu_links['main-menu_job-seekers:job-seekers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'job-seekers',
    'router_path' => 'job-seekers',
    'link_title' => 'JOB SEEKERS',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'honzi-mainmenu-jobseekers',
        ),
      ),
      'identifier' => 'main-menu_job-seekers:job-seekers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: main-menu_staff:staff
  $menu_links['main-menu_staff:staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'STAFF',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'honzi-mainmenu-staff',
        ),
      ),
      'identifier' => 'main-menu_staff:staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: main-menu_students:student
  $menu_links['main-menu_students:student'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'student',
    'router_path' => 'student',
    'link_title' => 'STUDENTS',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'honzi-mainmenu-students',
        ),
      ),
      'identifier' => 'main-menu_students:student',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu-left_employees:staff
  $menu_links['menu-footer-menu-left_employees:staff'] = array(
    'menu_name' => 'menu-footer-menu-left',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Employees',
    'options' => array(
      'identifier' => 'menu-footer-menu-left_employees:staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu-left_general-info:index
  $menu_links['menu-footer-menu-left_general-info:index'] = array(
    'menu_name' => 'menu-footer-menu-left',
    'link_path' => 'index',
    'router_path' => 'index',
    'link_title' => 'General Info',
    'options' => array(
      'identifier' => 'menu-footer-menu-left_general-info:index',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu-middle_employees:staff
  $menu_links['menu-footer-menu-middle_employees:staff'] = array(
    'menu_name' => 'menu-footer-menu-middle',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Employees',
    'options' => array(
      'identifier' => 'menu-footer-menu-middle_employees:staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu-middle_general-info:index
  $menu_links['menu-footer-menu-middle_general-info:index'] = array(
    'menu_name' => 'menu-footer-menu-middle',
    'link_path' => 'index',
    'router_path' => 'index',
    'link_title' => 'General Info',
    'options' => array(
      'identifier' => 'menu-footer-menu-middle_general-info:index',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu-right_employees:staff
  $menu_links['menu-footer-menu-right_employees:staff'] = array(
    'menu_name' => 'menu-footer-menu-right',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Employees',
    'options' => array(
      'identifier' => 'menu-footer-menu-right_employees:staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu-right_general-info:index
  $menu_links['menu-footer-menu-right_general-info:index'] = array(
    'menu_name' => 'menu-footer-menu-right',
    'link_path' => 'index',
    'router_path' => 'index',
    'link_title' => 'General Info',
    'options' => array(
      'identifier' => 'menu-footer-menu-right_general-info:index',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-academic-menu_job-opportunities:job-seekers/academic-jobs
  $menu_links['menu-lhrd-academic-menu_job-opportunities:job-seekers/academic-jobs'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'job-seekers/academic-jobs',
    'router_path' => 'job-seekers/academic-jobs',
    'link_title' => 'Job Opportunities',
    'options' => array(
      'identifier' => 'menu-lhrd-academic-menu_job-opportunities:job-seekers/academic-jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-academic-menu_managers--supervisors:academic/managers-supervisors
  $menu_links['menu-lhrd-academic-menu_managers--supervisors:academic/managers-supervisors'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/managers-supervisors',
    'router_path' => 'academic/managers-supervisors',
    'link_title' => 'Managers & Supervisors',
    'options' => array(
      'identifier' => 'menu-lhrd-academic-menu_managers--supervisors:academic/managers-supervisors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-academic-menu_professional-development:academic/professional-development
  $menu_links['menu-lhrd-academic-menu_professional-development:academic/professional-development'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/professional-development',
    'router_path' => 'academic/professional-development',
    'link_title' => 'Professional Development',
    'options' => array(
      'identifier' => 'menu-lhrd-academic-menu_professional-development:academic/professional-development',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-academic-menu_resources:academic/resources
  $menu_links['menu-lhrd-academic-menu_resources:academic/resources'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/resources',
    'router_path' => 'academic/resources',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'menu-lhrd-academic-menu_resources:academic/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-academic-menu_reviews:academic/reviews
  $menu_links['menu-lhrd-academic-menu_reviews:academic/reviews'] = array(
    'menu_name' => 'menu-lhrd-academic-menu',
    'link_path' => 'academic/reviews',
    'router_path' => 'academic/reviews',
    'link_title' => 'Reviews',
    'options' => array(
      'identifier' => 'menu-lhrd-academic-menu_reviews:academic/reviews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_academic-jobs:job-seekers/academic-jobs
  $menu_links['menu-lhrd-jobseekers-menu_academic-jobs:job-seekers/academic-jobs'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/academic-jobs',
    'router_path' => 'job-seekers/academic-jobs',
    'link_title' => 'Academic Jobs',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_academic-jobs:job-seekers/academic-jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'menu-lhrd-jobseekers-menu_job-opportunities:<front>',
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_benefits:job-seekers/benefits
  $menu_links['menu-lhrd-jobseekers-menu_benefits:job-seekers/benefits'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/benefits',
    'router_path' => 'job-seekers',
    'link_title' => 'Benefits',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_benefits:job-seekers/benefits',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_campus-life:job-seekers/campus-life
  $menu_links['menu-lhrd-jobseekers-menu_campus-life:job-seekers/campus-life'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/campus-life',
    'router_path' => 'job-seekers/campus-life',
    'link_title' => 'Campus Life',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_campus-life:job-seekers/campus-life',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_diversity:job-seekers/diversity
  $menu_links['menu-lhrd-jobseekers-menu_diversity:job-seekers/diversity'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/diversity',
    'router_path' => 'job-seekers/diversity',
    'link_title' => 'Diversity',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_diversity:job-seekers/diversity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_job-opportunities:<front>
  $menu_links['menu-lhrd-jobseekers-menu_job-opportunities:<front>'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Job Opportunities',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_job-opportunities:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_staff-jobs:job-seekers/staff-jobs
  $menu_links['menu-lhrd-jobseekers-menu_staff-jobs:job-seekers/staff-jobs'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/staff-jobs',
    'router_path' => 'job-seekers/staff-jobs',
    'link_title' => 'Staff Jobs',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_staff-jobs:job-seekers/staff-jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'menu-lhrd-jobseekers-menu_job-opportunities:<front>',
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_student-jobs:job-seekers/student-jobs
  $menu_links['menu-lhrd-jobseekers-menu_student-jobs:job-seekers/student-jobs'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/student-jobs',
    'router_path' => 'job-seekers/student-jobs',
    'link_title' => 'Student Jobs',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_student-jobs:job-seekers/student-jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'menu-lhrd-jobseekers-menu_job-opportunities:<front>',
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_visiting-scholars:job-seekers/visiting-scholars
  $menu_links['menu-lhrd-jobseekers-menu_visiting-scholars:job-seekers/visiting-scholars'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/visiting-scholars',
    'router_path' => 'job-seekers',
    'link_title' => 'Visiting Scholars',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_visiting-scholars:job-seekers/visiting-scholars',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_identifier' => 'menu-lhrd-jobseekers-menu_job-opportunities:<front>',
  );
  // Exported menu link: menu-lhrd-jobseekers-menu_volunteer-opportunities:job-seekers/volunteer-opportunities
  $menu_links['menu-lhrd-jobseekers-menu_volunteer-opportunities:job-seekers/volunteer-opportunities'] = array(
    'menu_name' => 'menu-lhrd-jobseekers-menu',
    'link_path' => 'job-seekers/volunteer-opportunities',
    'router_path' => 'job-seekers',
    'link_title' => 'Volunteer Opportunities',
    'options' => array(
      'identifier' => 'menu-lhrd-jobseekers-menu_volunteer-opportunities:job-seekers/volunteer-opportunities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'menu-lhrd-jobseekers-menu_job-opportunities:<front>',
  );
  // Exported menu link: menu-lhrd-staff-menu_evaluations:staff/evaluations
  $menu_links['menu-lhrd-staff-menu_evaluations:staff/evaluations'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/evaluations',
    'router_path' => 'staff/evaluations',
    'link_title' => 'Evaluations',
    'options' => array(
      'identifier' => 'menu-lhrd-staff-menu_evaluations:staff/evaluations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-staff-menu_job-opportunities:job-seekers/staff-jobs
  $menu_links['menu-lhrd-staff-menu_job-opportunities:job-seekers/staff-jobs'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'job-seekers/staff-jobs',
    'router_path' => 'job-seekers/staff-jobs',
    'link_title' => 'Job Opportunities',
    'options' => array(
      'identifier' => 'menu-lhrd-staff-menu_job-opportunities:job-seekers/staff-jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-staff-menu_learning--development:staff/learning-and-development
  $menu_links['menu-lhrd-staff-menu_learning--development:staff/learning-and-development'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/learning-and-development',
    'router_path' => 'staff/learning-and-development',
    'link_title' => 'Learning & Development',
    'options' => array(
      'identifier' => 'menu-lhrd-staff-menu_learning--development:staff/learning-and-development',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-staff-menu_managers--supervisors:staff/managers-supervisors
  $menu_links['menu-lhrd-staff-menu_managers--supervisors:staff/managers-supervisors'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/managers-supervisors',
    'router_path' => 'staff/managers-supervisors',
    'link_title' => 'Managers & Supervisors',
    'options' => array(
      'identifier' => 'menu-lhrd-staff-menu_managers--supervisors:staff/managers-supervisors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-staff-menu_resources:staff/resources
  $menu_links['menu-lhrd-staff-menu_resources:staff/resources'] = array(
    'menu_name' => 'menu-lhrd-staff-menu',
    'link_path' => 'staff/resources',
    'router_path' => 'staff/resources',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'menu-lhrd-staff-menu_resources:staff/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-lhrd-students-menu_graduate-students:student/grad-students
  $menu_links['menu-lhrd-students-menu_graduate-students:student/grad-students'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/grad-students',
    'router_path' => 'student/grad-students',
    'link_title' => 'Graduate Students',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_graduate-students:student/grad-students',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-lhrd-students-menu_hiring-process:student/hiring-process
  $menu_links['menu-lhrd-students-menu_hiring-process:student/hiring-process'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/hiring-process',
    'router_path' => 'student/hiring-process',
    'link_title' => 'Hiring Process',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_hiring-process:student/hiring-process',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-lhrd-students-menu_job-opportunities:job-seekers/student-jobs
  $menu_links['menu-lhrd-students-menu_job-opportunities:job-seekers/student-jobs'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'job-seekers/student-jobs',
    'router_path' => 'job-seekers/student-jobs',
    'link_title' => 'Job Opportunities',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_job-opportunities:job-seekers/student-jobs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-lhrd-students-menu_managers--supervisors:student/managers-supervisors
  $menu_links['menu-lhrd-students-menu_managers--supervisors:student/managers-supervisors'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/managers-supervisors',
    'router_path' => 'student',
    'link_title' => 'Managers & Supervisors',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_managers--supervisors:student/managers-supervisors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-lhrd-students-menu_payroll--timekeeping:student/pay-time
  $menu_links['menu-lhrd-students-menu_payroll--timekeeping:student/pay-time'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/pay-time',
    'router_path' => 'student/pay-time',
    'link_title' => 'Payroll & Timekeeping',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_payroll--timekeeping:student/pay-time',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-lhrd-students-menu_student-handbook:student/handbook
  $menu_links['menu-lhrd-students-menu_student-handbook:student/handbook'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/handbook',
    'router_path' => 'student/handbook',
    'link_title' => 'Student Handbook',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_student-handbook:student/handbook',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-lhrd-students-menu_work-study:student/work-study
  $menu_links['menu-lhrd-students-menu_work-study:student/work-study'] = array(
    'menu_name' => 'menu-lhrd-students-menu',
    'link_path' => 'student/work-study',
    'router_path' => 'student/work-study',
    'link_title' => 'Work Study',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-lhrd-students-menu_work-study:student/work-study',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-bar_contact:http://lib.berkeley.edu/lhrd/contact
  $menu_links['menu-top-bar_contact:http://lib.berkeley.edu/lhrd/contact'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'http://lib.berkeley.edu/lhrd/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-top-bar_contact:http://lib.berkeley.edu/lhrd/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-top-bar_dashboard:admin/dashboard
  $menu_links['menu-top-bar_dashboard:admin/dashboard'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'usermenuleft',
        ),
      ),
      'identifier' => 'menu-top-bar_dashboard:admin/dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-top-bar_forms:forms
  $menu_links['menu-top-bar_forms:forms'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'forms',
    'router_path' => 'forms',
    'link_title' => 'Forms',
    'options' => array(
      'identifier' => 'menu-top-bar_forms:forms',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-bar_login:cas
  $menu_links['menu-top-bar_login:cas'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'cas',
    'router_path' => 'cas',
    'link_title' => 'Login',
    'options' => array(
      'identifier' => 'menu-top-bar_login:cas',
      'attributes' => array(
        'class' => array(
          0 => 'usermenuleft',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-top-bar_logout:user/logout
  $menu_links['menu-top-bar_logout:user/logout'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'identifier' => 'menu-top-bar_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: menu-top-bar_policies:http://lib.berkeley.edu/lhrd/policies
  $menu_links['menu-top-bar_policies:http://lib.berkeley.edu/lhrd/policies'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'http://lib.berkeley.edu/lhrd/policies',
    'router_path' => '',
    'link_title' => 'Policies',
    'options' => array(
      'identifier' => 'menu-top-bar_policies:http://lib.berkeley.edu/lhrd/policies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-top-bar_services:index
  $menu_links['menu-top-bar_services:index'] = array(
    'menu_name' => 'menu-top-bar',
    'link_path' => 'index',
    'router_path' => 'index',
    'link_title' => 'Services',
    'options' => array(
      'identifier' => 'menu-top-bar_services:index',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ACADEMIC');
  t('Academic Jobs');
  t('Benefits');
  t('Campus Life');
  t('Contact');
  t('Dashboard');
  t('Diversity');
  t('Employees');
  t('Evaluations');
  t('Forms');
  t('General Info');
  t('Graduate Students');
  t('Hiring Process');
  t('JOB SEEKERS');
  t('Job Opportunities');
  t('Learning & Development');
  t('Login');
  t('Logout');
  t('Managers & Supervisors');
  t('Payroll & Timekeeping');
  t('Policies');
  t('Professional Development');
  t('Resources');
  t('Reviews');
  t('STAFF');
  t('STUDENTS');
  t('Services');
  t('Staff Jobs');
  t('Student Handbook');
  t('Student Jobs');
  t('Visiting Scholars');
  t('Volunteer Opportunities');
  t('Work Study');


  return $menu_links;
}
