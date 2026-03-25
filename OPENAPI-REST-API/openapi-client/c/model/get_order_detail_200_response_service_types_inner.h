/*
 * get_order_detail_200_response_service_types_inner.h
 *
 * 
 */

#ifndef _get_order_detail_200_response_service_types_inner_H_
#define _get_order_detail_200_response_service_types_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_order_detail_200_response_service_types_inner_t get_order_detail_200_response_service_types_inner_t;




typedef struct get_order_detail_200_response_service_types_inner_t {
    int *services_id; //numeric
    char *services_name; // string
    int *services_cost; //numeric
    char *services_field1; // string
    char *services_field2; // string
    char *services_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_order_detail_200_response_service_types_inner_t;

__attribute__((deprecated)) get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_create(
    int *services_id,
    char *services_name,
    int *services_cost,
    char *services_field1,
    char *services_field2,
    char *services_module
);

void get_order_detail_200_response_service_types_inner_free(get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner);

get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_parseFromJSON(cJSON *get_order_detail_200_response_service_types_innerJSON);

cJSON *get_order_detail_200_response_service_types_inner_convertToJSON(get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner);

#endif /* _get_order_detail_200_response_service_types_inner_H_ */

