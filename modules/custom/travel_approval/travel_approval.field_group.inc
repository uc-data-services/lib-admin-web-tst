<?php
/**
 * @file
 * travel_approval.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function travel_approval_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_estimated_expenses|node|travel_form|default';
  $field_group->group_name = 'group_estimated_expenses';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'travel_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estimated Expenses',
    'weight' => '7',
    'children' => array(
      0 => 'field_direct_bill_airfare',
      1 => 'field_direct_bill_registration',
      2 => 'field_estimated_airfare',
      3 => 'field_estimated_book',
      4 => 'field_estimated_hotel',
      5 => 'field_estimated_meals_and_incide',
      6 => 'field_estimated_mileage',
      7 => 'field_estimated_other',
      8 => 'field_estimated_other_desc',
      9 => 'field_estimated_parking',
      10 => 'field_estimated_registration',
      11 => 'field_license_plate_number',
      12 => 'field_total_estimated_expense',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_estimated_expenses|node|travel_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_estimated_expenses|node|travel_form|form';
  $field_group->group_name = 'group_estimated_expenses';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'travel_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estimated Expenses',
    'weight' => '7',
    'children' => array(
      0 => 'field_direct_bill_airfare',
      1 => 'field_direct_bill_registration',
      2 => 'field_estimated_airfare',
      3 => 'field_estimated_book',
      4 => 'field_estimated_hotel',
      5 => 'field_estimated_meals_and_incide',
      6 => 'field_estimated_mileage',
      7 => 'field_estimated_other',
      8 => 'field_estimated_other_desc',
      9 => 'field_estimated_parking',
      10 => 'field_estimated_registration',
      11 => 'field_license_plate_number',
      12 => 'field_total_estimated_expense',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_estimated_expenses|node|travel_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_sources|node|travel_form|form';
  $field_group->group_name = 'group_fund_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'travel_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fund sources',
    'weight' => '8',
    'children' => array(
      0 => 'field_administrative',
      1 => 'field_collection_development',
      2 => 'field_lauc_b',
      3 => 'field_professional',
      4 => 'field_sdc',
      5 => 'field_traveler',
      6 => 'field_other',
      7 => 'field_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_sources|node|travel_form|form'] = $field_group;

  return $export;
}
