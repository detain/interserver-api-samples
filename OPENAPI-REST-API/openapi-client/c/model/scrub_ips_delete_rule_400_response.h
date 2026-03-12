/*
 * scrub_ips_delete_rule_400_response.h
 *
 * 
 */

#ifndef _scrub_ips_delete_rule_400_response_H_
#define _scrub_ips_delete_rule_400_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scrub_ips_delete_rule_400_response_t scrub_ips_delete_rule_400_response_t;




typedef struct scrub_ips_delete_rule_400_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} scrub_ips_delete_rule_400_response_t;

__attribute__((deprecated)) scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_create(
    int success,
    char *text
);

void scrub_ips_delete_rule_400_response_free(scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response);

scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_parseFromJSON(cJSON *scrub_ips_delete_rule_400_responseJSON);

cJSON *scrub_ips_delete_rule_400_response_convertToJSON(scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response);

#endif /* _scrub_ips_delete_rule_400_response_H_ */

