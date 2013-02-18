api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.19

; CORE PATCHES
; Add "exclusive" property to install profiles to auto-select them.
; @todo: Part of core as of 7.20, so remove whenever that comes out.
projects[drupal][patch][1727430] = http://drupal.org/files/drupal-provide_exclusive_property_install_profiles-1727430-35-d7.patch
