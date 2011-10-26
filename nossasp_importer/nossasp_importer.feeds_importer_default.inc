<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function nossasp_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'map_entitie_importer';
  $feeds_importer->config = array(
    'name' => 'Map entitie importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'nossasp_organization',
        'input_format' => '0',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'field_tipo',
            'target' => 'taxonomy:features_tipo',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'field_address',
            'target' => 'field_address',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_atuacao',
            'target' => 'taxonomy:features_atuacao',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'contact_field_email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'contact_field_website',
            'target' => 'field_website:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'address_field_street',
            'target' => 'field_street',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'address_field_zip',
            'target' => 'field_zip',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'md5',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'author' => '5',
        'authorize' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['map_entitie_importer'] = $feeds_importer;

  return $export;
}
