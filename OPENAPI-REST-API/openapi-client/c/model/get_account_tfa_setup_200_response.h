/*
 * get_account_tfa_setup_200_response.h
 *
 * 
 */

#ifndef _get_account_tfa_setup_200_response_H_
#define _get_account_tfa_setup_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_account_tfa_setup_200_response_t get_account_tfa_setup_200_response_t;




typedef struct get_account_tfa_setup_200_response_t {
    char *_2fa_google_key; // string
    char *_2fa_google_split; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_account_tfa_setup_200_response_t;

__attribute__((deprecated)) get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_create(
    char *_2fa_google_key,
    char *_2fa_google_split
);

void get_account_tfa_setup_200_response_free(get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response);

get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_parseFromJSON(cJSON *get_account_tfa_setup_200_responseJSON);

cJSON *get_account_tfa_setup_200_response_convertToJSON(get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response);

#endif /* _get_account_tfa_setup_200_response_H_ */

