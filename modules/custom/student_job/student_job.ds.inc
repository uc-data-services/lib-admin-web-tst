<?php
/**
 * @file
 * student_job.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function student_job_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_student|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_student';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job_student|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_student|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_student';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'lhrd_htastudent_displaysuite' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'lhrd_jobdescription_ds' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'lhrd_studjobnid_ds' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'lhrd_workschedule_ds' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job_student|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function student_job_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lhrd_jobdescription_ds';
  $ds_field->label = 'LHRD JobDescription DS';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Job Description',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['lhrd_jobdescription_ds'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lhrd_studjobnid_ds';
  $ds_field->label = 'LHRD StudJobNID DS';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Student Library Job #[node:nid]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['lhrd_studjobnid_ds'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lhrd_workschedule_ds';
  $ds_field->label = 'LHRD WorkSchedule DS';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Work Schedule',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['lhrd_workschedule_ds'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function student_job_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_student|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_student';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'links',
        1 => 'field_student_job_numtohire',
        2 => 'field_student_job_workstudy',
        3 => 'field_unit',
        4 => 'field_student_job_minweeklyhours',
        5 => 'field_student_job_maxweeklyhours',
        6 => 'field_student_job_minshifthours',
        7 => 'field_student_job_hours',
        8 => 'field_student_job_duties',
        9 => 'field_student_job_q_required',
        10 => 'field_student_job_q_desired',
        11 => 'field_student_job_notes',
        12 => 'field_student_job_classification',
        13 => 'field_lhrd_student_job_workflow',
        14 => 'field_las_chartstring',
        15 => 'field_lhrd_stud_supervisor',
        16 => 'field_lhrd_kronos_supervisor',
        17 => 'field_lhrd_krns_is_stdn_super',
      ),
    ),
    'fields' => array(
      'links' => 'left',
      'field_student_job_numtohire' => 'left',
      'field_student_job_workstudy' => 'left',
      'field_unit' => 'left',
      'field_student_job_minweeklyhours' => 'left',
      'field_student_job_maxweeklyhours' => 'left',
      'field_student_job_minshifthours' => 'left',
      'field_student_job_hours' => 'left',
      'field_student_job_duties' => 'left',
      'field_student_job_q_required' => 'left',
      'field_student_job_q_desired' => 'left',
      'field_student_job_notes' => 'left',
      'field_student_job_classification' => 'left',
      'field_lhrd_student_job_workflow' => 'left',
      'field_las_chartstring' => 'left',
      'field_lhrd_stud_supervisor' => 'left',
      'field_lhrd_kronos_supervisor' => 'left',
      'field_lhrd_krns_is_stdn_super' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|job_student|default'] = $ds_layout;

  return $export;
}
