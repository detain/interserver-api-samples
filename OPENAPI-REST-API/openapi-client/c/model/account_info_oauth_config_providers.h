/*
 * account_info_oauth_config_providers.h
 *
 * Map of OAuth providers and their linked status on the account.
 */

#ifndef _account_info_oauth_config_providers_H_
#define _account_info_oauth_config_providers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_oauth_config_providers_t account_info_oauth_config_providers_t;

#include "account_info_oauth_config_providers_value.h"



typedef struct account_info_oauth_config_providers_t {

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_oauth_config_providers_t;

__attribute__((deprecated)) account_info_oauth_config_providers_t *account_info_oauth_config_providers_create(
);

void account_info_oauth_config_providers_free(account_info_oauth_config_providers_t *account_info_oauth_config_providers);

account_info_oauth_config_providers_t *account_info_oauth_config_providers_parseFromJSON(cJSON *account_info_oauth_config_providersJSON);

cJSON *account_info_oauth_config_providers_convertToJSON(account_info_oauth_config_providers_t *account_info_oauth_config_providers);

#endif /* _account_info_oauth_config_providers_H_ */

