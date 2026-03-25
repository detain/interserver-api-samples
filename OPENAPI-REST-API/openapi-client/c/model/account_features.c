#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_features.h"



static account_features_t *account_features_create_internal(
    int *disable_reset,
    int *disable_reinstall
    ) {
    account_features_t *account_features_local_var = malloc(sizeof(account_features_t));
    if (!account_features_local_var) {
        return NULL;
    }
    memset(account_features_local_var, 0, sizeof(account_features_t));
    account_features_local_var->_library_owned = 1;
    account_features_local_var->disable_reset = disable_reset;
    account_features_local_var->disable_reinstall = disable_reinstall;
    return account_features_local_var;
}

__attribute__((deprecated)) account_features_t *account_features_create(
    int *disable_reset,
    int *disable_reinstall
    ) {
    int *disable_reset_copy = NULL;
    if (disable_reset) {
        disable_reset_copy = malloc(sizeof(int));
        if (disable_reset_copy) *disable_reset_copy = *disable_reset;
    }
    int *disable_reinstall_copy = NULL;
    if (disable_reinstall) {
        disable_reinstall_copy = malloc(sizeof(int));
        if (disable_reinstall_copy) *disable_reinstall_copy = *disable_reinstall;
    }
    account_features_t *result = account_features_create_internal (
        disable_reset_copy,
        disable_reinstall_copy
        );
    if (!result) {
        free(disable_reset_copy);
        free(disable_reinstall_copy);
    }
    return result;
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
    if (account_features->disable_reset) {
        free(account_features->disable_reset);
        account_features->disable_reset = NULL;
    }
    if (account_features->disable_reinstall) {
        free(account_features->disable_reinstall);
        account_features->disable_reinstall = NULL;
    }
    free(account_features);
}

cJSON *account_features_convertToJSON(account_features_t *account_features) {
    cJSON *item = cJSON_CreateObject();

    // account_features->disable_reset
    if(account_features->disable_reset) {
    if(cJSON_AddNumberToObject(item, "disable_reset", *account_features->disable_reset) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_features->disable_reinstall
    if(account_features->disable_reinstall) {
    if(cJSON_AddNumberToObject(item, "disable_reinstall", *account_features->disable_reinstall) == NULL) {
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

    // define the local variable for account_features->disable_reset
    int *disable_reset_local_var = NULL;

    // define the local variable for account_features->disable_reinstall
    int *disable_reinstall_local_var = NULL;

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
    disable_reset_local_var = malloc(sizeof(int));
    if(!disable_reset_local_var)
    {
        goto end;
    }
    *disable_reset_local_var = disable_reset->valuedouble;
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
    disable_reinstall_local_var = malloc(sizeof(int));
    if(!disable_reinstall_local_var)
    {
        goto end;
    }
    *disable_reinstall_local_var = disable_reinstall->valuedouble;
    }



    account_features_local_var = account_features_create_internal (
        disable_reset_local_var,
        disable_reinstall_local_var
        );

    if (!account_features_local_var) {
        goto end;
    }

    return account_features_local_var;
end:
    if (disable_reset_local_var) {
        free(disable_reset_local_var);
        disable_reset_local_var = NULL;
    }
    if (disable_reinstall_local_var) {
        free(disable_reinstall_local_var);
        disable_reinstall_local_var = NULL;
    }
    return NULL;

}
