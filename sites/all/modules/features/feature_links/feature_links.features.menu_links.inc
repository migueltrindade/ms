<?php
/**
 * @file
 * feature_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/website/links
  $menu_links['management:admin/website/links'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/links',
    'router_path' => 'admin/website/links',
    'link_title' => 'Links',
    'options' => array(
      'attributes' => array(
        'title' => 'Administração dos links',
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
  t('Links');


  return $menu_links;
}
