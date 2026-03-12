/*
 * create_rule_500_response.h
 *
 * 
 */

#ifndef _create_rule_500_response_H_
#define _create_rule_500_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_rule_500_response_t create_rule_500_response_t;




typedef struct create_rule_500_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} create_rule_500_response_t;

__attribute__((deprecated)) create_rule_500_response_t *create_rule_500_response_create(
    int success,
    char *text
);

void create_rule_500_response_free(create_rule_500_response_t *create_rule_500_response);

create_rule_500_response_t *create_rule_500_response_parseFromJSON(cJSON *create_rule_500_responseJSON);

cJSON *create_rule_500_response_convertToJSON(create_rule_500_response_t *create_rule_500_response);

#endif /* _create_rule_500_response_H_ */

