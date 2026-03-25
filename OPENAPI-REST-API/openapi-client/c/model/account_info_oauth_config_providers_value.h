/*
 * account_info_oauth_config_providers_value.h
 *
 * 
 */

#ifndef _account_info_oauth_config_providers_value_H_
#define _account_info_oauth_config_providers_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_oauth_config_providers_value_t account_info_oauth_config_providers_value_t;




typedef struct account_info_oauth_config_providers_value_t {
    int *enabled; //boolean
    int *linked; //boolean
    char *account; // string
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_oauth_config_providers_value_t;

__attribute__((deprecated)) account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_create(
    int *enabled,
    int *linked,
    char *account,
    char *url
);

void account_info_oauth_config_providers_value_free(account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value);

account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_parseFromJSON(cJSON *account_info_oauth_config_providers_valueJSON);

cJSON *account_info_oauth_config_providers_value_convertToJSON(account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value);

#endif /* _account_info_oauth_config_providers_value_H_ */

