<?php
/**
 * @file
 * cooking_tip_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cooking_tip_content_type_node_info() {
  $items = array(
    'tip' => array(
      'name' => t('Tip'),
      'base' => 'node_content',
      'description' => t('Use Tip for quick tips \'n tricks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
