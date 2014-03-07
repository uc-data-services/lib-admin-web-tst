<?php
/**
 * @file
 * las_user.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function las_user_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devel_user_import_with_calnet';
  $feeds_importer->config = array(
    'name' => 'Devel User Import with Calnet',
    'description' => 'Importing users for development and populating their profile. ',
    'fetcher' => array(
      'plugin_key' => 'FeedsLdapQueryFetcher',
      'config' => array(
        'query_ids' => array(
          'dev_calnet_test' => 'dev_calnet_test',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsLdapEntryParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          6 => 0,
          4 => 0,
          5 => 0,
          3 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'uid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'displayname',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'uid',
            'target' => 'cas_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => 'las_user_feeds_import',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['devel_user_import_with_calnet'] = $feeds_importer;

  return $export;
}
