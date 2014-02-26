<?php
/**
 * @file
 * lhrd_student_job_display_suite.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function lhrd_student_job_display_suite_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lhrd_jobpage_rightcol';
  $ds_field->label = 'LHRD JobPage RightCol';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['lhrd_jobpage_rightcol'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lhrd_returntostudentjobpage';
  $ds_field->label = 'LHRD ReturnToStudentJobPage';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="../student-jobs">Return to the student library job postings</a>',
      'format' => 'filtered_html',
    ),
    'use_token' => 0,
  );
  $export['lhrd_returntostudentjobpage'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function lhrd_student_job_display_suite_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_student|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_student';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_las_supervisor',
        2 => 'field_lhrd_krns_is_stdn_super',
        3 => 'field_lhrd_kronos_supervisor',
        4 => 'field_unit',
        5 => 'field_las_unit_chartstring',
        6 => 'group_work_schedule',
        7 => 'field_las_workstudy',
        9 => 'field_student_job_classification',
        10 => 'field_student_job_numtohire',
        11 => 'field_student_job_duties',
        12 => 'field_student_job_q_required',
        13 => 'field_student_job_q_desired',
        14 => 'field_student_job_notes',
        15 => 'field_lhrd_student_job_workflow',
        16 => 'path',
        19 => 'field_student_job_minweeklyhours',
        20 => 'field_student_job_maxweeklyhours',
        21 => 'field_student_job_minshifthours',
        22 => 'field_student_job_hours',
      ),
      'hidden' => array(
        8 => 'field_student_job_workstudy',
        17 => 'field_lhrd_job_qdesired',
        18 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_las_supervisor' => 'ds_content',
      'field_lhrd_krns_is_stdn_super' => 'ds_content',
      'field_lhrd_kronos_supervisor' => 'ds_content',
      'field_unit' => 'ds_content',
      'field_las_unit_chartstring' => 'ds_content',
      'group_work_schedule' => 'ds_content',
      'field_las_workstudy' => 'ds_content',
      'field_student_job_workstudy' => 'hidden',
      'field_student_job_classification' => 'ds_content',
      'field_student_job_numtohire' => 'ds_content',
      'field_student_job_duties' => 'ds_content',
      'field_student_job_q_required' => 'ds_content',
      'field_student_job_q_desired' => 'ds_content',
      'field_student_job_notes' => 'ds_content',
      'field_lhrd_student_job_workflow' => 'ds_content',
      'path' => 'ds_content',
      'field_lhrd_job_qdesired' => 'hidden',
      '_add_existing_field' => 'hidden',
      'field_student_job_minweeklyhours' => 'ds_content',
      'field_student_job_maxweeklyhours' => 'ds_content',
      'field_student_job_minshifthours' => 'ds_content',
      'field_student_job_hours' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|job_student|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_student|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_student';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'lhrd_returntostudentjobpage',
        1 => 'flag_publish_job',
        2 => 'group_jobpage_rightcol',
        3 => 'title',
        4 => 'lhrd_jobpage_rightcol',
        5 => 'lhrd_studjobnid_ds',
        6 => 'field_unit',
        7 => 'field_student_job_classification',
        8 => 'field_student_job_workstudy',
        9 => 'lhrd_workschedule_ds',
        10 => 'field_student_job_hours',
        11 => 'field_student_job_minshifthours',
        12 => 'field_student_job_minweeklyhours',
        13 => 'field_student_job_maxweeklyhours',
        14 => 'lhrd_jobdescription_ds',
        15 => 'field_student_job_duties',
        16 => 'field_student_job_q_required',
        17 => 'field_student_job_q_desired',
        18 => 'field_student_job_notes',
      ),
    ),
    'fields' => array(
      'lhrd_returntostudentjobpage' => 'ds_content',
      'flag_publish_job' => 'ds_content',
      'group_jobpage_rightcol' => 'ds_content',
      'title' => 'ds_content',
      'lhrd_jobpage_rightcol' => 'ds_content',
      'lhrd_studjobnid_ds' => 'ds_content',
      'field_unit' => 'ds_content',
      'field_student_job_classification' => 'ds_content',
      'field_student_job_workstudy' => 'ds_content',
      'lhrd_workschedule_ds' => 'ds_content',
      'field_student_job_hours' => 'ds_content',
      'field_student_job_minshifthours' => 'ds_content',
      'field_student_job_minweeklyhours' => 'ds_content',
      'field_student_job_maxweeklyhours' => 'ds_content',
      'lhrd_jobdescription_ds' => 'ds_content',
      'field_student_job_duties' => 'ds_content',
      'field_student_job_q_required' => 'ds_content',
      'field_student_job_q_desired' => 'ds_content',
      'field_student_job_notes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|job_student|full'] = $ds_layout;

  return $export;
}