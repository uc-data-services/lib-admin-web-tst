<?php
/**
 * @file
 * student_job.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function student_job_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lhrd-context-menu-student';
  $context->description = 'context to display LHRD Student Menu';
  $context->tag = 'LHRD Menus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'student' => 'student',
        'student/*' => 'student/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-lhrd-students-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-lhrd-students-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sidemenu-tealbook',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Menus');
  t('context to display LHRD Student Menu');
  $export['lhrd-context-menu-student'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lhrd_student_job_page';
  $context->description = 'a context for the student job page';
  $context->tag = 'student job';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'job_student' => 'job_student',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-lhrd-jobseekers-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-lhrd-jobseekers-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('a context for the student job page');
  t('student job');
  $export['lhrd_student_job_page'] = $context;

  return $export;
}
