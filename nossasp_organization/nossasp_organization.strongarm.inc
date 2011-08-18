<?php

/**
 * Implementation of hook_strongarm().
 */
function nossasp_organization_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_nossasp_organization';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '3',
    'path_redirect' => '4',
  );
  $export['content_extra_weights_nossasp_organization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nossasp_organization';
  $strongarm->value = '0';
  $export['language_content_type_nossasp_organization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nossasp_organization';
  $strongarm->value = array();
  $export['node_options_nossasp_organization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_nossasp_organization_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Nome',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_address' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Endereço',
      'hidden' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_facebook' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Facebook',
      'hidden' => 0,
    ),
    'field_twitter' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Twitter',
      'hidden' => 0,
    ),
    'field_phone' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Telefone',
      'hidden' => 0,
    ),
    'field_website' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Site ou Blog',
      'hidden' => 0,
    ),
    'field_email' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Email',
      'hidden' => 0,
    ),
    'group_atuacao' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Área de Atuação',
      'hidden' => 0,
      'collapsed' => 0,
    ),
    'group_tipo' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Tipo de Organização',
      'collapsed' => 0,
    ),
    'group_gestao' => array(
      'region' => 'main',
      'weight' => '2.9',
      'has_required' => FALSE,
      'title' => 'Gestão',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_nossasp_organization_default'] = $strongarm;

  return $export;
}
