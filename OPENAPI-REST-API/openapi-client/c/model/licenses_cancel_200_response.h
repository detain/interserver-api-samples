/*
 * licenses_cancel_200_response.h
 *
 * 
 */

#ifndef _licenses_cancel_200_response_H_
#define _licenses_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_cancel_200_response_t licenses_cancel_200_response_t;




typedef struct licenses_cancel_200_response_t {
    int *success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_cancel_200_response_t;

__attribute__((deprecated)) licenses_cancel_200_response_t *licenses_cancel_200_response_create(
    int *success,
    char *text
);

void licenses_cancel_200_response_free(licenses_cancel_200_response_t *licenses_cancel_200_response);

licenses_cancel_200_response_t *licenses_cancel_200_response_parseFromJSON(cJSON *licenses_cancel_200_responseJSON);

cJSON *licenses_cancel_200_response_convertToJSON(licenses_cancel_200_response_t *licenses_cancel_200_response);

#endif /* _licenses_cancel_200_response_H_ */

