<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nossasp_controller_user_default_permissions() {
  $permissions = array();

  // Exported permission: access admin theme
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access better messages
  $permissions['access better messages'] = array(
    'name' => 'access better messages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
