<?php
/**
 * @file
 * zerolitter_map_page.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function zerolitter_map_page_field_default_fields() {
  $fields = array();

  // Exported field: 'node-external_page-body'.
  $fields['node-external_page-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'external_page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-external_page-field_iframe'.
  $fields['node-external_page-field_iframe'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_iframe',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'iframe',
      'settings' => array(
        'class' => 'field-iframe',
        'frameborder' => '0',
        'scrolling' => 'auto',
        'tokensupport' => '0',
        'transparency' => '0',
      ),
      'translatable' => '0',
      'type' => 'iframe',
    ),
    'field_instance' => array(
      'bundle' => 'external_page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'iframe',
          'settings' => array(),
          'type' => 'iframe_formatter_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_iframe',
      'label' => 'iframe',
      'required' => 0,
      'settings' => array(
        'class' => 'field-iframe-instance',
        'expose_class' => 1,
        'frameborder' => '0',
        'height' => '800',
        'scrolling' => 'auto',
        'tokensupport' => '0',
        'transparency' => '0',
        'user_register_form' => FALSE,
        'width' => '100%',
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'iframe',
        'settings' => array(
          'size' => 255,
        ),
        'type' => 'iframe_widget_urlwidthheight',
        'weight' => '32',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('iframe');

  return $fields;
}
