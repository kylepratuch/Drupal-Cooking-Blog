<?php
/**
 * @file
 * recipes_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function recipes_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_recipes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Recipes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Final Picture */
  $handler->display->display_options['fields']['field_final_picture']['id'] = 'field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['table'] = 'field_data_field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['field'] = 'field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['label'] = '';
  $handler->display->display_options['fields']['field_final_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_final_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_final_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-recipes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Recipes';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['all_recipes'] = $view;

  $view = new view();
  $view->name = 'page_egg_recipes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page: Search Recipes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Page: Search Recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Final Picture */
  $handler->display->display_options['fields']['field_final_picture']['id'] = 'field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['table'] = 'field_data_field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['field'] = 'field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['label'] = 'Image';
  $handler->display->display_options['fields']['field_final_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_final_picture']['empty'] = 'Ain\'t no eggy pics';
  $handler->display->display_options['fields']['field_final_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_final_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['text'] = 'New description is [field_description] dingus';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['empty'] = 'No egg recipes sorry';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_recipe_tags']['id'] = 'field_recipe_tags';
  $handler->display->display_options['fields']['field_recipe_tags']['table'] = 'field_data_field_recipe_tags';
  $handler->display->display_options['fields']['field_recipe_tags']['field'] = 'field_recipe_tags';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Tags (field_recipe_tags) */
  $handler->display->display_options['filters']['field_recipe_tags_tid']['id'] = 'field_recipe_tags_tid';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['table'] = 'field_data_field_recipe_tags';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['field'] = 'field_recipe_tags_tid';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['operator_id'] = 'field_recipe_tags_tid_op';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['label'] = 'Search by:';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['operator'] = 'field_recipe_tags_tid_op';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['identifier'] = 'field_recipe_tags_tid';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_recipe_tags_tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'page-egg-recipes';
  $export['page_egg_recipes'] = $view;

  $view = new view();
  $view->name = 'page_recipes_by_month';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page: Recipes by Month';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Page: Search Recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_final_picture' => 'field_final_picture',
    'field_description' => 'field_description',
    'field_recipe_tags' => 'field_recipe_tags',
    'created_1' => 'created_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_final_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recipe_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Final Picture */
  $handler->display->display_options['fields']['field_final_picture']['id'] = 'field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['table'] = 'field_data_field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['field'] = 'field_final_picture';
  $handler->display->display_options['fields']['field_final_picture']['label'] = 'Image';
  $handler->display->display_options['fields']['field_final_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_final_picture']['empty'] = 'Ain\'t no eggy pics';
  $handler->display->display_options['fields']['field_final_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_final_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['text'] = 'New description is [field_description] dingus';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['empty'] = 'No egg recipes sorry';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_recipe_tags']['id'] = 'field_recipe_tags';
  $handler->display->display_options['fields']['field_recipe_tags']['table'] = 'field_data_field_recipe_tags';
  $handler->display->display_options['fields']['field_recipe_tags']['field'] = 'field_recipe_tags';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'F Y';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Tags (field_recipe_tags) */
  $handler->display->display_options['filters']['field_recipe_tags_tid']['id'] = 'field_recipe_tags_tid';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['table'] = 'field_data_field_recipe_tags';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['field'] = 'field_recipe_tags_tid';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['operator_id'] = 'field_recipe_tags_tid_op';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['label'] = 'Search by:';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['operator'] = 'field_recipe_tags_tid_op';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['identifier'] = 'field_recipe_tags_tid';
  $handler->display->display_options['filters']['field_recipe_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_recipe_tags_tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'page-egg-recipes';
  $export['page_recipes_by_month'] = $view;

  return $export;
}
