<?php
/**
 * @file
 * feature_convenios.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_convenios_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:convenios
  $menu_links['main-menu:convenios'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'convenios',
    'router_path' => 'convenios',
    'link_title' => 'Convênios',
    'options' => array(
      'attributes' => array(
        'title' => 'Convênios',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: management:admin/website/convenios
  $menu_links['management:admin/website/convenios'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/convenios',
    'router_path' => 'admin/website/convenios',
    'link_title' => 'Convênios',
    'options' => array(
      'attributes' => array(
        'title' => 'Convênios',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/website',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Convênios');


  return $menu_links;
}
