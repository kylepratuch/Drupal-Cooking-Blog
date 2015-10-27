<?php
/**
 * @file
 * cooking_recipe_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cooking_recipe_content_type_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Create a recipe.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
