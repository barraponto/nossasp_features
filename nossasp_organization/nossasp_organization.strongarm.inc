<?php

/**
 * Implementation of hook_strongarm().
 */
function nossasp_organization_strongarm() {
  $export = array();

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

  return $export;
}
