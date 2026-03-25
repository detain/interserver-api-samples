/*
 * servers_cancel_200_response.h
 *
 * 
 */

#ifndef _servers_cancel_200_response_H_
#define _servers_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct servers_cancel_200_response_t servers_cancel_200_response_t;




typedef struct servers_cancel_200_response_t {
    int *success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} servers_cancel_200_response_t;

__attribute__((deprecated)) servers_cancel_200_response_t *servers_cancel_200_response_create(
    int *success,
    char *text
);

void servers_cancel_200_response_free(servers_cancel_200_response_t *servers_cancel_200_response);

servers_cancel_200_response_t *servers_cancel_200_response_parseFromJSON(cJSON *servers_cancel_200_responseJSON);

cJSON *servers_cancel_200_response_convertToJSON(servers_cancel_200_response_t *servers_cancel_200_response);

#endif /* _servers_cancel_200_response_H_ */

