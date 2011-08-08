<?php

/**
 * Implementation of hook_strongarm().
 */
function nossasp_mantainer_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_nossasp_mantainer';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => 'full',
    'edit_link' => 1,
    'edit_tab' => 'top',
    'add_link' => 1,
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
