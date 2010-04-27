<?php

/**
 * implementation of provision_verify
 */
function drush_provision_civicrm_provision_install($url = null) {
  if (PROVISION_CONTEXT_SITE) {
    // todo: trigger if civicrm is already enabled and configured on the site
    // load civicrm.settings.php
    // patch db connection information
    // patch paths
    // patch urls
    // empty files/civicrm/templates_c
    // load data from civicrm_domain.backend_config
    // update data with new paths and urls
    // ...save
    // empty civicrm_cache ?
  }

  if (PROVISION_CONTEXT_SITE && drush_get_option('site_civicrm')) {
    // todo: (phase II) setup civicrm on demand
    drush_log(dt("configuring site for civicrm support"));
  }
}

function drush_provision_civicrm_pre_provision_install($url = NULL) {
  if (PROVISION_CONTEXT_SITE) {
    // whatever
  }
}

/**
 * Persist civicrm settings in the drushrc.php
 */
function drush_provision_civicrm_post_provision_install($url = NULL) {
  if (PROVISION_CONTEXT_SITE) {
    //drush_set_option('site_civicrm', drush_get_option('site_civicrm'), 'site');
  }
}
