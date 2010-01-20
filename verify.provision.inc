<?php

/**

Antoine suggère: 
 * avoir une plateforme


 */

/**
 * implementation of provision_verify
 */
function drush_provision_civicrm_provision_verify($url = null) {
  if (PROVISION_CONTEXT_SITE && drush_get_option('site_civicrm')) {
    // load civicrm.settings.php
    // patch paths
    // patch db_url lines
    // create paths in files/civicrm and change mod?
    drush_log(dt("configuring site for civicrm support"));
  }
}

/**
 * Persist civicrm settings in the drushrc.php
 */
function drush_provision_civicrm_post_provision_verify($url = NULL) {
  if (PROVISION_CONTEXT_SITE) {
    //drush_set_option('site_civicrm', drush_get_option('site_civicrm'), 'site');
  }
}
