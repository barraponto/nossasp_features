<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function nossasp_organization_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_address
  $groups['nossasp_organization-group_address'] = array(
    'group_type' => 'standard',
    'type_name' => 'nossasp_organization',
    'group_name' => 'group_address',
    'label' => 'Endereço',
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
      '0' => 'field_street',
      '1' => 'field_zip',
    ),
  );

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
        'weight' => '11',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'description' => '',
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
    'weight' => '6',
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
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
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
    'weight' => '7',
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
        'weight' => '16',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
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
    'weight' => '8',
    'fields' => array(
      '0' => 'field_council',
      '1' => 'field_councilman_pre',
      '2' => 'field_gestao',
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
        'weight' => '12',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'description' => '',
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
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_tipo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Conselho Municipal');
  t('Contato');
  t('Endereço');
  t('Tipo de Organização');
  t('Área de Atuação');

  return $groups;
}
