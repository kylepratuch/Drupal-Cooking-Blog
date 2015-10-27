<?php
/**
 * @file
 * cooking_award_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cooking_award_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-awards-field_author'.
  $field_instances['node-awards-field_author'] = array(
    'bundle' => 'awards',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this is a review of the site or books, include an author.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-awards-field_award_pic'.
  $field_instances['node-awards-field_award_pic'] = array(
    'bundle' => 'awards',
    'deleted' => 0,
    'description' => 'Upload a picture of your award.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_award_pic',
    'label' => 'Award Pic',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 7,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '150x150',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-awards-field_link'.
  $field_instances['node-awards-field_link'] = array(
    'bundle' => 'awards',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Include a link to the award/review if it is hosted by another site.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-awards-field_quote'.
  $field_instances['node-awards-field_quote'] = array(
    'bundle' => 'awards',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Include a defining quote from the award text or review.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author');
  t('Award Pic');
  t('If this is a review of the site or books, include an author.');
  t('Include a defining quote from the award text or review.');
  t('Include a link to the award/review if it is hosted by another site.');
  t('Link');
  t('Quote');
  t('Upload a picture of your award.');

  return $field_instances;
}
