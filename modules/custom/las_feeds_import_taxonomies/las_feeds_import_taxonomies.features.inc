<?php
/**
 * @file
 * las_feeds_import_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function las_feeds_import_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
