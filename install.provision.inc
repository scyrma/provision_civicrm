<?php

/**
 * implementation of hook_pre_provision_install
 */
function drush_civicrm_pre_provision_install($url = NULL) {
  if (PROVISION_CONTEXT_SITE) {
    // if necessary ...
  }
}

/**
 * implementation of hook_provision_install
 */
function drush_civicrm_provision_install($url = null) {
  if (PROVISION_CONTEXT_SITE) {

    $packages = drush_get_option('packages', 'platform');
    if (!array_key_exists('civicrm', $packages['base']['modules'])) {
      return;
    }
    drush_log(dt("configuring site for civicrm support"));

    //echo "would call: civicrm_install(array(db_name => ". drush_get_option('db_name', 'site') .", db_user => ". drush_get_option('db_user', 'site') .", db_pass => ". drush_get_option('db_passwd', 'site') ."));";
    drush_civicrm_install(
          drush_get_option('db_user', 'site'),
          drush_get_option('db_passwd', 'site'),
          drush_get_option('db_host', 'site'),
          drush_get_option('db_name', 'site'),
          null
        );

    drush_set_option('site_civicrm', TRUE, 'site');
  }
}

/**
 * implementation of hook_provision_install
 */
function drush_civicrm_post_provision_install($url = NULL) {
  if (PROVISION_CONTEXT_SITE) {
    drush_pm_enable('civicrm');
  }
}
