<?php
/**
 * @file
 * unit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function unit_node_info() {
  $items = array(
    'unit' => array(
      'name' => t('Unit'),
      'base' => 'node_content',
      'description' => t('A library unit. '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
