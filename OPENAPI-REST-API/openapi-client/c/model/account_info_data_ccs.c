#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_data_ccs.h"



static account_info_data_ccs_t *account_info_data_ccs_create_internal(
    ) {
    account_info_data_ccs_t *account_info_data_ccs_local_var = malloc(sizeof(account_info_data_ccs_t));
    if (!account_info_data_ccs_local_var) {
        return NULL;
    }
    memset(account_info_data_ccs_local_var, 0, sizeof(account_info_data_ccs_t));
    account_info_data_ccs_local_var->_library_owned = 1;
    return account_info_data_ccs_local_var;
}

__attribute__((deprecated)) account_info_data_ccs_t *account_info_data_ccs_create(
    ) {
    account_info_data_ccs_t *result = account_info_data_ccs_create_internal (
        );
    if (!result) {
    }
    return result;
}

void account_info_data_ccs_free(account_info_data_ccs_t *account_info_data_ccs) {
    if(NULL == account_info_data_ccs){
        return ;
    }
    if(account_info_data_ccs->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_data_ccs_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_info_data_ccs);
}

cJSON *account_info_data_ccs_convertToJSON(account_info_data_ccs_t *account_info_data_ccs) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_data_ccs_t *account_info_data_ccs_parseFromJSON(cJSON *account_info_data_ccsJSON){

    account_info_data_ccs_t *account_info_data_ccs_local_var = NULL;



    account_info_data_ccs_local_var = account_info_data_ccs_create_internal (
        );

    if (!account_info_data_ccs_local_var) {
        goto end;
    }

    return account_info_data_ccs_local_var;
end:
    return NULL;

}
