/*
 * servers_buy_now_error.h
 *
 * Error response when a buy-it-now server order fails validation.
 */

#ifndef _servers_buy_now_error_H_
#define _servers_buy_now_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct servers_buy_now_error_t servers_buy_now_error_t;




typedef struct servers_buy_now_error_t {
    int *success; //boolean
    char *text; // string
    list_t *errors; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} servers_buy_now_error_t;

__attribute__((deprecated)) servers_buy_now_error_t *servers_buy_now_error_create(
    int *success,
    char *text,
    list_t *errors
);

void servers_buy_now_error_free(servers_buy_now_error_t *servers_buy_now_error);

servers_buy_now_error_t *servers_buy_now_error_parseFromJSON(cJSON *servers_buy_now_errorJSON);

cJSON *servers_buy_now_error_convertToJSON(servers_buy_now_error_t *servers_buy_now_error);

#endif /* _servers_buy_now_error_H_ */

