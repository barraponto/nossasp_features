<?php

/**
 * Implementation of hook_strongarm().
 */
function nossasp_mantainer_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_nossasp_mantainer';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'menu' => '-2',
    'path' => '30',
    'path_redirect' => '30',
    'primary_term' => '0',
  );
  $export['content_extra_weights_nossasp_mantainer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_nossasp_mantainer';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => '0',
    'edit_link' => 0,
    'edit_tab' => '0',
    'add_link' => 0,
    'registration_use' => 1,
    'admin_user_create_use' => 1,
    'registration_hide' => array(
      0 => 'other',
    ),
  );
  $export['content_profile_nossasp_mantainer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_nossasp_mantainer';
  $strongarm->value = 1;
  $export['content_profile_use_nossasp_mantainer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nossasp_mantainer';
  $strongarm->value = '0';
  $export['language_content_type_nossasp_mantainer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nossasp_mantainer';
  $strongarm->value = array();
  $export['node_options_nossasp_mantainer'] = $strongarm;

  return $export;
}
