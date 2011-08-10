<?php

/**
 * Implementation of hook_user_default_roles().
 */
function nossasp_controller_user_default_roles() {
  $roles = array();

  // Exported role: manager
  $roles['manager'] = array(
    'name' => 'manager',
  );

  return $roles;
}
