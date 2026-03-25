/*
 * login_submission_example_g_recaptcha_response.h
 *
 * 
 */

#ifndef _login_submission_example_g_recaptcha_response_H_
#define _login_submission_example_g_recaptcha_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_submission_example_g_recaptcha_response_t login_submission_example_g_recaptcha_response_t;

#include "login_submission_example_g_recaptcha_response_dep.h"



typedef struct login_submission_example_g_recaptcha_response_t {
    int *__v_is_shallow; //boolean
    struct login_submission_example_g_recaptcha_response_dep_t *dep; //model
    int *__v_is_ref; //boolean
    char *_raw_value; // string
    char *_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} login_submission_example_g_recaptcha_response_t;

__attribute__((deprecated)) login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_create(
    int *__v_is_shallow,
    login_submission_example_g_recaptcha_response_dep_t *dep,
    int *__v_is_ref,
    char *_raw_value,
    char *_value
);

void login_submission_example_g_recaptcha_response_free(login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response);

login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_parseFromJSON(cJSON *login_submission_example_g_recaptcha_responseJSON);

cJSON *login_submission_example_g_recaptcha_response_convertToJSON(login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response);

#endif /* _login_submission_example_g_recaptcha_response_H_ */

