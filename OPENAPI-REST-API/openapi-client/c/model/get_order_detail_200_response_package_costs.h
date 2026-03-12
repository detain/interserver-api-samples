/*
 * get_order_detail_200_response_package_costs.h
 *
 * 
 */

#ifndef _get_order_detail_200_response_package_costs_H_
#define _get_order_detail_200_response_package_costs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_order_detail_200_response_package_costs_t get_order_detail_200_response_package_costs_t;




typedef struct get_order_detail_200_response_package_costs_t {
    double package_id; //numeric
    double package_cost; //numeric
    char *currency; // string
    char *currency_symbol; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_order_detail_200_response_package_costs_t;

__attribute__((deprecated)) get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_create(
    double package_id,
    double package_cost,
    char *currency,
    char *currency_symbol
);

void get_order_detail_200_response_package_costs_free(get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs);

get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_parseFromJSON(cJSON *get_order_detail_200_response_package_costsJSON);

cJSON *get_order_detail_200_response_package_costs_convertToJSON(get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs);

#endif /* _get_order_detail_200_response_package_costs_H_ */

