/*
 * create_geo_rule_400_response.h
 *
 * 
 */

#ifndef _create_geo_rule_400_response_H_
#define _create_geo_rule_400_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_geo_rule_400_response_t create_geo_rule_400_response_t;




typedef struct create_geo_rule_400_response_t {
    int success; //boolean
    char *text; // string
    list_t *errors; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} create_geo_rule_400_response_t;

__attribute__((deprecated)) create_geo_rule_400_response_t *create_geo_rule_400_response_create(
    int success,
    char *text,
    list_t *errors
);

void create_geo_rule_400_response_free(create_geo_rule_400_response_t *create_geo_rule_400_response);

create_geo_rule_400_response_t *create_geo_rule_400_response_parseFromJSON(cJSON *create_geo_rule_400_responseJSON);

cJSON *create_geo_rule_400_response_convertToJSON(create_geo_rule_400_response_t *create_geo_rule_400_response);

#endif /* _create_geo_rule_400_response_H_ */

