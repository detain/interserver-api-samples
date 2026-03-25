#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_oauth_config.h"



static account_info_oauth_config_t *account_info_oauth_config_create_internal(
    char *callback,
    account_info_oauth_config_providers_t *providers
    ) {
    account_info_oauth_config_t *account_info_oauth_config_local_var = malloc(sizeof(account_info_oauth_config_t));
    if (!account_info_oauth_config_local_var) {
        return NULL;
    }
    memset(account_info_oauth_config_local_var, 0, sizeof(account_info_oauth_config_t));
    account_info_oauth_config_local_var->_library_owned = 1;
    account_info_oauth_config_local_var->callback = callback;
    account_info_oauth_config_local_var->providers = providers;
    return account_info_oauth_config_local_var;
}

__attribute__((deprecated)) account_info_oauth_config_t *account_info_oauth_config_create(
    char *callback,
    account_info_oauth_config_providers_t *providers
    ) {
    account_info_oauth_config_t *result = account_info_oauth_config_create_internal (
        callback,
        providers
        );
    if (!result) {
    }
    return result;
}

void account_info_oauth_config_free(account_info_oauth_config_t *account_info_oauth_config) {
    if(NULL == account_info_oauth_config){
        return ;
    }
    if(account_info_oauth_config->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_oauth_config_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_oauth_config->callback) {
        free(account_info_oauth_config->callback);
        account_info_oauth_config->callback = NULL;
    }
    if (account_info_oauth_config->providers) {
        account_info_oauth_config_providers_free(account_info_oauth_config->providers);
        account_info_oauth_config->providers = NULL;
    }
    free(account_info_oauth_config);
}

cJSON *account_info_oauth_config_convertToJSON(account_info_oauth_config_t *account_info_oauth_config) {
    cJSON *item = cJSON_CreateObject();

    // account_info_oauth_config->callback
    if (!account_info_oauth_config->callback) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "callback", account_info_oauth_config->callback) == NULL) {
    goto fail; //String
    }


    // account_info_oauth_config->providers
    if (!account_info_oauth_config->providers) {
        goto fail;
    }
    cJSON *providers_local_JSON = account_info_oauth_config_providers_convertToJSON(account_info_oauth_config->providers);
    if(providers_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "providers", providers_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_oauth_config_t *account_info_oauth_config_parseFromJSON(cJSON *account_info_oauth_configJSON){

    account_info_oauth_config_t *account_info_oauth_config_local_var = NULL;

    char *callback_local_str = NULL;

    // define the local variable for account_info_oauth_config->providers
    account_info_oauth_config_providers_t *providers_local_nonprim = NULL;

    // account_info_oauth_config->callback
    cJSON *callback = cJSON_GetObjectItemCaseSensitive(account_info_oauth_configJSON, "callback");
    if (cJSON_IsNull(callback)) {
        callback = NULL;
    }
    if (!callback) {
        goto end;
    }

    
    if(!cJSON_IsString(callback))
    {
    goto end; //String
    }

    // account_info_oauth_config->providers
    cJSON *providers = cJSON_GetObjectItemCaseSensitive(account_info_oauth_configJSON, "providers");
    if (cJSON_IsNull(providers)) {
        providers = NULL;
    }
    if (!providers) {
        goto end;
    }

    
    providers_local_nonprim = account_info_oauth_config_providers_parseFromJSON(providers); //custom


    if (callback && !cJSON_IsNull(callback)) callback_local_str = strdup(callback->valuestring);

    account_info_oauth_config_local_var = account_info_oauth_config_create_internal (
        callback_local_str,
        providers_local_nonprim
        );

    if (!account_info_oauth_config_local_var) {
        goto end;
    }

    return account_info_oauth_config_local_var;
end:
    if (callback_local_str) {
        free(callback_local_str);
        callback_local_str = NULL;
    }
    if (providers_local_nonprim) {
        account_info_oauth_config_providers_free(providers_local_nonprim);
        providers_local_nonprim = NULL;
    }
    return NULL;

}
