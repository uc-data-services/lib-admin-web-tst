<?php
/**
 * @file
 * unit.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function unit_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*unit*field_las_unit_chartstring*node*las_chartstring*field_unit';
  $cnr_obj->enabled = 1;
  $export['node*unit*field_las_unit_chartstring*node*las_chartstring*field_unit'] = $cnr_obj;

  return $export;
}
