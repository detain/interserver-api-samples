/*
 * success_text_response.h
 *
 * Response with success flag and text description.
 */

#ifndef _success_text_response_H_
#define _success_text_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct success_text_response_t success_text_response_t;




typedef struct success_text_response_t {
    int success; //boolean
    char *text; // string
    char *action; // string

    int _library_owned; // Is the library responsible for freeing this object?
} success_text_response_t;

__attribute__((deprecated)) success_text_response_t *success_text_response_create(
    int success,
    char *text,
    char *action
);

void success_text_response_free(success_text_response_t *success_text_response);

success_text_response_t *success_text_response_parseFromJSON(cJSON *success_text_responseJSON);

cJSON *success_text_response_convertToJSON(success_text_response_t *success_text_response);

#endif /* _success_text_response_H_ */

