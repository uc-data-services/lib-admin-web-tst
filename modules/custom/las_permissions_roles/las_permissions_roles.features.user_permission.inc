<?php
/**
 * @file
 * las_permissions_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function las_permissions_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'create job_academic content'.
  $permissions['create job_academic content'] = array(
    'name' => 'create job_academic content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create job_staff content'.
  $permissions['create job_staff content'] = array(
    'name' => 'create job_staff content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create job_student content'.
  $permissions['create job_student content'] = array(
    'name' => 'create job_student content',
    'roles' => array(
      'HR Analyst' => 'HR Analyst',
      'LBS Analyst' => 'LBS Analyst',
      'Student Supervisor' => 'Student Supervisor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create las_chartstring content'.
  $permissions['create las_chartstring content'] = array(
    'name' => 'create las_chartstring content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create travel_form content'.
  $permissions['create travel_form content'] = array(
    'name' => 'create travel_form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create travel_training_development_reim content'.
  $permissions['create travel_training_development_reim content'] = array(
    'name' => 'create travel_training_development_reim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create unit content'.
  $permissions['create unit content'] = array(
    'name' => 'create unit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_academic content'.
  $permissions['delete any job_academic content'] = array(
    'name' => 'delete any job_academic content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_staff content'.
  $permissions['delete any job_staff content'] = array(
    'name' => 'delete any job_staff content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_student content'.
  $permissions['delete any job_student content'] = array(
    'name' => 'delete any job_student content',
    'roles' => array(
      'HR Analyst' => 'HR Analyst',
      'LBS Analyst' => 'LBS Analyst',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any las_chartstring content'.
  $permissions['delete any las_chartstring content'] = array(
    'name' => 'delete any las_chartstring content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any travel_form content'.
  $permissions['delete any travel_form content'] = array(
    'name' => 'delete any travel_form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any travel_training_development_reim content'.
  $permissions['delete any travel_training_development_reim content'] = array(
    'name' => 'delete any travel_training_development_reim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any unit content'.
  $permissions['delete any unit content'] = array(
    'name' => 'delete any unit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_academic content'.
  $permissions['delete own job_academic content'] = array(
    'name' => 'delete own job_academic content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_staff content'.
  $permissions['delete own job_staff content'] = array(
    'name' => 'delete own job_staff content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_student content'.
  $permissions['delete own job_student content'] = array(
    'name' => 'delete own job_student content',
    'roles' => array(
      'HR Analyst' => 'HR Analyst',
      'LBS Analyst' => 'LBS Analyst',
      'Student Supervisor' => 'Student Supervisor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own las_chartstring content'.
  $permissions['delete own las_chartstring content'] = array(
    'name' => 'delete own las_chartstring content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own travel_form content'.
  $permissions['delete own travel_form content'] = array(
    'name' => 'delete own travel_form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own travel_training_development_reim content'.
  $permissions['delete own travel_training_development_reim content'] = array(
    'name' => 'delete own travel_training_development_reim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own unit content'.
  $permissions['delete own unit content'] = array(
    'name' => 'delete own unit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_academic content'.
  $permissions['edit any job_academic content'] = array(
    'name' => 'edit any job_academic content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_staff content'.
  $permissions['edit any job_staff content'] = array(
    'name' => 'edit any job_staff content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_student content'.
  $permissions['edit any job_student content'] = array(
    'name' => 'edit any job_student content',
    'roles' => array(
      'HR Analyst' => 'HR Analyst',
      'LBS Analyst' => 'LBS Analyst',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any las_chartstring content'.
  $permissions['edit any las_chartstring content'] = array(
    'name' => 'edit any las_chartstring content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any travel_form content'.
  $permissions['edit any travel_form content'] = array(
    'name' => 'edit any travel_form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any travel_training_development_reim content'.
  $permissions['edit any travel_training_development_reim content'] = array(
    'name' => 'edit any travel_training_development_reim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any unit content'.
  $permissions['edit any unit content'] = array(
    'name' => 'edit any unit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_academic content'.
  $permissions['edit own job_academic content'] = array(
    'name' => 'edit own job_academic content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_staff content'.
  $permissions['edit own job_staff content'] = array(
    'name' => 'edit own job_staff content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_student content'.
  $permissions['edit own job_student content'] = array(
    'name' => 'edit own job_student content',
    'roles' => array(
      'HR Analyst' => 'HR Analyst',
      'LBS Analyst' => 'LBS Analyst',
      'Student Supervisor' => 'Student Supervisor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own las_chartstring content'.
  $permissions['edit own las_chartstring content'] = array(
    'name' => 'edit own las_chartstring content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own travel_form content'.
  $permissions['edit own travel_form content'] = array(
    'name' => 'edit own travel_form content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own travel_training_development_reim content'.
  $permissions['edit own travel_training_development_reim content'] = array(
    'name' => 'edit own travel_training_development_reim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own unit content'.
  $permissions['edit own unit content'] = array(
    'name' => 'edit own unit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag publish_job'.
  $permissions['flag publish_job'] = array(
    'name' => 'flag publish_job',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag unpublish_student_job'.
  $permissions['flag unpublish_student_job'] = array(
    'name' => 'flag unpublish_student_job',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(
      'HR Analyst' => 'HR Analyst',
      'LBS Analyst' => 'LBS Analyst',
      'Student Supervisor' => 'Student Supervisor',
      'administrator' => 'administrator',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'unflag publish_job'.
  $permissions['unflag publish_job'] = array(
    'name' => 'unflag publish_job',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag unpublish_student_job'.
  $permissions['unflag unpublish_student_job'] = array(
    'name' => 'unflag unpublish_student_job',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}