<?php
/**
 * @file
 * travel_approval.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function travel_approval_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function travel_approval_node_info() {
  $items = array(
    'travel_form' => array(
      'name' => t('Travel/Training/Development Request'),
      'base' => 'node_content',
      'description' => t('Testing the Library Travel/Training/Development Request Form'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'travel_training_development_reim' => array(
      'name' => t('Travel/Training/Development Reimbursement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}