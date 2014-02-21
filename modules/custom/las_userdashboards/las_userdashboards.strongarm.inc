<?php
/**
 * @file
 * las_userdashboards.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function las_userdashboards_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'total_control_login_redirect';
  $strongarm->value = 1;
  $export['total_control_login_redirect'] = $strongarm;

  return $export;
}
