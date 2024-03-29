<?php
/**
 * @file
 * feature_paginas.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function feature_paginas_field_default_fields() {
  $fields = array();

  // Exported field: 'node-pagina-body'
  $fields['node-pagina-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'pagina',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => -4,
      ),
    ),
  );

  // Exported field: 'node-pagina-meta_description'
  $fields['node-pagina-meta_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'meta_description',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'metatags_quick',
      'settings' => array(
        'max_length' => '160',
        'meta_name' => 'description',
      ),
      'translatable' => '0',
      'type' => 'metatags_quick',
    ),
    'field_instance' => array(
      'bundle' => 'pagina',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'metatags_quick',
          'settings' => array(),
          'type' => 'metatags_quick_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'meta_description',
      'formatter' => 'metatags_quick_default',
      'label' => '(Meta)Descrição',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-pagina-meta_keywords'
  $fields['node-pagina-meta_keywords'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'meta_keywords',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'metatags_quick',
      'settings' => array(
        'max_length' => '160',
        'meta_name' => 'keywords',
      ),
      'translatable' => '0',
      'type' => 'metatags_quick',
    ),
    'field_instance' => array(
      'bundle' => 'pagina',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'metatags_quick',
          'settings' => array(),
          'type' => 'metatags_quick_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'meta_keywords',
      'formatter' => 'metatags_quick_default',
      'label' => '(Meta)Palavras chave',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_textfield',
        'weight' => 0,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(Meta)Descrição');
  t('(Meta)Palavras chave');
  t('Body');

  return $fields;
}
