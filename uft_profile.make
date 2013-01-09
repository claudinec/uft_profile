; Makefile for UFT Drupal 7.

; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x

; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.

api = 2

; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.

; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7

; Modules
; --------

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][type] = "module"
projects[admin_menu][version] = "3.0-rc3"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][type] = "module"
projects[auto_nodetitle][version = 1.0

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][type] = "module"
projects[backup_migrate][version] = "2.4"

projects[better_formats][subdir] = "contrib"
projects[better_formats][type] = "module"
projects[better_formats][version] = "1.0-beta1"

projects[calendar][subdir] = "contrib"
projects[calendar][type] = "module"
projects[calendar][version] = "3.4"

projects[computed_field][subdir] = "contrib"
projects[computed_field][type] = "module"
projects[computed_field][version] = "1.0-beta1"

projects[conditional_fields][subdir] = "contrib"
projects[conditional_fields][type] = "module"
projects[conditional_fields][download][type] = "git"
projects[conditional_fields][download][url] = "http://git.drupal.org/project/conditional_fields.git"
projects[conditional_fields][download][revision] = "cd29b00"

projects[content_access][subdir] = "contrib"
projects[content_access][type] = "module"
projects[content_access][version] = "1.2-beta1"

projects[context][subdir] = "contrib"
projects[context][type] = "module"
projects[context][version] = "3.0-beta6"

projects[ctools][subdir] = "contrib"
projects[ctools][type] = "module"
projects[ctools][version] = "1.2"

projects[date][subdir] = "contrib"
projects[date][type] = "module"
projects[date][version] = "2.6"

projects[devel][subdir] = "contrib"
projects[devel][type] = "module"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][type] = "module"
projects[diff][version] = "3.2"

projects[disable_messages][subdir] = "contrib"
projects[disable_messages][type] = "module"
projects[disable_messages][version] = "1.1"

projects[ds][subdir] = "contrib"
projects[ds][type] = "module"
projects[ds][version] = "2.0"

projects[entity][subdir] = "contrib"
projects[entity][type] = "module"
projects[entity][version] = "1.0"

projects[extlink][subdir] = "contrib"
projects[extlink][type] = "module"
projects[extlink][version] = "1.12"

projects[features][subdir] = "contrib"
projects[features][type] = "module"
projects[features][version] = "1.0"

projects[feeds][subdir] = "contrib"
projects[feeds][type] = "module"
projects[feeds][version] = "2.0-alpha7"

projects[field_collection][subdir] = "contrib"
projects[field_collection][type] = "module"
projects[field_collection][version] = "1.0-beta5"

projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources][type] = "module"
projects[filefield_sources][version] = "1.7"

projects[fpa][subdir] = "contrib"
projects[fpa][type] = "module"
projects[fpa][version] = "2.2"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][type] = "module"
projects[google_analytics][version] = "1.3"

projects[imce][subdir] = "contrib"
projects[imce][type] = "module"
projects[imce][version] = "1.6"

projects[imce_mkdir][subdir] = "contrib"
projects[imce_mkdir][type] = "module"
projects[imce_mkdir][version] = "1.0"

projects[imce_tools][subdir] = "contrib"
projects[imce_tools][type] = "module"
projects[imce_tools][version] = "1.1"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][type] = "module"
projects[job_scheduler][version] = "2.0-alpha3"

projects[libraries][subdir] = "contrib"
projects[libraries][type] = "module"
projects[libraries][version] = "2.0"

projects[link][subdir] = "contrib"
projects[link][type] = "module"
projects[link][version] = "1.0"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][type] = "module"
projects[logintoboggan][version] = "1.3"

projects[markdown][subdir] = "contrib"
projects[markdown][type] = "module"
projects[markdown][version] = "1.1"

projects[masquerade][subdir] = "contrib"
projects[masquerade][type] = "module"
projects[masquerade][version] = "1.0-rc5"

projects[messaging][subdir] = "contrib"
projects[messaging][type] = "module"
projects[messaging][version] = "1.0-alpha2"

projects[mimemail][subdir] = "contrib"
projects[mimemail][type] = "module"
projects[mimemail][version] = "1.0-alpha2"

projects[module_filter][subdir] = "contrib"
projects[module_filter][type] = "module"
projects[module_filter][version] = "1.7"

projects[node_clone][subdir] = "contrib"
projects[node_clone][type] = "module"
projects[node_clone][version] = "1.0-rc1"

projects[node_export][subdir] = "contrib"
projects[node_export][type] = "module"
projects[node_export][version] = "3.0"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][type] = "module"
projects[nodequeue][version] = "2.0-beta1"

projects[notifications][subdir] = "contrib"
projects[notifications][type] = "module"
projects[notifications][version] = "1.0-alpha2"

projects[og][subdir] = "contrib"
projects[og][type] = "module"
projects[og][version] = "2.0-rc1"

projects[omega_tools][subdir] = "contrib"
projects[omega_tools][type] = "module"
projects[omega_tools][version] = "3.0-rc4"

projects[pathauto][subdir] = "contrib"
projects[pathauto][type] = "module"
projects[pathauto][version] = "1.2"

projects[print][subdir] = "contrib"
projects[print][type] = "module"
projects[print][version] = "1.2"

projects[profile2][subdir] = "contrib"
projects[profile2][type] = "module"
projects[profile2][version] = "1.3"

projects[revisioning][subdir] = "contrib"
projects[revisioning][type] = "module"
projects[revisioning][version] = "1.4"

projects[rules][subdir] = "contrib"
projects[rules][type] = "module"
projects[rules][version] = "2.2"

projects[search404][subdir] = "contrib"
projects[search404][type] = "module"
projects[search404][version] = "1.2"

projects[semiclean][subdir] = "contrib"
projects[semiclean][type] = "module"
projects[semiclean][version] = "1.0"

projects[stringoverrides][subdir] = "contrib"
projects[stringoverrides][type] = "module"
projects[stringoverrides][version] = "1.8"

projects[switchtheme][subdir] = "contrib"
projects[switchtheme][type] = "module"
projects[switchtheme][version] = "1.0"

projects[themekey][subdir] = "contrib"
projects[themekey][type] = "module"
projects[themekey][version] = "2.3"

projects[viewreference][subdir] = "contrib"
projects[viewreference][type] = "module"
projects[viewreference][version] = "3.4"

projects[views][subdir] = "contrib"
projects[views][type] = "module"
projects[views][version] = "3.5"

projects[views_data_export][subdir] = "contrib"
projects[views_data_export][type] = "module"
projects[views_data_export][version] = "3.0-beta6"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][version] = "3.1"

projects[views_datasource][subdir] = "contrib"
projects[views_datasource][type] = "module"
projects[views_datasource][download][type] = "git"
projects[views_datasource][download][url] = "http://git.drupal.org/project/views_datasource.git"
projects[views_datasource][download][revision] = "52e54ac"

projects[views_hacks][subdir] = "contrib"
projects[views_hacks][type] = "module"
projects[views_hacks][version] = "1.0-alpha1"

projects[webform][subdir] = "contrib"
projects[webform][type] = "module"
projects[webform][version] = "3.18"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][type] = "module"
projects[xmlsitemap][version] = "2.0-rc2"

; Themes
; --------

projects[omega][subdir] = "contrib"
projects[omega][type] = "theme"
projects[omega][version] = "3.1"

projects[uft_2012][subdir] = "custom"
projects[uft_2012][type] = "theme"
projects[uft_2012][download][type] = "git"
projects[uft_2012][download][url] = "git@github.com:claudinec/uft_2012.git"
projects[uft_2012][download][revision] = "e87605a87b9daafb1c6f70bb6873fbdc63cf693a"

projects[zen][subdir] = "contrib"
projects[zen][type] = "theme"
projects[zen][version] = "5.1"

; Libraries
; ---------

projects[profiler][type] = libraries
projects[profiler][version] = "2.0-beta1"
