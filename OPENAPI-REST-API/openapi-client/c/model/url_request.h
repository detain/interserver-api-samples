/*
 * url_request.h
 *
 * URL
 */

#ifndef _url_request_H_
#define _url_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct url_request_t url_request_t;




typedef struct url_request_t {
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} url_request_t;

__attribute__((deprecated)) url_request_t *url_request_create(
    char *url
);

void url_request_free(url_request_t *url_request);

url_request_t *url_request_parseFromJSON(cJSON *url_requestJSON);

cJSON *url_request_convertToJSON(url_request_t *url_request);

#endif /* _url_request_H_ */

