<?php
/**
 * @file
 * las_permissions_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function las_permissions_roles_user_default_roles() {
  $roles = array();

  // Exported role: HR Analyst.
  $roles['HR Analyst'] = array(
    'name' => 'HR Analyst',
    'weight' => 3,
  );

  // Exported role: LBS Analyst.
  $roles['LBS Analyst'] = array(
    'name' => 'LBS Analyst',
    'weight' => 4,
  );

  // Exported role: Staff.
  $roles['Staff'] = array(
    'name' => 'Staff',
    'weight' => 11,
  );

  // Exported role: Student Supervisor.
  $roles['Student Supervisor'] = array(
    'name' => 'Student Supervisor',
    'weight' => 2,
  );

  return $roles;
}
