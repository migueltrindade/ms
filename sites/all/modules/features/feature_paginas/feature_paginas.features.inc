<?php
/**
 * @file
 * feature_paginas.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_paginas_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_paginas_node_info() {
  $items = array(
    'pagina' => array(
      'name' => t('Página'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar uma página estática no site.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
