; las_dev make file for local development
core = "7.x"
api = "2"

projects[drupal][version] = "7.x"
; include the d.o. profile base
includes[] = "drupal-org.make"

; UCB CAS feature - includes appropriate versions of cas, cas_attributes, & ldap
projects[ucb_cas][location] = "http://drupal-apps.berkeley.edu/fserver"
projects[ucb_cas][type] = "module"
projects[ucb_cas][version] = "1.3-beta2"
