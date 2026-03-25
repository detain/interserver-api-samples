/*
 * login_success_response.h
 *
 * The response from a successful login.
 */

#ifndef _login_success_response_H_
#define _login_success_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_success_response_t login_success_response_t;




typedef struct login_success_response_t {
    char *session_id; // string
    int *account_id; //numeric
    char *account_lid; // string
    char *ima; // string
    char *gravatar; // string

    int _library_owned; // Is the library responsible for freeing this object?
} login_success_response_t;

__attribute__((deprecated)) login_success_response_t *login_success_response_create(
    char *session_id,
    int *account_id,
    char *account_lid,
    char *ima,
    char *gravatar
);

void login_success_response_free(login_success_response_t *login_success_response);

login_success_response_t *login_success_response_parseFromJSON(cJSON *login_success_responseJSON);

cJSON *login_success_response_convertToJSON(login_success_response_t *login_success_response);

#endif /* _login_success_response_H_ */

