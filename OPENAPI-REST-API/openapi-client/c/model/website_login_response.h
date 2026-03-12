/*
 * website_login_response.h
 *
 * Response from a website login request.
 */

#ifndef _website_login_response_H_
#define _website_login_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_login_response_t website_login_response_t;




typedef struct website_login_response_t {
    char *type; // string
    char *location; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_login_response_t;

__attribute__((deprecated)) website_login_response_t *website_login_response_create(
    char *type,
    char *location
);

void website_login_response_free(website_login_response_t *website_login_response);

website_login_response_t *website_login_response_parseFromJSON(cJSON *website_login_responseJSON);

cJSON *website_login_response_convertToJSON(website_login_response_t *website_login_response);

#endif /* _website_login_response_H_ */

