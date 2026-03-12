/*
 * get_oauth_redirect_200_response.h
 *
 * 
 */

#ifndef _get_oauth_redirect_200_response_H_
#define _get_oauth_redirect_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_oauth_redirect_200_response_t get_oauth_redirect_200_response_t;




typedef struct get_oauth_redirect_200_response_t {
    char *redirect_url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_oauth_redirect_200_response_t;

__attribute__((deprecated)) get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_create(
    char *redirect_url
);

void get_oauth_redirect_200_response_free(get_oauth_redirect_200_response_t *get_oauth_redirect_200_response);

get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_parseFromJSON(cJSON *get_oauth_redirect_200_responseJSON);

cJSON *get_oauth_redirect_200_response_convertToJSON(get_oauth_redirect_200_response_t *get_oauth_redirect_200_response);

#endif /* _get_oauth_redirect_200_response_H_ */

