/*
 * login_info.h
 *
 * Basic information useful for rendering a login page.
 */

#ifndef _login_info_H_
#define _login_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_info_t login_info_t;

#include "login_service_counts.h"



typedef struct login_info_t {
    char *captcha; // string
    struct login_service_counts_t *counts; //model
    char *logo; // string
    char *language; // string

    int _library_owned; // Is the library responsible for freeing this object?
} login_info_t;

__attribute__((deprecated)) login_info_t *login_info_create(
    char *captcha,
    login_service_counts_t *counts,
    char *logo,
    char *language
);

void login_info_free(login_info_t *login_info);

login_info_t *login_info_parseFromJSON(cJSON *login_infoJSON);

cJSON *login_info_convertToJSON(login_info_t *login_info);

#endif /* _login_info_H_ */

