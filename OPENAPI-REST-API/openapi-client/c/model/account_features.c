#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_features.h"



static account_features_t *account_features_create_internal(
    int disable_reset,
    int disable_reinstall
    ) {
    account_features_t *account_features_local_var = malloc(sizeof(account_features_t));
    if (!account_features_local_var) {
        return NULL;
    }
    account_features_local_var->disable_reset = disable_reset;
    account_features_local_var->disable_reinstall = disable_reinstall;

    account_features_local_var->_library_owned = 1;
    return account_features_local_var;
}

__attribute__((deprecated)) account_features_t *account_features_create(
    int disable_reset,
    int disable_reinstall
    ) {
    return account_features_create_internal (
        disable_reset,
        disable_reinstall
        );
}

void account_features_free(account_features_t *account_features) {
    if(NULL == account_features){
        return ;
    }
    if(account_features->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_features_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_features);
}

cJSON *account_features_convertToJSON(account_features_t *account_features) {
    cJSON *item = cJSON_CreateObject();

    // account_features->disable_reset
    if(account_features->disable_reset) {
    if(cJSON_AddNumberToObject(item, "disable_reset", account_features->disable_reset) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_features->disable_reinstall
    if(account_features->disable_reinstall) {
    if(cJSON_AddNumberToObject(item, "disable_reinstall", account_features->disable_reinstall) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_features_t *account_features_parseFromJSON(cJSON *account_featuresJSON){

    account_features_t *account_features_local_var = NULL;

    // account_features->disable_reset
    cJSON *disable_reset = cJSON_GetObjectItemCaseSensitive(account_featuresJSON, "disable_reset");
    if (cJSON_IsNull(disable_reset)) {
        disable_reset = NULL;
    }
    if (disable_reset) { 
    if(!cJSON_IsNumber(disable_reset))
    {
    goto end; //Numeric
    }
    }

    // account_features->disable_reinstall
    cJSON *disable_reinstall = cJSON_GetObjectItemCaseSensitive(account_featuresJSON, "disable_reinstall");
    if (cJSON_IsNull(disable_reinstall)) {
        disable_reinstall = NULL;
    }
    if (disable_reinstall) { 
    if(!cJSON_IsNumber(disable_reinstall))
    {
    goto end; //Numeric
    }
    }


    account_features_local_var = account_features_create_internal (
        disable_reset ? disable_reset->valuedouble : 0,
        disable_reinstall ? disable_reinstall->valuedouble : 0
        );

    return account_features_local_var;
end:
    return NULL;

}
