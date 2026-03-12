/*
 * delete_geo_firewall_rule.h
 *
 * Delete geo firewall rule for your scrub ip
 */

#ifndef _delete_geo_firewall_rule_H_
#define _delete_geo_firewall_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct delete_geo_firewall_rule_t delete_geo_firewall_rule_t;




typedef struct delete_geo_firewall_rule_t {
    int rule_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} delete_geo_firewall_rule_t;

__attribute__((deprecated)) delete_geo_firewall_rule_t *delete_geo_firewall_rule_create(
    int rule_id
);

void delete_geo_firewall_rule_free(delete_geo_firewall_rule_t *delete_geo_firewall_rule);

delete_geo_firewall_rule_t *delete_geo_firewall_rule_parseFromJSON(cJSON *delete_geo_firewall_ruleJSON);

cJSON *delete_geo_firewall_rule_convertToJSON(delete_geo_firewall_rule_t *delete_geo_firewall_rule);

#endif /* _delete_geo_firewall_rule_H_ */

