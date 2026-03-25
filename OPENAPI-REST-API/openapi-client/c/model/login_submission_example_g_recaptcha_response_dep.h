/*
 * login_submission_example_g_recaptcha_response_dep.h
 *
 * 
 */

#ifndef _login_submission_example_g_recaptcha_response_dep_H_
#define _login_submission_example_g_recaptcha_response_dep_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_submission_example_g_recaptcha_response_dep_t login_submission_example_g_recaptcha_response_dep_t;




typedef struct login_submission_example_g_recaptcha_response_dep_t {
    int *w; //numeric
    int *n; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} login_submission_example_g_recaptcha_response_dep_t;

__attribute__((deprecated)) login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_create(
    int *w,
    int *n
);

void login_submission_example_g_recaptcha_response_dep_free(login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep);

login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_parseFromJSON(cJSON *login_submission_example_g_recaptcha_response_depJSON);

cJSON *login_submission_example_g_recaptcha_response_dep_convertToJSON(login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep);

#endif /* _login_submission_example_g_recaptcha_response_dep_H_ */

