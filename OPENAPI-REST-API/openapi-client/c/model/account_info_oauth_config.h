/*
 * account_info_oauth_config.h
 *
 * OAuth integration configuration including callback URL and available providers.
 */

#ifndef _account_info_oauth_config_H_
#define _account_info_oauth_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_oauth_config_t account_info_oauth_config_t;

#include "account_info_oauth_config_providers.h"



typedef struct account_info_oauth_config_t {
    char *callback; // string
    account_info_oauth_config_providers_t *providers; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_oauth_config_t;

__attribute__((deprecated)) account_info_oauth_config_t *account_info_oauth_config_create(
    char *callback,
    account_info_oauth_config_providers_t *providers
);

void account_info_oauth_config_free(account_info_oauth_config_t *account_info_oauth_config);

account_info_oauth_config_t *account_info_oauth_config_parseFromJSON(cJSON *account_info_oauth_configJSON);

cJSON *account_info_oauth_config_convertToJSON(account_info_oauth_config_t *account_info_oauth_config);

#endif /* _account_info_oauth_config_H_ */

