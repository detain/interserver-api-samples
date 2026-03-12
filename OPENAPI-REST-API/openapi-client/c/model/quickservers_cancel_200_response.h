/*
 * quickservers_cancel_200_response.h
 *
 * 
 */

#ifndef _quickservers_cancel_200_response_H_
#define _quickservers_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickservers_cancel_200_response_t quickservers_cancel_200_response_t;




typedef struct quickservers_cancel_200_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickservers_cancel_200_response_t;

__attribute__((deprecated)) quickservers_cancel_200_response_t *quickservers_cancel_200_response_create(
    int success,
    char *text
);

void quickservers_cancel_200_response_free(quickservers_cancel_200_response_t *quickservers_cancel_200_response);

quickservers_cancel_200_response_t *quickservers_cancel_200_response_parseFromJSON(cJSON *quickservers_cancel_200_responseJSON);

cJSON *quickservers_cancel_200_response_convertToJSON(quickservers_cancel_200_response_t *quickservers_cancel_200_response);

#endif /* _quickservers_cancel_200_response_H_ */

