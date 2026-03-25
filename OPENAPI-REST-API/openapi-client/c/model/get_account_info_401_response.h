/*
 * get_account_info_401_response.h
 *
 * 
 */

#ifndef _get_account_info_401_response_H_
#define _get_account_info_401_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_account_info_401_response_t get_account_info_401_response_t;




typedef struct get_account_info_401_response_t {
    int *code; //numeric
    char *message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_account_info_401_response_t;

__attribute__((deprecated)) get_account_info_401_response_t *get_account_info_401_response_create(
    int *code,
    char *message
);

void get_account_info_401_response_free(get_account_info_401_response_t *get_account_info_401_response);

get_account_info_401_response_t *get_account_info_401_response_parseFromJSON(cJSON *get_account_info_401_responseJSON);

cJSON *get_account_info_401_response_convertToJSON(get_account_info_401_response_t *get_account_info_401_response);

#endif /* _get_account_info_401_response_H_ */

