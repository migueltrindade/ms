<?php
/**
 * @file
 * feature_links.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_links_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_links_node_info() {
  $items = array(
    'links' => array(
      'name' => t('Links'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar uma lista de links utéis no site.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
