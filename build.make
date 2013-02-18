api = 2
core = 7.x

; Drupal core including patches
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies
projects[nb2][type] = profile
projects[nb2][download][type] = git
projects[nb2][download][branch] = master
projects[nb2][download][url] = git@github.com:sanduhrs/nb2.git
