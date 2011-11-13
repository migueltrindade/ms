<?php
/**
 * @file
 * feature_destaque.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_destaque_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_destaque_image_default_styles() {
  $styles = array();

  // Exported image style: destaque_big
  $styles['destaque_big'] = array(
    'name' => 'destaque_big',
    'effects' => array(
      2 => array(
        'label' => 'Redimensionar',
        'help' => 'Redimencionar alterará as imagens para dimensões específicas. Isto pode causar desproporções por esticar ou encolher as imagens.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '960',
          'height' => '280',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: destaque_thumb
  $styles['destaque_thumb'] = array(
    'name' => 'destaque_thumb',
    'effects' => array(
      1 => array(
        'label' => 'Escala',
        'help' => 'Escalar a imagem manterá suas proporções originais. Se apenas uma das dimensões for dada, a outra será automaticamente calculada.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '100',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_destaque_node_info() {
  $items = array(
    'destaque' => array(
      'name' => t('Destaque'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar as imagens de destaque da home do site.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
