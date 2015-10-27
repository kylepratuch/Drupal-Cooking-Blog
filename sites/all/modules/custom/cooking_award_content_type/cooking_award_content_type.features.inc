<?php
/**
 * @file
 * cooking_award_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cooking_award_content_type_node_info() {
  $items = array(
    'awards' => array(
      'name' => t('Awards'),
      'base' => 'node_content',
      'description' => t('Awards or reviews for my books and recipes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
