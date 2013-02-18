<?php
/**
 * @file
 * nb_openid_relying_party.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nb_openid_relying_party_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 0;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
