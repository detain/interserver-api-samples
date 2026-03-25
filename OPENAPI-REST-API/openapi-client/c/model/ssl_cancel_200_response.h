/*
 * ssl_cancel_200_response.h
 *
 * 
 */

#ifndef _ssl_cancel_200_response_H_
#define _ssl_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ssl_cancel_200_response_t ssl_cancel_200_response_t;




typedef struct ssl_cancel_200_response_t {
    int *success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ssl_cancel_200_response_t;

__attribute__((deprecated)) ssl_cancel_200_response_t *ssl_cancel_200_response_create(
    int *success,
    char *text
);

void ssl_cancel_200_response_free(ssl_cancel_200_response_t *ssl_cancel_200_response);

ssl_cancel_200_response_t *ssl_cancel_200_response_parseFromJSON(cJSON *ssl_cancel_200_responseJSON);

cJSON *ssl_cancel_200_response_convertToJSON(ssl_cancel_200_response_t *ssl_cancel_200_response);

#endif /* _ssl_cancel_200_response_H_ */

