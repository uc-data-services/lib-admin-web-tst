<?php
/**
 * @file
 * academic_job.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function academic_job_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lhrd-context-menu-academic';
  $context->description = 'context to display LHRD Academic Menu';
  $context->tag = 'LHRD Menus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'academic' => 'academic',
        'academic/*' => 'academic/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-lhrd-academic-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-lhrd-academic-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sidemenu-redbook',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Menus');
  t('context to display LHRD Academic Menu');
  $export['lhrd-context-menu-academic'] = $context;

  return $export;
}
