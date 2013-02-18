<?php
/**
 * @file
 * nb_openid_provider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nb_openid_provider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_openid_sso_provider_rps__openid_sso_provider_rps';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_openid_sso_provider_rps__openid_sso_provider_rps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_provider_assoc_expires_in';
  $strongarm->value = '3600';
  $export['openid_provider_assoc_expires_in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_provider_blacklist';
  $strongarm->value = array();
  $export['openid_provider_blacklist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_provider_debugging';
  $strongarm->value = 1;
  $export['openid_provider_debugging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_provider_sites_auto_release';
  $strongarm->value = 'whitelist';
  $export['openid_provider_sites_auto_release'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_provider_whitelist';
  $strongarm->value = array(
    0 => 'http://rp.nb.de/',
  );
  $export['openid_provider_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_provider_whitelist_only';
  $strongarm->value = 0;
  $export['openid_provider_whitelist_only'] = $strongarm;

  return $export;
}
