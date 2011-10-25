<?php

/**
 * Implementation of hook_content_default_fields().
 */
function nossasp_mantainer_content_default_fields() {
  $fields = array();

  // Exported field: field_mantainer_phone
  $fields['nossasp_mantainer-field_mantainer_phone'] = array(
    'field_name' => 'field_mantainer_phone',
    'type_name' => 'nossasp_mantainer',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'br_phone',
    'required' => '0',
    'multiple' => '0',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_mantainer_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Telefone',
      'weight' => '31',
      'description' => '',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Telefone');

  return $fields;
}
