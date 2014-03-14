<?php
/**
 * @file
 * las_user.ldap_query.inc
 */

/**
 * Implements hook_default_ldap_query().
 */
function las_user_default_ldap_query() {
  $export = array();

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'dev_calnet_test';
  $qid->name = 'dev team';
  $qid->sid = 'ucb_test';
  $qid->status = TRUE;
  $qid->base_dn_str = 'ou=people,dc=berkeley,dc=edu';
  $qid->filter = '(|(uid=307060)(uid=182628)(uid=175786)(uid=719913)(uid=883528) (uid=113782)(uid=54859))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['dev_calnet_test'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'las_kpadm_staff';
  $qid->name = 'KPADM query with affiliation equals staff';
  $qid->sid = 'ucb_test';
  $qid->status = TRUE;
  $qid->base_dn_str = 'ou=people,dc=berkeley,dc=edu';
  $qid->filter = '(&(departmentNumber=KPADM)(!(berkeleyEduAffiliations=STUDENT-TYPE-REGISTERED))(!(berkeleyEduAffiliations=EMPLOYEE-STATUS-EXPIRED)))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['las_kpadm_staff'] = $qid;

  return $export;
}
