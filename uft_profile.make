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

projects[admin][version] = 2.0-beta3
projects[admin][type] = "module"
projects[admin][subdir] = "contrib"
projects[auto_nodetitle][version = 1.0
projects[auto_nodetitle][type] = "module"
projects[auto_nodetitle][subdir] = "contrib"

projects[backup_migrate][version] = 2.4
projects[backup_migrate][type] = "module"
projects[backup_migrate][subdir] = "contrib"

projects[coder][version] = 1.0
projects[coder][type] = "module"
projects[coder][subdir] = "contrib"
projects[computed_field][version] = 1.0-beta1
projects[computed_field][type] = "module"
projects[computed_field][subdir] = "contrib"
projects[conditional_fields][type] = "module"
projects[conditional_fields][subdir] = "contrib"
projects[context][version] = 3.0-beta4
projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[ctools][version] = 1.2
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[date][version] = 2.6
projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[devel][version] = 1.3
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[diff][version] = 2.0
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[ds][version] = 2.0-beta2
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[entity][version] = 1.0-rc3
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[extlink][version] = 1.12
projects[extlink][type] = "module"
projects[extlink][subdir] = "contrib"

projects[features][version] = 1.0
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[field_collection][version] = 1.0-beta4
projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"
projects[filefield_sources][version] = 1.4
projects[filefield_sources][type] = "module"
projects[filefield_sources][subdir] = "contrib"
projects[fpa][version] = 2.2
projects[fpa][type] = "module"
projects[fpa][subdir] = "contrib"

projects[google_analytics][version] = 1.2
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"

projects[imce][version] = 1.5
projects[imce][type] = "module"
projects[imce][subdir] = "contrib"
projects[imce_mkdir][version] = 1.0
projects[imce_mkdir][type] = "module"
projects[imce_mkdir][subdir] = "contrib"

projects[libraries][version] = 1.0
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[link][version] = 1.0
projects[link][type] = "module"
projects[link][subdir] = "contrib"
projects[logintoboggan][version] = 1.3
projects[logintoboggan][type] = "module"
projects[logintoboggan][subdir] = "contrib"

projects[markdown][version] = 1.0
projects[markdown][type] = "module"
projects[markdown][subdir] = "contrib"
projects[module_filter][version] = 1.7
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[node_clone][version] = 1.0-rc1
projects[node_clone][type] = "module"
projects[node_clone][subdir] = "contrib"
projects[node_export][version] = 3.0
projects[node_export][type] = "module"
projects[node_export][subdir] = "contrib"
projects[nodequeue][version] = 2.0-beta1
projects[nodequeue][type] = "module"
projects[nodequeue][subdir] = "contrib"

projects[pathauto][version] = 1.2
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"
projects[print][version] = 1.1
projects[print][type] = "module"
projects[print][subdir] = "contrib"

projects[revisioning][version] = 1.4
projects[revisioning][type] = "module"
projects[revisioning][subdir] = "contrib"

projects[search404][version] = 1.2
projects[search404][type] = "module"
projects[search404][subdir] = "contrib"
projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[themekey][version] = 2.3
projects[themekey][type] = "module"
projects[themekey][subdir] = "contrib"
projects[token][version] = 1.2
projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[views][version] = 3.5
projects[views][type] = "module"
projects[views][subdir] = "contrib"

; Download a specific Git commit as Features exportability has been committed
; but no stable build has been released.

projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "3e7568e8b8ed077caadcac4dfa147fb394b0b041"
projects[wysiwyg][subdir] = "contrib"

; Themes
; --------

projects[omega][version] = 3.1
projects[omega][type] = "theme"
projects[omega][subdir] = "contrib"

; Libraries
; ---------

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"

libraries[profiler][type] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"

