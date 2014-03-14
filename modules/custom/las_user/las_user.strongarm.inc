<?php
/**
 * @file
 * las_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function las_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path';
  $strongarm->value = 'import/*
user-feeds-import
node/*/import
node/*/delete-items
node/*/log
user/*/edit';
  $export['admin_theme_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path_disallow';
  $strongarm->value = '';
  $export['admin_theme_path_disallow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__las_user_feeds_import';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_las_user_feeds_import';
  $strongarm->value = '0';
  $export['language_content_type_las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_las_user_feeds_import';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_las_user_feeds_import';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_las_user_feeds_import';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_las_user_feeds_import';
  $strongarm->value = '1';
  $export['node_preview_las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_las_user_feeds_import';
  $strongarm->value = 1;
  $export['node_submitted_las_user_feeds_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_las_user_feeds_import_pattern';
  $strongarm->value = '[node:content-type]/[node:title]';
  $export['pathauto_node_las_user_feeds_import_pattern'] = $strongarm;

  return $export;
}
