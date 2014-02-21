<?php
/**
 * @file
 * staff_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_job_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
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
function staff_job_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function staff_job_node_info() {
  $items = array(
    'job_staff' => array(
      'name' => t('Staff Job'),
      'base' => 'node_content',
      'description' => t('A staff job listing.'),
      'has_title' => '1',
      'title_label' => t('Staff Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
