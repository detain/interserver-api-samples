/*
 * text_response.h
 *
 * Text Response Object
 */

#ifndef _text_response_H_
#define _text_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct text_response_t text_response_t;




typedef struct text_response_t {
    char *text; // string
    char *message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} text_response_t;

__attribute__((deprecated)) text_response_t *text_response_create(
    char *text,
    char *message
);

void text_response_free(text_response_t *text_response);

text_response_t *text_response_parseFromJSON(cJSON *text_responseJSON);

cJSON *text_response_convertToJSON(text_response_t *text_response);

#endif /* _text_response_H_ */

