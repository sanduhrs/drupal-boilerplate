<?php
/**
 * @file
 * nb_openid_provider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nb_openid_provider_user_default_permissions() {
  $permissions = array();

  // Exported permission: connect with oauthconnector_facebook.
  $permissions['connect with oauthconnector_facebook'] = array(
    'name' => 'connect with oauthconnector_facebook',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_google.
  $permissions['connect with oauthconnector_google'] = array(
    'name' => 'connect with oauthconnector_google',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_twitter.
  $permissions['connect with oauthconnector_twitter'] = array(
    'name' => 'connect with oauthconnector_twitter',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'connector',
  );

  return $permissions;
}
