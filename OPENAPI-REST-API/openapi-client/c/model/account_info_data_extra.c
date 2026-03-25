#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_data_extra.h"



static account_info_data_extra_t *account_info_data_extra_create_internal(
    char *private_whois
    ) {
    account_info_data_extra_t *account_info_data_extra_local_var = malloc(sizeof(account_info_data_extra_t));
    if (!account_info_data_extra_local_var) {
        return NULL;
    }
    memset(account_info_data_extra_local_var, 0, sizeof(account_info_data_extra_t));
    account_info_data_extra_local_var->_library_owned = 1;
    account_info_data_extra_local_var->private_whois = private_whois;
    return account_info_data_extra_local_var;
}

__attribute__((deprecated)) account_info_data_extra_t *account_info_data_extra_create(
    char *private_whois
    ) {
    account_info_data_extra_t *result = account_info_data_extra_create_internal (
        private_whois
        );
    if (!result) {
    }
    return result;
}

void account_info_data_extra_free(account_info_data_extra_t *account_info_data_extra) {
    if(NULL == account_info_data_extra){
        return ;
    }
    if(account_info_data_extra->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_data_extra_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_data_extra->private_whois) {
        free(account_info_data_extra->private_whois);
        account_info_data_extra->private_whois = NULL;
    }
    free(account_info_data_extra);
}

cJSON *account_info_data_extra_convertToJSON(account_info_data_extra_t *account_info_data_extra) {
    cJSON *item = cJSON_CreateObject();

    // account_info_data_extra->private_whois
    if(account_info_data_extra->private_whois) {
    if(cJSON_AddStringToObject(item, "private_whois", account_info_data_extra->private_whois) == NULL) {
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

account_info_data_extra_t *account_info_data_extra_parseFromJSON(cJSON *account_info_data_extraJSON){

    account_info_data_extra_t *account_info_data_extra_local_var = NULL;

    char *private_whois_local_str = NULL;

    // account_info_data_extra->private_whois
    cJSON *private_whois = cJSON_GetObjectItemCaseSensitive(account_info_data_extraJSON, "private_whois");
    if (cJSON_IsNull(private_whois)) {
        private_whois = NULL;
    }
    if (private_whois) { 
    if(!cJSON_IsString(private_whois) && !cJSON_IsNull(private_whois))
    {
    goto end; //String
    }
    }


    if (private_whois && !cJSON_IsNull(private_whois)) private_whois_local_str = strdup(private_whois->valuestring);

    account_info_data_extra_local_var = account_info_data_extra_create_internal (
        private_whois_local_str
        );

    if (!account_info_data_extra_local_var) {
        goto end;
    }

    return account_info_data_extra_local_var;
end:
    if (private_whois_local_str) {
        free(private_whois_local_str);
        private_whois_local_str = NULL;
    }
    return NULL;

}
