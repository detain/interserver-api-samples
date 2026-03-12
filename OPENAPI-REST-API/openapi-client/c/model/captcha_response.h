/*
 * captcha_response.h
 *
 * A base-64 encoded captcha image.
 */

#ifndef _captcha_response_H_
#define _captcha_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct captcha_response_t captcha_response_t;




typedef struct captcha_response_t {
    char *captcha; // string

    int _library_owned; // Is the library responsible for freeing this object?
} captcha_response_t;

__attribute__((deprecated)) captcha_response_t *captcha_response_create(
    char *captcha
);

void captcha_response_free(captcha_response_t *captcha_response);

captcha_response_t *captcha_response_parseFromJSON(cJSON *captcha_responseJSON);

cJSON *captcha_response_convertToJSON(captcha_response_t *captcha_response);

#endif /* _captcha_response_H_ */

