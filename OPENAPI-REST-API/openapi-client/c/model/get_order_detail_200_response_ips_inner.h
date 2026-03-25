/*
 * get_order_detail_200_response_ips_inner.h
 *
 * 
 */

#ifndef _get_order_detail_200_response_ips_inner_H_
#define _get_order_detail_200_response_ips_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_order_detail_200_response_ips_inner_t get_order_detail_200_response_ips_inner_t;




typedef struct get_order_detail_200_response_ips_inner_t {
    double *service_id; //numeric
    char *service_module; // string
    char *service_hostname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_order_detail_200_response_ips_inner_t;

__attribute__((deprecated)) get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_create(
    double *service_id,
    char *service_module,
    char *service_hostname
);

void get_order_detail_200_response_ips_inner_free(get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner);

get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_parseFromJSON(cJSON *get_order_detail_200_response_ips_innerJSON);

cJSON *get_order_detail_200_response_ips_inner_convertToJSON(get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner);

#endif /* _get_order_detail_200_response_ips_inner_H_ */

