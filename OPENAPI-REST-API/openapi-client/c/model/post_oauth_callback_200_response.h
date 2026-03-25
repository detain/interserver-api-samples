/*
 * post_oauth_callback_200_response.h
 *
 * 
 */

#ifndef _post_oauth_callback_200_response_H_
#define _post_oauth_callback_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_oauth_callback_200_response_t post_oauth_callback_200_response_t;




typedef struct post_oauth_callback_200_response_t {
    int *login; //boolean
    int *signup; //boolean
    int *linked; //boolean
    int *account_id; //numeric
    char *error_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} post_oauth_callback_200_response_t;

__attribute__((deprecated)) post_oauth_callback_200_response_t *post_oauth_callback_200_response_create(
    int *login,
    int *signup,
    int *linked,
    int *account_id,
    char *error_code
);

void post_oauth_callback_200_response_free(post_oauth_callback_200_response_t *post_oauth_callback_200_response);

post_oauth_callback_200_response_t *post_oauth_callback_200_response_parseFromJSON(cJSON *post_oauth_callback_200_responseJSON);

cJSON *post_oauth_callback_200_response_convertToJSON(post_oauth_callback_200_response_t *post_oauth_callback_200_response);

#endif /* _post_oauth_callback_200_response_H_ */

