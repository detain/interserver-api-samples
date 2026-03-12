/*
 * update_account_tfa_request.h
 *
 * 
 */

#ifndef _update_account_tfa_request_H_
#define _update_account_tfa_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_account_tfa_request_t update_account_tfa_request_t;




typedef struct update_account_tfa_request_t {
    char *_2fa_google_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} update_account_tfa_request_t;

__attribute__((deprecated)) update_account_tfa_request_t *update_account_tfa_request_create(
    char *_2fa_google_code
);

void update_account_tfa_request_free(update_account_tfa_request_t *update_account_tfa_request);

update_account_tfa_request_t *update_account_tfa_request_parseFromJSON(cJSON *update_account_tfa_requestJSON);

cJSON *update_account_tfa_request_convertToJSON(update_account_tfa_request_t *update_account_tfa_request);

#endif /* _update_account_tfa_request_H_ */

