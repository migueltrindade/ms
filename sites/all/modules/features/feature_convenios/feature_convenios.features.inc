<?php
/**
 * @file
 * feature_convenios.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_convenios_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_convenios_node_info() {
  $items = array(
    'convenios' => array(
      'name' => t('Convênios'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar a lista de convênios do sindicato.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
