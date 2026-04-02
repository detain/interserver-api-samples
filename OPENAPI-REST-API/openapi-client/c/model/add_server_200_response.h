/*
 * add_server_200_response.h
 *
 * 
 */

#ifndef _add_server_200_response_H_
#define _add_server_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct add_server_200_response_t add_server_200_response_t;




typedef struct add_server_200_response_t {
    char *text; // string
    int *invoice; //numeric
    int *order; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} add_server_200_response_t;

__attribute__((deprecated)) add_server_200_response_t *add_server_200_response_create(
    char *text,
    int *invoice,
    int *order
);

void add_server_200_response_free(add_server_200_response_t *add_server_200_response);

add_server_200_response_t *add_server_200_response_parseFromJSON(cJSON *add_server_200_responseJSON);

cJSON *add_server_200_response_convertToJSON(add_server_200_response_t *add_server_200_response);

#endif /* _add_server_200_response_H_ */

