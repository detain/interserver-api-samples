/*
 * account_info_oauthproviders.h
 *
 * 
 */

#ifndef _account_info_oauthproviders_H_
#define _account_info_oauthproviders_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_oauthproviders_t account_info_oauthproviders_t;

#include "account_info_oauth_config_providers.h"
#include "any_type.h"



typedef struct account_info_oauthproviders_t {

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_oauthproviders_t;

__attribute__((deprecated)) account_info_oauthproviders_t *account_info_oauthproviders_create(
);

void account_info_oauthproviders_free(account_info_oauthproviders_t *account_info_oauthproviders);

account_info_oauthproviders_t *account_info_oauthproviders_parseFromJSON(cJSON *account_info_oauthprovidersJSON);

cJSON *account_info_oauthproviders_convertToJSON(account_info_oauthproviders_t *account_info_oauthproviders);

#endif /* _account_info_oauthproviders_H_ */

