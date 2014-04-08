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

  // Exported role: AUL.
  $roles['AUL'] = array(
    'name' => 'AUL',
    'weight' => 9,
  );

  // Exported role: Department Head.
  $roles['Department Head'] = array(
    'name' => 'Department Head',
    'weight' => 10,
  );

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

  // Exported role: Librarian.
  $roles['Librarian'] = array(
    'name' => 'Librarian',
    'weight' => 7,
  );

  // Exported role: SDC.
  $roles['SDC'] = array(
    'name' => 'SDC',
    'weight' => 8,
  );

  // Exported role: Staff.
  $roles['Staff'] = array(
    'name' => 'Staff',
    'weight' => 5,
  );

  // Exported role: Student Supervisor.
  $roles['Student Supervisor'] = array(
    'name' => 'Student Supervisor',
    'weight' => 2,
  );

  // Exported role: Supervisor.
  $roles['Supervisor'] = array(
    'name' => 'Supervisor',
    'weight' => 6,
  );

  return $roles;
}
