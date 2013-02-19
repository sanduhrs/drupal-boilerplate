api = 2
core = 7.x

; Drupal core including patches
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies
projects[nb][type] = profile
projects[nb][download][type] = git
projects[nb][download][branch] = master
projects[nb][download][url] = https://github.com/sanduhrs/nb2.git
