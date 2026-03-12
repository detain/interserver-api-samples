/*
 * place_buy_now_server_request.h
 *
 * 
 */

#ifndef _place_buy_now_server_request_H_
#define _place_buy_now_server_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct place_buy_now_server_request_t place_buy_now_server_request_t;




typedef struct place_buy_now_server_request_t {
    double server_id; //numeric
    char *server_hostname; // string
    char *server_root_password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} place_buy_now_server_request_t;

__attribute__((deprecated)) place_buy_now_server_request_t *place_buy_now_server_request_create(
    double server_id,
    char *server_hostname,
    char *server_root_password
);

void place_buy_now_server_request_free(place_buy_now_server_request_t *place_buy_now_server_request);

place_buy_now_server_request_t *place_buy_now_server_request_parseFromJSON(cJSON *place_buy_now_server_requestJSON);

cJSON *place_buy_now_server_request_convertToJSON(place_buy_now_server_request_t *place_buy_now_server_request);

#endif /* _place_buy_now_server_request_H_ */

