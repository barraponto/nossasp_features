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
    'weight' => '11',
    'fields' => array(
      '0' => 'field_atuacao',
    ),
  );

  // Exported group: group_contact
  $groups['nossasp_organization-group_contact'] = array(
    'group_type' => 'standard',
    'type_name' => 'nossasp_organization',
    'group_name' => 'group_contact',
    'label' => 'Contato',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
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
    'weight' => '5',
    'fields' => array(
      '0' => 'field_phone',
      '1' => 'field_email',
      '2' => 'field_twitter',
      '3' => 'field_facebook',
      '4' => 'field_website',
    ),
  );

  // Exported group: group_council
  $groups['nossasp_organization-group_council'] = array(
    'group_type' => 'standard',
    'type_name' => 'nossasp_organization',
    'group_name' => 'group_council',
    'label' => 'Conselho Municipal',
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
    'weight' => '16',
    'fields' => array(
      '0' => 'field_council',
      '1' => 'field_gestao',
      '2' => 'field_councilman_pre',
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
    'weight' => '12',
    'fields' => array(
      '0' => 'field_tipo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Conselho Municipal');
  t('Contato');
  t('Tipo de Organização');
  t('Área de Atuação');

  return $groups;
}
