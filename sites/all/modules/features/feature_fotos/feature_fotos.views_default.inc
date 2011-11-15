<?php
/**
 * @file
 * feature_fotos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_fotos_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'fotos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'fotos';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fotos';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restaurar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Cabeçalho: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
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
  /* Campo: Conteúdo: Fotos */
  $handler->display->display_options['fields']['field_fotos_fotos']['id'] = 'field_fotos_fotos';
  $handler->display->display_options['fields']['field_fotos_fotos']['table'] = 'field_data_field_fotos_fotos';
  $handler->display->display_options['fields']['field_fotos_fotos']['field'] = 'field_fotos_fotos';
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
    'fotos' => 'fotos',
  );

  /* Display: pg_site */
  $handler = $view->new_display('page', 'pg_site', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Fotos */
  $handler->display->display_options['fields']['field_fotos_fotos']['id'] = 'field_fotos_fotos';
  $handler->display->display_options['fields']['field_fotos_fotos']['table'] = 'field_data_field_fotos_fotos';
  $handler->display->display_options['fields']['field_fotos_fotos']['field'] = 'field_fotos_fotos';
  $handler->display->display_options['fields']['field_fotos_fotos']['label'] = '';
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotos_fotos']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fotos_fotos']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos_fotos']['settings'] = array(
    'image_style' => 'fotos_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_fotos_fotos']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_fotos_fotos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_fotos_fotos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fotos_fotos']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_fotos_fotos']['field_api_classes'] = 0;
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
  /* Campo: Conteúdo: Descrição */
  $handler->display->display_options['fields']['field_fotos_descricao']['id'] = 'field_fotos_descricao';
  $handler->display->display_options['fields']['field_fotos_descricao']['table'] = 'field_data_field_fotos_descricao';
  $handler->display->display_options['fields']['field_fotos_descricao']['field'] = 'field_fotos_descricao';
  $handler->display->display_options['fields']['field_fotos_descricao']['label'] = '';
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_fotos_descricao']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotos_descricao']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fotos_descricao']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fotos_descricao']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Veja as fotos';
  $handler->display->display_options['path'] = 'fotos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Fotos';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: pg_admin */
  $handler = $view->new_display('page', 'pg_admin', 'page_1');
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
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_node' => array(
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
  $handler->display->display_options['header']['area']['content'] = '<div class="form-item form-type-textfield form-item-name"><a href="/node/add/fotos" title="Cadastrar novo item">Cadastrar novo item</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
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
    'fotos' => 'fotos',
  );
  $handler->display->display_options['path'] = 'admin/website/fotos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Fotos';
  $handler->display->display_options['menu']['description'] = 'Administração das fotos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['fotos'] = array(
    t('Master'),
    t('Fotos'),
    t('more'),
    t('Apply'),
    t('Restaurar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('pg_site'),
    t('Veja as fotos'),
    t('pg_admin'),
    t('<div class="form-item form-type-textfield form-item-name"><a href="/node/add/fotos" title="Cadastrar novo item">Cadastrar novo item</a></div>'),
    t('Título'),
    t('editar'),
    t('apagar'),
  );
  $export['fotos'] = $view;

  return $export;
}
