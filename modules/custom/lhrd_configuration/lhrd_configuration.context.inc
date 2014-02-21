<?php
/**
 * @file
 * lhrd_configuration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lhrd_configuration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lhrd-context-menu-benefits';
  $context->description = 'context to display LHRD Benefits Menu';
  $context->tag = 'LHRD Menus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'benefits' => 'benefits',
        'benefits*' => 'benefits*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-lhrd-benefits-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-lhrd-benefits-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sidemenu-bluebook',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Menus');
  t('context to display LHRD Benefits Menu');
  $export['lhrd-context-menu-benefits'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lhrd-context-menu-jobseekers';
  $context->description = 'context to display LHRD JobSeekers Menu';
  $context->tag = 'LHRD Menus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'job-seekers' => 'job-seekers',
        'job-seekers/*' => 'job-seekers/*',
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
    'theme_html' => array(
      'class' => 'sidemenu-goldbook',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('LHRD Menus');
  t('context to display LHRD JobSeekers Menu');
  $export['lhrd-context-menu-jobseekers'] = $context;

  return $export;
}
