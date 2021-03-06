<?php
/**
 * @file
 * lhrd_student_job_display_suite.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function lhrd_student_job_display_suite_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_student|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_student';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'lhrd_jobpage_rightcol' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:11:"panels_mini";s:7:"subtype";s:31:"lhrd_howtoapply_student_jobpage";}',
        'load_terms' => 0,
      ),
    ),
    'lhrd_returntostudentjobpage' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '9',
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
      'value' => '<p><a href="job-seekers/student-jobs">Return to the student library job postings</a></p>
',
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
        1 => 'field_las_jobtitle',
        2 => 'field_student_job_classification',
        3 => 'field_las_supervisor',
        4 => 'field_lhrd_krns_is_stdn_super',
        5 => 'field_lhrd_kronos_supervisor',
        6 => 'field_unit',
        7 => 'field_las_location_placeholder',
        8 => 'field_las_workstudy',
        9 => 'field_las_workstudy_whynot',
        10 => 'field_las_position_number',
        11 => 'field_las_add_new_chartstring',
        12 => 'field_las_unit_chartstring',
        13 => 'field_las_new_chrtstrg',
        14 => 'group_work_schedule',
        15 => 'field_student_job_numtohire',
        16 => 'field_student_job_duties',
        17 => 'field_student_job_q_required',
        18 => 'field_student_job_q_desired',
        19 => 'field_student_job_notes',
        20 => 'path',
        21 => 'field_student_job_minweeklyhours',
        22 => 'field_student_job_maxweeklyhours',
        24 => 'field_student_job_minshifthours',
        25 => 'field_student_job_hours',
      ),
      'hidden' => array(
        23 => 'flag',
        26 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_las_jobtitle' => 'ds_content',
      'field_student_job_classification' => 'ds_content',
      'field_las_supervisor' => 'ds_content',
      'field_lhrd_krns_is_stdn_super' => 'ds_content',
      'field_lhrd_kronos_supervisor' => 'ds_content',
      'field_unit' => 'ds_content',
      'field_las_location_placeholder' => 'ds_content',
      'field_las_workstudy' => 'ds_content',
      'field_las_workstudy_whynot' => 'ds_content',
      'field_las_position_number' => 'ds_content',
      'field_las_add_new_chartstring' => 'ds_content',
      'field_las_unit_chartstring' => 'ds_content',
      'field_las_new_chrtstrg' => 'ds_content',
      'group_work_schedule' => 'ds_content',
      'field_student_job_numtohire' => 'ds_content',
      'field_student_job_duties' => 'ds_content',
      'field_student_job_q_required' => 'ds_content',
      'field_student_job_q_desired' => 'ds_content',
      'field_student_job_notes' => 'ds_content',
      'path' => 'ds_content',
      'field_student_job_minweeklyhours' => 'ds_content',
      'field_student_job_maxweeklyhours' => 'ds_content',
      'flag' => 'hidden',
      'field_student_job_minshifthours' => 'ds_content',
      'field_student_job_hours' => 'ds_content',
      '_add_existing_field' => 'hidden',
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
        1 => 'group_jobpage_rightcol',
        2 => 'flag_publish_job',
        3 => 'title',
        4 => 'lhrd_jobpage_rightcol',
        5 => 'field_unit',
        6 => 'field_las_supervisor',
        7 => 'field_student_job_classification',
        8 => 'field_las_workstudy',
        9 => 'group_jobhours',
        10 => 'group_jobinfo',
        11 => 'field_student_job_minweeklyhours',
        12 => 'comments',
        13 => 'field_student_job_maxweeklyhours',
        14 => 'field_student_job_minshifthours',
        15 => 'field_student_job_hours',
        16 => 'field_student_job_duties',
        17 => 'field_student_job_q_required',
        18 => 'field_student_job_q_desired',
        19 => 'field_student_job_notes',
      ),
    ),
    'fields' => array(
      'lhrd_returntostudentjobpage' => 'ds_content',
      'group_jobpage_rightcol' => 'ds_content',
      'flag_publish_job' => 'ds_content',
      'title' => 'ds_content',
      'lhrd_jobpage_rightcol' => 'ds_content',
      'field_unit' => 'ds_content',
      'field_las_supervisor' => 'ds_content',
      'field_student_job_classification' => 'ds_content',
      'field_las_workstudy' => 'ds_content',
      'group_jobhours' => 'ds_content',
      'group_jobinfo' => 'ds_content',
      'field_student_job_minweeklyhours' => 'ds_content',
      'comments' => 'ds_content',
      'field_student_job_maxweeklyhours' => 'ds_content',
      'field_student_job_minshifthours' => 'ds_content',
      'field_student_job_hours' => 'ds_content',
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
