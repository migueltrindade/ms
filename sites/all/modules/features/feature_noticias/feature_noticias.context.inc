<?php
/**
 * @file
 * feature_noticias.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_noticias_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'noticias';
  $context->description = '';
  $context->tag = 'noticias';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'noticias/*' => 'noticias/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-noticias-block_2' => array(
          'module' => 'views',
          'delta' => 'noticias-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'noticias',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('noticias');
  $export['noticias'] = $context;

  return $export;
}
