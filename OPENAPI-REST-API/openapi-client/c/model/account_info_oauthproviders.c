#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_oauthproviders.h"



static account_info_oauthproviders_t *account_info_oauthproviders_create_internal(
    ) {
    account_info_oauthproviders_t *account_info_oauthproviders_local_var = malloc(sizeof(account_info_oauthproviders_t));
    if (!account_info_oauthproviders_local_var) {
        return NULL;
    }
    memset(account_info_oauthproviders_local_var, 0, sizeof(account_info_oauthproviders_t));
    account_info_oauthproviders_local_var->_library_owned = 1;
    return account_info_oauthproviders_local_var;
}

__attribute__((deprecated)) account_info_oauthproviders_t *account_info_oauthproviders_create(
    ) {
    account_info_oauthproviders_t *result = account_info_oauthproviders_create_internal (
        );
    if (!result) {
    }
    return result;
}

void account_info_oauthproviders_free(account_info_oauthproviders_t *account_info_oauthproviders) {
    if(NULL == account_info_oauthproviders){
        return ;
    }
    if(account_info_oauthproviders->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_oauthproviders_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_info_oauthproviders);
}

cJSON *account_info_oauthproviders_convertToJSON(account_info_oauthproviders_t *account_info_oauthproviders) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_oauthproviders_t *account_info_oauthproviders_parseFromJSON(cJSON *account_info_oauthprovidersJSON){

    account_info_oauthproviders_t *account_info_oauthproviders_local_var = NULL;



    account_info_oauthproviders_local_var = account_info_oauthproviders_create_internal (
        );

    if (!account_info_oauthproviders_local_var) {
        goto end;
    }

    return account_info_oauthproviders_local_var;
end:
    return NULL;

}
