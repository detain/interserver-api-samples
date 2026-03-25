/*
 * patch_oauth_two_factor_200_response.h
 *
 * 
 */

#ifndef _patch_oauth_two_factor_200_response_H_
#define _patch_oauth_two_factor_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct patch_oauth_two_factor_200_response_t patch_oauth_two_factor_200_response_t;




typedef struct patch_oauth_two_factor_200_response_t {
    int *login; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} patch_oauth_two_factor_200_response_t;

__attribute__((deprecated)) patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_create(
    int *login
);

void patch_oauth_two_factor_200_response_free(patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response);

patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_parseFromJSON(cJSON *patch_oauth_two_factor_200_responseJSON);

cJSON *patch_oauth_two_factor_200_response_convertToJSON(patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response);

#endif /* _patch_oauth_two_factor_200_response_H_ */

