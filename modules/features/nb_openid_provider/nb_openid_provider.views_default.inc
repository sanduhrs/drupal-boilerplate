<?php
/**
 * @file
 * nb_openid_provider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nb_openid_provider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'relying_parties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'openid_sso_provider_rps';
  $view->human_name = 'Relying parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your used OpenID relying parties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: OpenID Provider: Relying Parties: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['link_to_realm'] = 1;
  /* Field: OpenID Provider: Relying Parties: Realm */
  $handler->display->display_options['fields']['realm']['id'] = 'realm';
  $handler->display->display_options['fields']['realm']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['realm']['field'] = 'realm';
  $handler->display->display_options['fields']['realm']['label'] = '';
  $handler->display->display_options['fields']['realm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realm']['link_to_realm'] = 0;
  /* Sort criterion: OpenID Provider: Relying Parties: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  /* Contextual filter: OpenID Provider: Relying Parties: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'openid_provider_relying_party';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: OpenID Provider: Relying Parties: Enabled */
  $handler->display->display_options['filters']['enabled']['id'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['filters']['enabled']['field'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['value'] = '1';

  /* Display: Block: All relying parties */
  $handler = $view->new_display('block', 'Block: All relying parties', 'block_openid_sso_provider_all_rps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Available OpenID relying parties';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block: User's relying parties */
  $handler = $view->new_display('block', 'Block: User\'s relying parties', 'block_openid_sso_provider_used_rps');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Block: User's not used relying parties */
  $handler = $view->new_display('block', 'Block: User\'s not used relying parties', 'block_openid_sso_provider_unused_rps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other available OpenID relying parties';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OpenID Provider: Relying Parties: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'openid_provider_relying_party';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  $translatables['relying_parties'] = array(
    t('Master'),
    t('Your used OpenID relying parties'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Block: All relying parties'),
    t('Available OpenID relying parties'),
    t('Block: User\'s relying parties'),
    t('Block: User\'s not used relying parties'),
    t('Other available OpenID relying parties'),
  );
  $export['relying_parties'] = $view;

  $view = new view();
  $view->name = 'relying_party';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'openid_sso_provider_rps';
  $view->human_name = 'Relying party';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OpenID relying party';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Welcome</strong>
  Please login to get access to your account.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: OpenID Provider: Relying Parties: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['link_to_realm'] = 1;
  /* Field: Relying party: Image */
  $handler->display->display_options['fields']['field_rp_image']['id'] = 'field_rp_image';
  $handler->display->display_options['fields']['field_rp_image']['table'] = 'field_data_field_rp_image';
  $handler->display->display_options['fields']['field_rp_image']['field'] = 'field_rp_image';
  $handler->display->display_options['fields']['field_rp_image']['label'] = '';
  $handler->display->display_options['fields']['field_rp_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rp_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rp_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Relying party: Description */
  $handler->display->display_options['fields']['field_rp_description']['id'] = 'field_rp_description';
  $handler->display->display_options['fields']['field_rp_description']['table'] = 'field_data_field_rp_description';
  $handler->display->display_options['fields']['field_rp_description']['field'] = 'field_rp_description';
  $handler->display->display_options['fields']['field_rp_description']['label'] = '';
  $handler->display->display_options['fields']['field_rp_description']['element_label_colon'] = FALSE;
  /* Sort criterion: OpenID Provider: Relying Parties: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  /* Contextual filter: OpenID Provider: Relying Parties: Realm */
  $handler->display->display_options['arguments']['realm']['id'] = 'realm';
  $handler->display->display_options['arguments']['realm']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['arguments']['realm']['field'] = 'realm';
  $handler->display->display_options['arguments']['realm']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['realm']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['realm']['default_argument_options']['argument'] = 'http://anotherone.de/';
  $handler->display->display_options['arguments']['realm']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['realm']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['realm']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['realm']['limit'] = '0';
  /* Filter criterion: OpenID Provider: Relying Parties: Enabled */
  $handler->display->display_options['filters']['enabled']['id'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['filters']['enabled']['field'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['relying_party'] = array(
    t('Master'),
    t('OpenID relying party'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<strong>Welcome</strong>
  Please login to get access to your account.'),
    t('All'),
    t('Block'),
  );
  $export['relying_party'] = $view;

  return $export;
}
