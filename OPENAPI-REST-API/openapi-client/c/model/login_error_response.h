/*
 * login_error_response.h
 *
 * Error resposne during login indicating further action.
 */

#ifndef _login_error_response_H_
#define _login_error_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_error_response_t login_error_response_t;




typedef struct login_error_response_t {
    char *message; // string
    char *field; // string

    int _library_owned; // Is the library responsible for freeing this object?
} login_error_response_t;

__attribute__((deprecated)) login_error_response_t *login_error_response_create(
    char *message,
    char *field
);

void login_error_response_free(login_error_response_t *login_error_response);

login_error_response_t *login_error_response_parseFromJSON(cJSON *login_error_responseJSON);

cJSON *login_error_response_convertToJSON(login_error_response_t *login_error_response);

#endif /* _login_error_response_H_ */

