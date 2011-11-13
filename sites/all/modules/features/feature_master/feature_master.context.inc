<?php
/**
 * @file
 * feature_master.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_master_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-destaque-block' => array(
          'module' => 'views',
          'delta' => 'destaque-block',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'simple_tweaks-instituicao' => array(
          'module' => 'simple_tweaks',
          'delta' => 'instituicao',
          'region' => 'front_box_left',
          'weight' => '-10',
        ),
        'simple_tweaks-associese' => array(
          'module' => 'simple_tweaks',
          'delta' => 'associese',
          'region' => 'front_box_center',
          'weight' => '-10',
        ),
        'simple_tweaks-convenios' => array(
          'module' => 'simple_tweaks',
          'delta' => 'convenios',
          'region' => 'front_box_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('frontpage');
  $export['frontpage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-links-block' => array(
          'module' => 'views',
          'delta' => 'links-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'simple_tweaks-copyright' => array(
          'module' => 'simple_tweaks',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'simple_tweaks-telefone' => array(
          'module' => 'simple_tweaks',
          'delta' => 'telefone',
          'region' => 'header_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['sitewide'] = $context;

  return $export;
}
