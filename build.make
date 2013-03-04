api = 2
core = 7.x

; Drupal core including patches
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies
projects[boilerplate][type] = profile
projects[boilerplate][download][type] = git
projects[boilerplate][download][branch] = master
projects[boilerplate][download][url] = https://github.com/sanduhrs/drupal-boilerplate.git
