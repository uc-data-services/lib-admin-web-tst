<?php
/**
 * @file
 * lhrd_student_job_display_suite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lhrd_student_job_display_suite_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jobhours|node|job_student|full';
  $field_group->group_name = 'group_jobhours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_student';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '7',
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
        'classes' => 'group-jobhours field-group-fieldset',
      ),
    ),
  );
  $export['group_jobhours|node|job_student|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jobinfo|node|job_student|full';
  $field_group->group_name = 'group_jobinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_student';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_student_job_duties',
      1 => 'field_student_job_notes',
      2 => 'field_student_job_q_desired',
      3 => 'field_student_job_q_required',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-jobinfo field-group-fieldset',
      ),
    ),
  );
  $export['group_jobinfo|node|job_student|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jobpage_rightcol|node|job_student|full';
  $field_group->group_name = 'group_jobpage_rightcol';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_student';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'right-col-group',
    'weight' => '1',
    'children' => array(
      0 => 'flag_publish_job',
      1 => 'lhrd_jobpage_rightcol',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'right-col-group',
      'instance_settings' => array(
        'classes' => 'group-jobpage-rightcol field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_jobpage_rightcol|node|job_student|full'] = $field_group;

  return $export;
}
