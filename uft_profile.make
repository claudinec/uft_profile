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

projects[admin_menu][version] = 3.0-rc3
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[backup_migrate][subdir] = "contrib"

projects[context][version] = 3.0-beta2
projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[ctools][version] = 1.1
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[date][version] = 2.5
projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[devel][version] = 1.2
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[diff][version] = 2.0
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[ds][version] = 2.0-beta2
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[features][version] = 1.0
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[field_collection][version] = 1.0-beta4
projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"
projects[field_group][subdir] = "contrib"

projects[libraries][version] = 1.0
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[link][version] = 1.0
projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[module_filter][subdir] = "contrib"

projects[themekey][version] = 2.3
projects[themekey][type] = "module"
projects[themekey][subdir] = "contrib"
projects[token][subdir] = "contrib"

projects[views][version] = 3.3
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

projects[] = omega

; Libraries
; ---------

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"

libraries[profiler][type] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"

