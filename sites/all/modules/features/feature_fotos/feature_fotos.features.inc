<?php
/**
 * @file
 * feature_fotos.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_fotos_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_fotos_image_default_styles() {
  $styles = array();

  // Exported image style: fotos_big
  $styles['fotos_big'] = array(
    'name' => 'fotos_big',
    'effects' => array(
      10 => array(
        'label' => 'Escala',
        'help' => 'Escalar a imagem manterá suas proporções originais. Se apenas uma das dimensões for dada, a outra será automaticamente calculada.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '800',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: fotos_thumb
  $styles['fotos_thumb'] = array(
    'name' => 'fotos_thumb',
    'effects' => array(
      9 => array(
        'label' => 'Redimensionar',
        'help' => 'Redimencionar alterará as imagens para dimensões específicas. Isto pode causar desproporções por esticar ou encolher as imagens.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '150',
          'height' => '120',
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
function feature_fotos_node_info() {
  $items = array(
    'fotos' => array(
      'name' => t('Fotos'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar galeria de fotos no site.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
