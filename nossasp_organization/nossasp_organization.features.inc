<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function nossasp_organization_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function nossasp_organization_node_info() {
  $items = array(
    'nossasp_council' => array(
      'name' => t('Conselho Municipal'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome'),
      'has_body' => '1',
      'body_label' => t('Descrição'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'nossasp_councilman' => array(
      'name' => t('Conselheiro'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
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

/**
 * Implementation of hook_rules_defaults().
 */
function nossasp_organization_rules_defaults() {
  return array(
    'rules' => array(
      'rules_nossasp_organization_register_redirect' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'nossasp_organization_register_redirect',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'nossasp_organization',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content é Organização',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Conteúdo',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'nossasp_organization' => 'nossasp_organization',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
          '1' => array(
            '#type' => 'condition',
            '#settings' => array(
              'roles' => array(
                '0' => 1,
              ),
              'operation' => 'OR',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#name' => 'rules_condition_user_hasrole',
            '#info' => array(
              'label' => 'User has role(s)',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'Usuário',
                ),
              ),
              'module' => 'User',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Redirecionamento de página',
              'module' => 'System',
              'eval input' => array(
                '0' => 'path',
                '1' => 'query',
                '2' => 'fragment',
              ),
            ),
            '#name' => 'rules_action_drupal_goto',
            '#settings' => array(
              'path' => 'obrigado',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => ':global',
                  ),
                  'query' => array(
                    '0' => ':global',
                  ),
                  'fragment' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_nossasp_organization_new_organization_notification' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'nossasp_organization_new_organization_notification',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'nossasp_organization',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'nossasp_organization' => 'nossasp_organization',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Organização',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Send a mail to all users of a role',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
              ),
            ),
            '#name' => 'rules_action_mail_to_users_of_role',
            '#settings' => array(
              'recipients' => array(
                '0' => 4,
              ),
              'from' => '',
              'subject' => 'Nova Organização registrada',
              'message' => 'A organização [node:title] foi cadastrada e aguarda moderação. Favor visitar [node:node-url], conferir as informações e publicar o conteúdo.',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => ':global',
                  ),
                  'message' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'from' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function nossasp_organization_views_api() {
  return array(
    'api' => '2',
  );
}
