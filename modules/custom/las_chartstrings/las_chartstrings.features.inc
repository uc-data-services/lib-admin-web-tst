<?php
/**
 * @file
 * las_chartstrings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function las_chartstrings_ctools_plugin_api($module = NULL, $api = NULL) {
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
function las_chartstrings_node_info() {
  $items = array(
    'las_chartstring' => array(
      'name' => t('Chartstring'),
      'base' => 'node_content',
      'description' => t('Chartstrings are fund codes used for departmental expenses. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
