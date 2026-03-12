/*
 * password_request.h
 *
 * Request containing a password
 */

#ifndef _password_request_H_
#define _password_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct password_request_t password_request_t;




typedef struct password_request_t {
    char *password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} password_request_t;

__attribute__((deprecated)) password_request_t *password_request_create(
    char *password
);

void password_request_free(password_request_t *password_request);

password_request_t *password_request_parseFromJSON(cJSON *password_requestJSON);

cJSON *password_request_convertToJSON(password_request_t *password_request);

#endif /* _password_request_H_ */

