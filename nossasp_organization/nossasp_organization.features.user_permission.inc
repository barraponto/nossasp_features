<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function nossasp_organization_user_default_permissions() {
  $permissions = array();

  // Exported permission: create nossasp_council content
  $permissions['create nossasp_council content'] = array(
    'name' => 'create nossasp_council content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create nossasp_councilman content
  $permissions['create nossasp_councilman content'] = array(
    'name' => 'create nossasp_councilman content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create nossasp_organization content
  $permissions['create nossasp_organization content'] = array(
    'name' => 'create nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: delete any nossasp_council content
  $permissions['delete any nossasp_council content'] = array(
    'name' => 'delete any nossasp_council content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any nossasp_councilman content
  $permissions['delete any nossasp_councilman content'] = array(
    'name' => 'delete any nossasp_councilman content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any nossasp_organization content
  $permissions['delete any nossasp_organization content'] = array(
    'name' => 'delete any nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own nossasp_council content
  $permissions['delete own nossasp_council content'] = array(
    'name' => 'delete own nossasp_council content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own nossasp_councilman content
  $permissions['delete own nossasp_councilman content'] = array(
    'name' => 'delete own nossasp_councilman content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own nossasp_organization content
  $permissions['delete own nossasp_organization content'] = array(
    'name' => 'delete own nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any nossasp_council content
  $permissions['edit any nossasp_council content'] = array(
    'name' => 'edit any nossasp_council content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any nossasp_councilman content
  $permissions['edit any nossasp_councilman content'] = array(
    'name' => 'edit any nossasp_councilman content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any nossasp_organization content
  $permissions['edit any nossasp_organization content'] = array(
    'name' => 'edit any nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_address
  $permissions['edit field_address'] = array(
    'name' => 'edit field_address',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_atuacao
  $permissions['edit field_atuacao'] = array(
    'name' => 'edit field_atuacao',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_council_ref
  $permissions['edit field_council_ref'] = array(
    'name' => 'edit field_council_ref',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_councilman_email
  $permissions['edit field_councilman_email'] = array(
    'name' => 'edit field_councilman_email',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_councilman_phone
  $permissions['edit field_councilman_phone'] = array(
    'name' => 'edit field_councilman_phone',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_councilman_ref
  $permissions['edit field_councilman_ref'] = array(
    'name' => 'edit field_councilman_ref',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_councilman_title
  $permissions['edit field_councilman_title'] = array(
    'name' => 'edit field_councilman_title',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_email
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_facebook
  $permissions['edit field_facebook'] = array(
    'name' => 'edit field_facebook',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_phone_text
  $permissions['edit field_phone_text'] = array(
    'name' => 'edit field_phone_text',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: edit field_street
  $permissions['edit field_street'] = array(
    'name' => 'edit field_street',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_tipo
  $permissions['edit field_tipo'] = array(
    'name' => 'edit field_tipo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_twitter
  $permissions['edit field_twitter'] = array(
    'name' => 'edit field_twitter',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_website
  $permissions['edit field_website'] = array(
    'name' => 'edit field_website',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_zip
  $permissions['edit field_zip'] = array(
    'name' => 'edit field_zip',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own nossasp_council content
  $permissions['edit own nossasp_council content'] = array(
    'name' => 'edit own nossasp_council content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own nossasp_councilman content
  $permissions['edit own nossasp_councilman content'] = array(
    'name' => 'edit own nossasp_councilman content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own nossasp_organization content
  $permissions['edit own nossasp_organization content'] = array(
    'name' => 'edit own nossasp_organization content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: override nossasp_council published option
  $permissions['override nossasp_council published option'] = array(
    'name' => 'override nossasp_council published option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: override nossasp_organization published option
  $permissions['override nossasp_organization published option'] = array(
    'name' => 'override nossasp_organization published option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_address
  $permissions['view field_address'] = array(
    'name' => 'view field_address',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_atuacao
  $permissions['view field_atuacao'] = array(
    'name' => 'view field_atuacao',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_council_ref
  $permissions['view field_council_ref'] = array(
    'name' => 'view field_council_ref',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view field_councilman_email
  $permissions['view field_councilman_email'] = array(
    'name' => 'view field_councilman_email',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_councilman_phone
  $permissions['view field_councilman_phone'] = array(
    'name' => 'view field_councilman_phone',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_councilman_ref
  $permissions['view field_councilman_ref'] = array(
    'name' => 'view field_councilman_ref',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_councilman_title
  $permissions['view field_councilman_title'] = array(
    'name' => 'view field_councilman_title',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_email
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_facebook
  $permissions['view field_facebook'] = array(
    'name' => 'view field_facebook',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_phone_text
  $permissions['view field_phone_text'] = array(
    'name' => 'view field_phone_text',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_street
  $permissions['view field_street'] = array(
    'name' => 'view field_street',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_tipo
  $permissions['view field_tipo'] = array(
    'name' => 'view field_tipo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_twitter
  $permissions['view field_twitter'] = array(
    'name' => 'view field_twitter',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_website
  $permissions['view field_website'] = array(
    'name' => 'view field_website',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_zip
  $permissions['view field_zip'] = array(
    'name' => 'view field_zip',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
