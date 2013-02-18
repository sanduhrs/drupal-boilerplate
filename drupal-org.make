; This is a standard make file for packaging the distribution along with any
; contributed modules/themes or external libraries. Some examples are below.
; See http://drupal.org/node/159730 for more details.

api = 2
core = 7.x

; Contributed modules; standard.

; Modules
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.0-beta3"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta6"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0-beta1"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"

projects[http_client][subdir] = "contrib"
projects[http_client][version] = "2.4"

projects[oauth][subdir] = "contrib"
projects[oauth][version] = "3.1"

projects[openid_ax_api][subdir] = "contrib"
projects[openid_ax_api][version] = "1.x-dev"

projects[openid_profile][subdir] = "contrib"
projects[openid_profile][version] = "1.x-dev"

projects[openid_provider][subdir] = "contrib"
projects[openid_provider][version] = "1.0"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[views][subdir] = "contrib"
projects[views][version] = "3.5"

projects[xrds_simple][subdir] = "contrib"
projects[xrds_simple][version] = "1.0"

; Themes
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][download][type] = "git"
projects[responsive_bartik][download][revision] = "7c2db58a201fd572153545b24bfcc2703c2fac80"
projects[responsive_bartik][download][branch] = "7.x-1.x"
projects[responsive_bartik][subdir] = "contrib"

; Unstable
e4bbe32
projects[connector][download][type] = "git"
projects[connector][download][version] = ""
projects[connector][type] = "module"

; Contributed projects; Sparkish.
; @todo: Change this to peg to a stable release once 7.x-1.13 comes out.
projects[ckeditor][type] = module
;projects[ckeditor][version] = 1.x-dev
projects[ckeditor][download][type] = git
; Wed, 23 Jan 2013 09:32:00 +0000 (10:32 +0100)
projects[ckeditor][download][revision] = a5eaedb5f673fe447f82a00e36f178ce5e4d6516
projects[ckeditor][download][branch] = 7.x-1.x
projects[ckeditor][subdir] = contrib
