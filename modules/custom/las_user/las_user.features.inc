<?php
/**
 * @file
 * las_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function las_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "ldap_query" && $api == "ldap_query") {
    return array("version" => "1");
  }
  if ($module == "ldap_servers" && $api == "ldap_servers") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function las_user_node_info() {
  $items = array(
    'las_user_feeds_import' => array(
      'name' => t('User Feeds Import'),
      'base' => 'node_content',
      'description' => t('A content type for the user feeds import. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
