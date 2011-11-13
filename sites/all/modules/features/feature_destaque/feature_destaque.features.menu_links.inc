<?php
/**
 * @file
 * feature_destaque.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_destaque_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/website/destaque
  $menu_links['management:admin/website/destaque'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/destaque',
    'router_path' => 'admin/website/destaque',
    'link_title' => 'Destaque',
    'options' => array(
      'attributes' => array(
        'title' => 'Destaque',
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
  t('Destaque');


  return $menu_links;
}
