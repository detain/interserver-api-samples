/*
 * buy_it_now_server_order_200_response_cp_inner.h
 *
 * 
 */

#ifndef _buy_it_now_server_order_200_response_cp_inner_H_
#define _buy_it_now_server_order_200_response_cp_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buy_it_now_server_order_200_response_cp_inner_t buy_it_now_server_order_200_response_cp_inner_t;




typedef struct buy_it_now_server_order_200_response_cp_inner_t {
    char *id; // string
    char *short_desc; // string
    char *long_desc; // string
    char *os_type; // string
    char *monthly_price; // string

    int _library_owned; // Is the library responsible for freeing this object?
} buy_it_now_server_order_200_response_cp_inner_t;

__attribute__((deprecated)) buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_create(
    char *id,
    char *short_desc,
    char *long_desc,
    char *os_type,
    char *monthly_price
);

void buy_it_now_server_order_200_response_cp_inner_free(buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner);

buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_parseFromJSON(cJSON *buy_it_now_server_order_200_response_cp_innerJSON);

cJSON *buy_it_now_server_order_200_response_cp_inner_convertToJSON(buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner);

#endif /* _buy_it_now_server_order_200_response_cp_inner_H_ */

