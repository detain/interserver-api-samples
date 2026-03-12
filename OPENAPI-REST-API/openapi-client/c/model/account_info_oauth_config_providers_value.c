#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_oauth_config_providers_value.h"



static account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_create_internal(
    int enabled,
    int linked,
    char *account,
    char *url
    ) {
    account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_local_var = malloc(sizeof(account_info_oauth_config_providers_value_t));
    if (!account_info_oauth_config_providers_value_local_var) {
        return NULL;
    }
    account_info_oauth_config_providers_value_local_var->enabled = enabled;
    account_info_oauth_config_providers_value_local_var->linked = linked;
    account_info_oauth_config_providers_value_local_var->account = account;
    account_info_oauth_config_providers_value_local_var->url = url;

    account_info_oauth_config_providers_value_local_var->_library_owned = 1;
    return account_info_oauth_config_providers_value_local_var;
}

__attribute__((deprecated)) account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_create(
    int enabled,
    int linked,
    char *account,
    char *url
    ) {
    return account_info_oauth_config_providers_value_create_internal (
        enabled,
        linked,
        account,
        url
        );
}

void account_info_oauth_config_providers_value_free(account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value) {
    if(NULL == account_info_oauth_config_providers_value){
        return ;
    }
    if(account_info_oauth_config_providers_value->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_oauth_config_providers_value_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_oauth_config_providers_value->account) {
        free(account_info_oauth_config_providers_value->account);
        account_info_oauth_config_providers_value->account = NULL;
    }
    if (account_info_oauth_config_providers_value->url) {
        free(account_info_oauth_config_providers_value->url);
        account_info_oauth_config_providers_value->url = NULL;
    }
    free(account_info_oauth_config_providers_value);
}

cJSON *account_info_oauth_config_providers_value_convertToJSON(account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value) {
    cJSON *item = cJSON_CreateObject();

    // account_info_oauth_config_providers_value->enabled
    if(account_info_oauth_config_providers_value->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", account_info_oauth_config_providers_value->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_oauth_config_providers_value->linked
    if(account_info_oauth_config_providers_value->linked) {
    if(cJSON_AddBoolToObject(item, "linked", account_info_oauth_config_providers_value->linked) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_oauth_config_providers_value->account
    if(account_info_oauth_config_providers_value->account) {
    if(cJSON_AddStringToObject(item, "account", account_info_oauth_config_providers_value->account) == NULL) {
    goto fail; //String
    }
    }


    // account_info_oauth_config_providers_value->url
    if(account_info_oauth_config_providers_value->url) {
    if(cJSON_AddStringToObject(item, "url", account_info_oauth_config_providers_value->url) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_parseFromJSON(cJSON *account_info_oauth_config_providers_valueJSON){

    account_info_oauth_config_providers_value_t *account_info_oauth_config_providers_value_local_var = NULL;

    // account_info_oauth_config_providers_value->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(account_info_oauth_config_providers_valueJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // account_info_oauth_config_providers_value->linked
    cJSON *linked = cJSON_GetObjectItemCaseSensitive(account_info_oauth_config_providers_valueJSON, "linked");
    if (cJSON_IsNull(linked)) {
        linked = NULL;
    }
    if (linked) { 
    if(!cJSON_IsBool(linked))
    {
    goto end; //Bool
    }
    }

    // account_info_oauth_config_providers_value->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(account_info_oauth_config_providers_valueJSON, "account");
    if (cJSON_IsNull(account)) {
        account = NULL;
    }
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // account_info_oauth_config_providers_value->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(account_info_oauth_config_providers_valueJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    account_info_oauth_config_providers_value_local_var = account_info_oauth_config_providers_value_create_internal (
        enabled ? enabled->valueint : 0,
        linked ? linked->valueint : 0,
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return account_info_oauth_config_providers_value_local_var;
end:
    return NULL;

}
