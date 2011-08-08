<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function nossasp_mantainer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function nossasp_mantainer_node_info() {
  $items = array(
    'nossasp_mantainer' => array(
      'name' => t('Mantenedor'),
      'module' => 'features',
      'description' => t('Perfil dos mantenedores, responsáveis por informar e atualizar os dados das organizações que representam.'),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
