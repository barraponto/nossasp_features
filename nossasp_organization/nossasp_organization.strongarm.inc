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
    'body_field' => '0',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'menu' => '-2',
    'path' => '30',
    'path_redirect' => '30',
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
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Nome',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '0.008',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '-2',
      'has_required' => FALSE,
      'title' => 'Configurações do menu',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Informações da revisão',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'Configurações de endereço',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '25',
      'has_required' => FALSE,
      'title' => 'Opções de publicação',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Autoria',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_address' => array(
      'region' => 'main',
      'weight' => '31',
      'has_required' => FALSE,
      'title' => 'Endereço',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_nossasp_organization_default'] = $strongarm;

  return $export;
}
