/*
 * buy_it_now_server_order_200_response.h
 *
 * 
 */

#ifndef _buy_it_now_server_order_200_response_H_
#define _buy_it_now_server_order_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buy_it_now_server_order_200_response_t buy_it_now_server_order_200_response_t;

#include "buy_it_now_server_order_200_response_bandwidth_inner.h"
#include "buy_it_now_server_order_200_response_cp_inner.h"
#include "buy_it_now_server_order_200_response_ips_inner.h"
#include "buy_it_now_server_order_200_response_os_inner.h"
#include "buy_it_now_server_order_200_response_raid_inner.h"



typedef struct buy_it_now_server_order_200_response_t {
    list_t *bandwidth; //nonprimitive container
    list_t *ips; //nonprimitive container
    list_t *os; //nonprimitive container
    list_t *cp; //nonprimitive container
    list_t *raid; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} buy_it_now_server_order_200_response_t;

__attribute__((deprecated)) buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_create(
    list_t *bandwidth,
    list_t *ips,
    list_t *os,
    list_t *cp,
    list_t *raid
);

void buy_it_now_server_order_200_response_free(buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response);

buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response_parseFromJSON(cJSON *buy_it_now_server_order_200_responseJSON);

cJSON *buy_it_now_server_order_200_response_convertToJSON(buy_it_now_server_order_200_response_t *buy_it_now_server_order_200_response);

#endif /* _buy_it_now_server_order_200_response_H_ */

