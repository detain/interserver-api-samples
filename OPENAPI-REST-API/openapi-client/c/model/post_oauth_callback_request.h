/*
 * post_oauth_callback_request.h
 *
 * 
 */

#ifndef _post_oauth_callback_request_H_
#define _post_oauth_callback_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_oauth_callback_request_t post_oauth_callback_request_t;




typedef struct post_oauth_callback_request_t {
    char *provider; // string

    int _library_owned; // Is the library responsible for freeing this object?
} post_oauth_callback_request_t;

__attribute__((deprecated)) post_oauth_callback_request_t *post_oauth_callback_request_create(
    char *provider
);

void post_oauth_callback_request_free(post_oauth_callback_request_t *post_oauth_callback_request);

post_oauth_callback_request_t *post_oauth_callback_request_parseFromJSON(cJSON *post_oauth_callback_requestJSON);

cJSON *post_oauth_callback_request_convertToJSON(post_oauth_callback_request_t *post_oauth_callback_request);

#endif /* _post_oauth_callback_request_H_ */

