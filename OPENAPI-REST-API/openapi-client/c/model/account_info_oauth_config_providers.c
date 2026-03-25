#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_oauth_config_providers.h"



static account_info_oauth_config_providers_t *account_info_oauth_config_providers_create_internal(
    ) {
    account_info_oauth_config_providers_t *account_info_oauth_config_providers_local_var = malloc(sizeof(account_info_oauth_config_providers_t));
    if (!account_info_oauth_config_providers_local_var) {
        return NULL;
    }
    memset(account_info_oauth_config_providers_local_var, 0, sizeof(account_info_oauth_config_providers_t));
    account_info_oauth_config_providers_local_var->_library_owned = 1;
    return account_info_oauth_config_providers_local_var;
}

__attribute__((deprecated)) account_info_oauth_config_providers_t *account_info_oauth_config_providers_create(
    ) {
    account_info_oauth_config_providers_t *result = account_info_oauth_config_providers_create_internal (
        );
    if (!result) {
    }
    return result;
}

void account_info_oauth_config_providers_free(account_info_oauth_config_providers_t *account_info_oauth_config_providers) {
    if(NULL == account_info_oauth_config_providers){
        return ;
    }
    if(account_info_oauth_config_providers->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_oauth_config_providers_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_info_oauth_config_providers);
}

cJSON *account_info_oauth_config_providers_convertToJSON(account_info_oauth_config_providers_t *account_info_oauth_config_providers) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_oauth_config_providers_t *account_info_oauth_config_providers_parseFromJSON(cJSON *account_info_oauth_config_providersJSON){

    account_info_oauth_config_providers_t *account_info_oauth_config_providers_local_var = NULL;



    account_info_oauth_config_providers_local_var = account_info_oauth_config_providers_create_internal (
        );

    if (!account_info_oauth_config_providers_local_var) {
        goto end;
    }

    return account_info_oauth_config_providers_local_var;
end:
    return NULL;

}
