<?php

/**
 * @file
 * Hookup with drush
 */

/*

Stuff to do when migrating :
 * in civicrm.settings.php
  * update the database connection information on for CIVICRM_UF_DSN and CIVICRM_DSN
  * update the path in $civicrm_root and CIVICRM_TEMPLATE_COMPILEDIR
  * update the url in CIVICRM_UF_BASEURL
 * erase everything in files/civicrm/templates_c
 * update the url and the path in civicrm_domain.config_backend (which contains serialized data)
 * (to be verified) truncate civicrm_cache

*/
