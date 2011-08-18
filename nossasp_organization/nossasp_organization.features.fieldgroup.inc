<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function nossasp_organization_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_atuacao
  $groups['nossasp_organization-group_atuacao'] = array(
    'group_type' => 'standard',
    'type_name' => 'nossasp_organization',
    'group_name' => 'group_atuacao',
    'label' => 'Área de Atuação',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '13',
    'fields' => array(
      '0' => 'field_atuacao',
    ),
  );

  // Exported group: group_gestao
  $groups['nossasp_organization-group_gestao'] = array(
    'group_type' => 'standard',
    'type_name' => 'nossasp_organization',
    'group_name' => 'group_gestao',
    'label' => 'Gestão',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '18',
    'fields' => array(
      '0' => 'field_gestao',
    ),
  );

  // Exported group: group_tipo
  $groups['nossasp_organization-group_tipo'] = array(
    'group_type' => 'standard',
    'type_name' => 'nossasp_organization',
    'group_name' => 'group_tipo',
    'label' => 'Tipo de Organização',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '15',
    'fields' => array(
      '0' => 'field_tipo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gestão');
  t('Tipo de Organização');
  t('Área de Atuação');

  return $groups;
}
