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
 * Implements hook_image_default_styles().
 */
function feature_convenios_image_default_styles() {
  $styles = array();

  // Exported image style: convenios_logotipo
  $styles['convenios_logotipo'] = array(
    'name' => 'convenios_logotipo',
    'effects' => array(
      6 => array(
        'label' => 'Aspect switcher',
        'help' => 'Use different effects depending on whether the image is landscape of portrait shaped. This re-uses other preset definitions, and just chooses between them based on the rule.',
        'effect callback' => 'canvasactions_aspect_image',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'convenios_logotipo_portrait',
          'landscape' => 'convenios_logotipo_landscape',
          'ratio_adjustment' => '1',
        ),
        'weight' => '-10',
      ),
      7 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_image',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => 'FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '150',
            'height' => '100',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => '-9',
      ),
      8 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_image',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => 'f8f8f8',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '1px',
            'rightdiff' => '1px',
            'topdiff' => '1px',
            'bottomdiff' => '1px',
          ),
        ),
        'weight' => '3',
      ),
    ),
  );

  // Exported image style: convenios_logotipo_landscape
  $styles['convenios_logotipo_landscape'] = array(
    'name' => 'convenios_logotipo_landscape',
    'effects' => array(
      5 => array(
        'label' => 'Escala',
        'help' => 'Escalar a imagem manterá suas proporções originais. Se apenas uma das dimensões for dada, a outra será automaticamente calculada.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '140',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: convenios_logotipo_portrait
  $styles['convenios_logotipo_portrait'] = array(
    'name' => 'convenios_logotipo_portrait',
    'effects' => array(
      4 => array(
        'label' => 'Escala',
        'help' => 'Escalar a imagem manterá suas proporções originais. Se apenas uma das dimensões for dada, a outra será automaticamente calculada.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '90',
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
