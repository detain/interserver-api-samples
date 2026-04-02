/*
 * service_order_post_response.h
 *
 * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 */

#ifndef _service_order_post_response_H_
#define _service_order_post_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_order_post_response_t service_order_post_response_t;




typedef struct service_order_post_response_t {
    int *_continue; //boolean
    list_t *errors; //primitive container
    char *total_cost; // string
    char *iid; // string
    list_t *iids; //primitive container
    list_t *real_iids; //primitive container
    int *service_id; //numeric
    char *invoice_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} service_order_post_response_t;

__attribute__((deprecated)) service_order_post_response_t *service_order_post_response_create(
    int *_continue,
    list_t *errors,
    char *total_cost,
    char *iid,
    list_t *iids,
    list_t *real_iids,
    int *service_id,
    char *invoice_description
);

void service_order_post_response_free(service_order_post_response_t *service_order_post_response);

service_order_post_response_t *service_order_post_response_parseFromJSON(cJSON *service_order_post_responseJSON);

cJSON *service_order_post_response_convertToJSON(service_order_post_response_t *service_order_post_response);

#endif /* _service_order_post_response_H_ */

