<?php
/**
 * @file
 * lhrd_student_job_display_suite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lhrd_student_job_display_suite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
