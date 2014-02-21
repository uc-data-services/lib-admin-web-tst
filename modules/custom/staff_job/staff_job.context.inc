<?php
/**
 * @file
 * staff_job.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function staff_job_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lhrd-context-menu-staff';
  $context->description = 'context to display LHRD Staff Menu';
  $context->tag = 'LHRD Menus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'staff' => 'staff',
        'staff/*' => 'staff/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-lhrd-staff-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-lhrd-staff-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sidemenu-purpbook',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Menus');
  t('context to display LHRD Staff Menu');
  $export['lhrd-context-menu-staff'] = $context;

  return $export;
}
