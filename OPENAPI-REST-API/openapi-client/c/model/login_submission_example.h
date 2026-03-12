/*
 * login_submission_example.h
 *
 * The data to submit in the login request.
 */

#ifndef _login_submission_example_H_
#define _login_submission_example_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_submission_example_t login_submission_example_t;

#include "login_submission_example_g_recaptcha_response.h"



typedef struct login_submission_example_t {
    char *login; // string
    char *passwd; // string
    char *remember; // string
    struct login_submission_example_g_recaptcha_response_t *g_recaptcha_response; //model
    char *tfa; // string

    int _library_owned; // Is the library responsible for freeing this object?
} login_submission_example_t;

__attribute__((deprecated)) login_submission_example_t *login_submission_example_create(
    char *login,
    char *passwd,
    char *remember,
    login_submission_example_g_recaptcha_response_t *g_recaptcha_response,
    char *tfa
);

void login_submission_example_free(login_submission_example_t *login_submission_example);

login_submission_example_t *login_submission_example_parseFromJSON(cJSON *login_submission_exampleJSON);

cJSON *login_submission_example_convertToJSON(login_submission_example_t *login_submission_example);

#endif /* _login_submission_example_H_ */

