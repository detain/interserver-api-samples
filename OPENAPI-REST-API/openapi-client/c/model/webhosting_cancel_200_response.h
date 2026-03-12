/*
 * webhosting_cancel_200_response.h
 *
 * 
 */

#ifndef _webhosting_cancel_200_response_H_
#define _webhosting_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhosting_cancel_200_response_t webhosting_cancel_200_response_t;




typedef struct webhosting_cancel_200_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} webhosting_cancel_200_response_t;

__attribute__((deprecated)) webhosting_cancel_200_response_t *webhosting_cancel_200_response_create(
    int success,
    char *text
);

void webhosting_cancel_200_response_free(webhosting_cancel_200_response_t *webhosting_cancel_200_response);

webhosting_cancel_200_response_t *webhosting_cancel_200_response_parseFromJSON(cJSON *webhosting_cancel_200_responseJSON);

cJSON *webhosting_cancel_200_response_convertToJSON(webhosting_cancel_200_response_t *webhosting_cancel_200_response);

#endif /* _webhosting_cancel_200_response_H_ */

