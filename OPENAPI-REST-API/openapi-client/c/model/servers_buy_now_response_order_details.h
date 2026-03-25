/*
 * servers_buy_now_response_order_details.h
 *
 * Details of the placed order.
 */

#ifndef _servers_buy_now_response_order_details_H_
#define _servers_buy_now_response_order_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct servers_buy_now_response_order_details_t servers_buy_now_response_order_details_t;




typedef struct servers_buy_now_response_order_details_t {
    double *service_id; //numeric
    double *invoice_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} servers_buy_now_response_order_details_t;

__attribute__((deprecated)) servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_create(
    double *service_id,
    double *invoice_id
);

void servers_buy_now_response_order_details_free(servers_buy_now_response_order_details_t *servers_buy_now_response_order_details);

servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_parseFromJSON(cJSON *servers_buy_now_response_order_detailsJSON);

cJSON *servers_buy_now_response_order_details_convertToJSON(servers_buy_now_response_order_details_t *servers_buy_now_response_order_details);

#endif /* _servers_buy_now_response_order_details_H_ */

