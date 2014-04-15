<?php
/**
 * @file
 * student_job.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function student_job_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_schedule|node|job_student|form';
  $field_group->group_name = 'group_work_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_student';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Work Schedule',
    'weight' => '12',
    'children' => array(
      0 => 'field_student_job_hours',
      1 => 'field_student_job_maxweeklyhours',
      2 => 'field_student_job_minshifthours',
      3 => 'field_student_job_minweeklyhours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-work-schedule field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_work_schedule|node|job_student|form'] = $field_group;

  return $export;
}
