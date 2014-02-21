<?php
/**
 * @file
 * student_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function student_job_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function student_job_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function student_job_node_info() {
  $items = array(
    'job_student' => array(
      'name' => t('Student Job'),
      'base' => 'node_content',
      'description' => t('A student job listing.'),
      'has_title' => '1',
      'title_label' => t('Student Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
