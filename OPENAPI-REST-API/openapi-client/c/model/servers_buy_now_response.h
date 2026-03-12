/*
 * servers_buy_now_response.h
 *
 * Success response after placing a buy-it-now dedicated server order.
 */

#ifndef _servers_buy_now_response_H_
#define _servers_buy_now_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct servers_buy_now_response_t servers_buy_now_response_t;

#include "servers_buy_now_response_order_details.h"



typedef struct servers_buy_now_response_t {
    int success; //boolean
    char *text; // string
    struct servers_buy_now_response_order_details_t *order_details; //model

    int _library_owned; // Is the library responsible for freeing this object?
} servers_buy_now_response_t;

__attribute__((deprecated)) servers_buy_now_response_t *servers_buy_now_response_create(
    int success,
    char *text,
    servers_buy_now_response_order_details_t *order_details
);

void servers_buy_now_response_free(servers_buy_now_response_t *servers_buy_now_response);

servers_buy_now_response_t *servers_buy_now_response_parseFromJSON(cJSON *servers_buy_now_responseJSON);

cJSON *servers_buy_now_response_convertToJSON(servers_buy_now_response_t *servers_buy_now_response);

#endif /* _servers_buy_now_response_H_ */

