/*
 * get_order_detail_200_response.h
 *
 * 
 */

#ifndef _get_order_detail_200_response_H_
#define _get_order_detail_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_order_detail_200_response_t get_order_detail_200_response_t;

#include "get_order_detail_200_response_ips_inner.h"
#include "get_order_detail_200_response_package_costs.h"
#include "get_order_detail_200_response_service_types_inner.h"



typedef struct get_order_detail_200_response_t {
    struct get_order_detail_200_response_package_costs_t *package_costs; //model
    list_t *service_types; //nonprimitive container
    list_t *ips; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} get_order_detail_200_response_t;

__attribute__((deprecated)) get_order_detail_200_response_t *get_order_detail_200_response_create(
    get_order_detail_200_response_package_costs_t *package_costs,
    list_t *service_types,
    list_t *ips
);

void get_order_detail_200_response_free(get_order_detail_200_response_t *get_order_detail_200_response);

get_order_detail_200_response_t *get_order_detail_200_response_parseFromJSON(cJSON *get_order_detail_200_responseJSON);

cJSON *get_order_detail_200_response_convertToJSON(get_order_detail_200_response_t *get_order_detail_200_response);

#endif /* _get_order_detail_200_response_H_ */

