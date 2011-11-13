<?php
/**
 * @file
 * feature_noticias.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_noticias_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:noticias
  $menu_links['main-menu:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Notícias',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: management:admin/website/noticias
  $menu_links['management:admin/website/noticias'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/noticias',
    'router_path' => 'admin/website/noticias',
    'link_title' => 'Notícias',
    'options' => array(
      'attributes' => array(
        'title' => 'Notícias',
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
  t('Notícias');


  return $menu_links;
}
