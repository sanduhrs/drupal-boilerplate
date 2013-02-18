<?php
/**
 * @file
 * nb_openid_relying_party.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nb_openid_relying_party_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
