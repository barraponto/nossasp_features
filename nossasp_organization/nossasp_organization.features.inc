<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function nossasp_organization_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function nossasp_organization_node_info() {
  $items = array(
    'nossasp_organization' => array(
      'name' => t('Organização'),
      'module' => 'features',
      'description' => t('Organização colaborativa com todos os detalhes necessários para participação do cidadão.'),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'has_body' => '1',
      'body_label' => t('Descrição'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
