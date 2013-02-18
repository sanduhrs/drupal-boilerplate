<?php
/**
 * @file
 * nb_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nb_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
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
      'form' => array(
        'account' => array(
          'weight' => '1',
        ),
        'timezone' => array(
          'weight' => '5',
        ),
        'picture' => array(
          'weight' => '2',
        ),
        'overlay_control' => array(
          'weight' => '3',
        ),
        'locale' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_profile_map';
  $strongarm->value = array(
    'http://axschema.org/namePerson/friendly' => array(
      'value' => 'name',
      'handler' => array(
        'name' => 'Basic text',
        'class' => 'openid_profile_basic',
      ),
      'field_type' => 'name',
    ),
    'http://axschema.org/contact/email' => array(
      'value' => 'mail',
      'handler' => array(
        'name' => 'Basic text',
        'class' => 'openid_profile_basic',
      ),
      'field_type' => 'mail',
    ),
    'http://axschema.org/pref/timezone' => array(
      'value' => 'timezone',
      'handler' => array(
        'name' => 'Timezone',
        'class' => 'openid_profile_timezone',
      ),
      'field_type' => 'timezone',
    ),
    'http://axschema.org/pref/language' => array(
      'value' => 'language',
      'handler' => array(
        'name' => 'Language',
        'class' => 'openid_profile_language',
      ),
      'field_type' => 'language',
    ),
    'http://axschema.org/media/image/default' => array(
      'value' => 'field_profile_picture',
      'handler' => array(
        'name' => 'Imagefield',
        'class' => 'openid_profile_image',
      ),
      'field_type' => 'image',
    ),
    'http://axschema.org/namePerson/first' => array(
      'value' => 'field_profile_first_name',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_profile_field',
      ),
      'field_type' => 'text',
    ),
    'http://axschema.org/namePerson/last' => array(
      'value' => 'field_profile_last_name',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_profile_field',
      ),
      'field_type' => 'text',
    ),
    'http://axschema.org/contact/country/home' => array(
      'value' => 'field_profile_address::country',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
    'http://axschema.org/company/name' => array(
      'value' => 'field_profile_address::organisation_name',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
    'http://axschema.org/contact/state/home' => array(
      'value' => 'field_profile_address::administrative_area',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
    'http://axschema.org/contact/city/home' => array(
      'value' => 'field_profile_address::locality',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
    'http://axschema.org/contact/postalCode/home' => array(
      'value' => 'field_profile_address::postal_code',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
    'http://axschema.org/contact/postalAddress/home' => array(
      'value' => 'field_profile_address::thoroughfare',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
    'http://axschema.org/contact/postalAddressAdditional/home' => array(
      'value' => 'field_profile_address::premise',
      'handler' => array(
        'name' => 'Addressfield',
        'class' => 'openid_profile_addressfield',
      ),
      'field_type' => 'addressfield',
    ),
  );
  $export['openid_profile_map'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  return $export;
}
