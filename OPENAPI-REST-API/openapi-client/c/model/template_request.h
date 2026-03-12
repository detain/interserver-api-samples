/*
 * template_request.h
 *
 * VPS OS Template Request
 */

#ifndef _template_request_H_
#define _template_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct template_request_t template_request_t;




typedef struct template_request_t {
    char *_template; // string
    char *local_password; // string
    char *password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} template_request_t;

__attribute__((deprecated)) template_request_t *template_request_create(
    char *_template,
    char *local_password,
    char *password
);

void template_request_free(template_request_t *template_request);

template_request_t *template_request_parseFromJSON(cJSON *template_requestJSON);

cJSON *template_request_convertToJSON(template_request_t *template_request);

#endif /* _template_request_H_ */

