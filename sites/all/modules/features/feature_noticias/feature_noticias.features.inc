<?php
/**
 * @file
 * feature_noticias.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_noticias_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_noticias_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_noticias_node_info() {
  $items = array(
    'noticias' => array(
      'name' => t('Notícias'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar as notícias do site.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
