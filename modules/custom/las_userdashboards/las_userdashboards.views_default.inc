<?php
/**
 * @file
 * student_job.views_default.inc
 */


/**
* Implementation of hook_views_default_views().
*/
function las_userdashboards_views_default_views() {
  $views = array();

  include_once 'views/dashboard.inc';
  $views[$view->name] = $view;

  return $views;
}
