/*
 * delete_firewall_rule.h
 *
 * Delete firewall rule for your ip
 */

#ifndef _delete_firewall_rule_H_
#define _delete_firewall_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct delete_firewall_rule_t delete_firewall_rule_t;




typedef struct delete_firewall_rule_t {
    int rule_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} delete_firewall_rule_t;

__attribute__((deprecated)) delete_firewall_rule_t *delete_firewall_rule_create(
    int rule_id
);

void delete_firewall_rule_free(delete_firewall_rule_t *delete_firewall_rule);

delete_firewall_rule_t *delete_firewall_rule_parseFromJSON(cJSON *delete_firewall_ruleJSON);

cJSON *delete_firewall_rule_convertToJSON(delete_firewall_rule_t *delete_firewall_rule);

#endif /* _delete_firewall_rule_H_ */

