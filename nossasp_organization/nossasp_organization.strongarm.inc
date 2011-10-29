<?php

/**
 * Implementation of hook_strongarm().
 */
function nossasp_organization_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_nossasp_council';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-4',
    'taxonomy' => '-3',
    'path' => '4',
    'path_redirect' => '3',
    'primary_term' => '-1',
  );
  $export['content_extra_weights_nossasp_council'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_nossasp_councilman';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'menu' => '0',
    'path' => '5',
    'path_redirect' => '6',
    'primary_term' => '1',
  );
  $export['content_extra_weights_nossasp_councilman'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_nossasp_organization';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '3',
    'author' => '4',
    'options' => '5',
    'menu' => '-2',
    'taxonomy' => '-3',
    'path' => '6',
    'path_redirect' => '7',
    'primary_term' => '1',
  );
  $export['content_extra_weights_nossasp_organization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nossasp_council';
  $strongarm->value = '0';
  $export['language_content_type_nossasp_council'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nossasp_councilman';
  $strongarm->value = '0';
  $export['language_content_type_nossasp_councilman'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nossasp_organization';
  $strongarm->value = '0';
  $export['language_content_type_nossasp_organization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nossasp_council';
  $strongarm->value = array();
  $export['node_options_nossasp_council'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nossasp_councilman';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_nossasp_councilman'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nossasp_organization';
  $strongarm->value = array();
  $export['node_options_nossasp_organization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_nossasp_council_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Nome',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'footer',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Configurações do menu',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'footer',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Informações da revisão',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'footer',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Configurações de endereço',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Opções de publicação',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'footer',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Autoria',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '4',
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
    'group_council_atuacao' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Área de Atuação',
      'hidden' => 0,
      'collapsed' => 0,
    ),
    'group_council_contato' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Contato',
      'hidden' => 0,
      'collapsed' => 0,
    ),
    'group_council_address' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Endereço',
      'hidden' => 0,
      'collapsed' => 0,
    ),
    'primaryterm' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Primary Term',
      'hidden' => 0,
    ),
    'field_councilman_ref' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Conselheiros',
      'hidden' => 0,
    ),
    'group_council_type' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Tipo de Organização',
      'collapsed' => 1,
    ),
  );
  $export['nodeformscols_field_placements_nossasp_council_default'] = $strongarm;

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
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'footer',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'footer',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'footer',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'footer',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'right',
      'weight' => '7',
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
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
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
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Tipo de Organização',
      'collapsed' => 0,
    ),
    'group_contact' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Contato',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'primaryterm' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Primary Term',
      'hidden' => 0,
    ),
    'group_address' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Endereço',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_nossasp_organization_default'] = $strongarm;

  return $export;
}
