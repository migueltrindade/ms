<?php
/**
 * @file
 * feature_fotos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_fotos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:fotos
  $menu_links['main-menu:fotos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fotos',
    'router_path' => 'fotos',
    'link_title' => 'Fotos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: management:admin/website/fotos
  $menu_links['management:admin/website/fotos'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/fotos',
    'router_path' => 'admin/website/fotos',
    'link_title' => 'Fotos',
    'options' => array(
      'attributes' => array(
        'title' => 'Administração das fotos',
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
  t('Fotos');


  return $menu_links;
}
