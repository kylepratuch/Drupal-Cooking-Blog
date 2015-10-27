<?php
/**
 * @file
 * awards_and_reviews.features.inc
 */

/**
 * Implements hook_node_info().
 */
function awards_and_reviews_node_info() {
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
