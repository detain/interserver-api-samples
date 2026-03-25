/*
 * patch_oauth_two_factor_request.h
 *
 * 
 */

#ifndef _patch_oauth_two_factor_request_H_
#define _patch_oauth_two_factor_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct patch_oauth_two_factor_request_t patch_oauth_two_factor_request_t;




typedef struct patch_oauth_two_factor_request_t {
    int *account_id; //numeric
    char *code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} patch_oauth_two_factor_request_t;

__attribute__((deprecated)) patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_create(
    int *account_id,
    char *code
);

void patch_oauth_two_factor_request_free(patch_oauth_two_factor_request_t *patch_oauth_two_factor_request);

patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_parseFromJSON(cJSON *patch_oauth_two_factor_requestJSON);

cJSON *patch_oauth_two_factor_request_convertToJSON(patch_oauth_two_factor_request_t *patch_oauth_two_factor_request);

#endif /* _patch_oauth_two_factor_request_H_ */

