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
 * Implementation of hook_rules_defaults().
 */
function nossasp_mantainer_rules_defaults() {
  return array(
    'rules' => array(
      'rules_nossasp_mantainer_new_mantainer_notification' => array(
        '#type' => 'rule',
        '#set' => 'event_user_insert',
        '#label' => 'nossasp_mantainer_new_mantainer_notification',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'nossasp_mantainer',
        ),
        '#status' => 'default',
        '#conditions' => array(),
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
              'subject' => 'Novo Usuário',
              'message' => 'Um novo usuário se registrou no projeto Mapa das Organizações Participativas da Nossa São Paulo.
Por favor, revise os usuários que aguardam moderação no endereço [:global:site-url]/admin/nossasp/users',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => ':global',
                  ),
                  'message' => array(
                    '0' => ':global',
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
function nossasp_mantainer_views_api() {
  return array(
    'api' => '2',
  );
}
