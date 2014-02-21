<?php
/**
 * @file
 * unit.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function unit_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_chartstring_fund'
  $field_bases['field_chartstring_fund'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_chartstring_fund',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_chartstring_org'
  $field_bases['field_chartstring_org'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_chartstring_org',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
