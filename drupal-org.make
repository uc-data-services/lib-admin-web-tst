; las_dev make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[location][version] = "3.1"
projects[location][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.1"
projects[context][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[coder][version] = "2.0"
projects[coder][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.0"
projects[profiler_builder][subdir] = "contrib"

projects[reroute_email][version] = "1.1"
projects[reroute_email][subdir] = "contrib"

projects[ds][version] = "2.6"
projects[ds][subdir] = "contrib"

projects[academic_job][version] = "1.0-beta42"
projects[academic_job][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[index_panels][version] = "1.0-beta18"
projects[index_panels][subdir] = "contrib"

projects[las_field_bases][version] = "1.0-beta2"
projects[las_field_bases][subdir] = "contrib"

projects[las_permissions_roles][version] = "1.0-beta1"
projects[las_permissions_roles][subdir] = "contrib"

projects[las_userdashboards][version] = "1.0-beta2"
projects[las_userdashboards][subdir] = "contrib"

projects[lhrd_configuration][version] = "1.0-beta0"
projects[lhrd_configuration][subdir] = "contrib"

projects[lhrd_job_rules][version] = "1.0-beta5"
projects[lhrd_job_rules][subdir] = "contrib"

projects[lhrd_student_job_display_suite][version] = "1.0-beta4"
projects[lhrd_student_job_display_suite][subdir] = "contrib"

projects[staff_job][version] = "1.0-beta42"
projects[staff_job][subdir] = "contrib"

projects[student_job][version] = "1.0-beta55"
projects[student_job][subdir] = "contrib"

projects[travel_approval][version] = "1.0-alpha2"
projects[travel_approval][subdir] = "contrib"

projects[unit][version] = "1.0-beta3"
projects[unit][subdir] = "contrib"

projects[features_extra][version] = "1.0-beta1"
projects[features_extra][subdir] = "contrib"

projects[feeds][version] = "2.0-alpha8"
projects[feeds][subdir] = "contrib"

projects[computed_field][version] = "1.0"
projects[computed_field][subdir] = "contrib"

projects[conditional_fields][version] = "3.0-alpha1"
projects[conditional_fields][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[field_group][version] = "1.3"
projects[field_group][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[inline_entity_form][version] = "1.3"
projects[inline_entity_form][subdir] = "contrib"

projects[link][version] = "1.2"
projects[link][subdir] = "contrib"

projects[flag][version] = "3.2"
projects[flag][subdir] = "contrib"

projects[homebox][version] = "2.0-beta6"
projects[homebox][subdir] = "contrib"

projects[location][version] = "3.1"
projects[location][subdir] = "contrib"

projects[maillog][version] = "1.x-dev"
projects[maillog][subdir] = "contrib"

projects[auto_entitylabel][version] = "1.x-dev"
projects[auto_entitylabel][subdir] = "contrib"

projects[auto_nodetitle][version] = "1.0"
projects[auto_nodetitle][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.2"
projects[entity][subdir] = "contrib"

projects[fillpdf][version] = "1.9"
projects[fillpdf][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[menu_attributes][version] = "1.0-rc2"
projects[menu_attributes][subdir] = "contrib"

projects[menu_trail_by_path][version] = "2.0"
projects[menu_trail_by_path][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[tablefield][version] = "2.2"
projects[tablefield][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[panels_breadcrumbs][version] = "2.1"
projects[panels_breadcrumbs][subdir] = "contrib"

projects[pantheon_api][version] = "1.0"
projects[pantheon_api][subdir] = "contrib"

projects[pantheon_login][version] = "1.0"
projects[pantheon_login][subdir] = "contrib"

projects[rules][version] = "2.6"
projects[rules][subdir] = "contrib"

projects[rules_conditional][version] = "1.0-beta2"
projects[rules_conditional][subdir] = "contrib"

projects[rules_forms][version] = "1.0-rc2"
projects[rules_forms][subdir] = "contrib"

projects[page_title][version] = "2.7"
projects[page_title][subdir] = "contrib"

projects[ckeditor][version] = "1.13"
projects[ckeditor][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

; +++++ Themes +++++

; skeletontheme
projects[skeletontheme][type] = "theme"
projects[skeletontheme][version] = "1.3"
projects[skeletontheme][subdir] = "contrib"

; skeleton_lhrd
projects[skeleton_lhrd][type] = "theme"
projects[skeleton_lhrd][version] = "1.2"
projects[skeleton_lhrd][subdir] = "contrib"

; omega
projects[omega][type] = "theme"
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"

; +++++ Patches +++++

projects[feeds][patch][] = "http://drupal.org/files/relation_feeds_support-1345958-16.patch"

projects[features][patch][] = "http://drupal.org/files/relation_feeds_support-1345958-16.patch"

