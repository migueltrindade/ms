<?php
/**
 * @file
 * feature_destaque.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_destaque_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'destaque';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'destaque';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restaurar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Cabeçalho: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Conteúdo: Imagem */
  $handler->display->display_options['fields']['field_destaque_imagem']['id'] = 'field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem']['table'] = 'field_data_field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem']['field'] = 'field_destaque_imagem';
  /* Sort criterion: Conteúdo: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'destaque' => 'destaque',
  );

  /* Display: bc_site */
  $handler = $view->new_display('block', 'bc_site', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Padrão',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_destaque_imagem' => 0,
    'field_destaque_imagem_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_destaque_imagem_1' => 'field_destaque_imagem_1',
    'field_destaque_imagem' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Link */
  $handler->display->display_options['fields']['field_destaque_link']['id'] = 'field_destaque_link';
  $handler->display->display_options['fields']['field_destaque_link']['table'] = 'field_data_field_destaque_link';
  $handler->display->display_options['fields']['field_destaque_link']['field'] = 'field_destaque_link';
  $handler->display->display_options['fields']['field_destaque_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_destaque_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_destaque_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_destaque_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_destaque_link']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Imagem */
  $handler->display->display_options['fields']['field_destaque_imagem']['id'] = 'field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem']['table'] = 'field_data_field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem']['field'] = 'field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem']['label'] = '';
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['path'] = '[field_destaque_link]';
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destaque_imagem']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_destaque_imagem']['settings'] = array(
    'image_style' => 'destaque_big',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_destaque_imagem']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Imagem */
  $handler->display->display_options['fields']['field_destaque_imagem_1']['id'] = 'field_destaque_imagem_1';
  $handler->display->display_options['fields']['field_destaque_imagem_1']['table'] = 'field_data_field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem_1']['field'] = 'field_destaque_imagem';
  $handler->display->display_options['fields']['field_destaque_imagem_1']['label'] = '';
  $handler->display->display_options['fields']['field_destaque_imagem_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_destaque_imagem_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_destaque_imagem_1']['settings'] = array(
    'image_style' => 'destaque_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_destaque_imagem_1']['field_api_classes'] = 0;

  /* Display: pg_admin */
  $handler = $view->new_display('page', 'pg_admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Destaque';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_destaque_imagem' => 'field_destaque_imagem',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_destaque_imagem' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Cabeçalho: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="form-item"><a href="/node/add/destaque" title="Cadastrar novo item">Cadastrar novo item</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Nenhum registro encontrado.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Conteúdo: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'editar';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'editar';
  /* Campo: Conteúdo: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'apagar';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['text'] = 'apagar';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'destaque' => 'destaque',
  );
  $handler->display->display_options['path'] = 'admin/website/destaque';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Destaque';
  $handler->display->display_options['menu']['description'] = 'Administração dos destaques';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['destaque'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Restaurar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Imagem'),
    t('bc_site'),
    t('Link'),
    t('[field_destaque_link]'),
    t('pg_admin'),
    t('Destaque'),
    t('<div class="form-item"><a href="/node/add/destaque" title="Cadastrar novo item">Cadastrar novo item</a></div>'),
    t('Nenhum registro encontrado.'),
    t('editar'),
    t('apagar'),
  );
  $export['destaque'] = $view;

  return $export;
}
