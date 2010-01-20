Boost support for Aegir
=======================

This Drush module will alter the Aegir platform configurations to add the right
rewrite rules. It will also create the boost directories needed for proper
operation, with proper permissions.

Installation instructions
-------------------------

Drop this directory in Aegir's Drush path (e.g. /var/aegir/.drush).

Then you will need to manually verify the sites you want using the right flags
so that the configuration is enabled.

Platform example:

cd drupal-6.14 ; drush provision verify --platform_boost=1

Site example:

cd drupal-6.14 ; drush provision verify --site_boost=1

Caveats
-------

Platforms and sites need to be verified before this takes effect.

There is no frontend yet.
