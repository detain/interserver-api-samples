#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_country_currencies.h"



static account_info_country_currencies_t *account_info_country_currencies_create_internal(
    ) {
    account_info_country_currencies_t *account_info_country_currencies_local_var = malloc(sizeof(account_info_country_currencies_t));
    if (!account_info_country_currencies_local_var) {
        return NULL;
    }
    memset(account_info_country_currencies_local_var, 0, sizeof(account_info_country_currencies_t));
    account_info_country_currencies_local_var->_library_owned = 1;
    return account_info_country_currencies_local_var;
}

__attribute__((deprecated)) account_info_country_currencies_t *account_info_country_currencies_create(
    ) {
    account_info_country_currencies_t *result = account_info_country_currencies_create_internal (
        );
    if (!result) {
    }
    return result;
}

void account_info_country_currencies_free(account_info_country_currencies_t *account_info_country_currencies) {
    if(NULL == account_info_country_currencies){
        return ;
    }
    if(account_info_country_currencies->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_country_currencies_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_info_country_currencies);
}

cJSON *account_info_country_currencies_convertToJSON(account_info_country_currencies_t *account_info_country_currencies) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_country_currencies_t *account_info_country_currencies_parseFromJSON(cJSON *account_info_country_currenciesJSON){

    account_info_country_currencies_t *account_info_country_currencies_local_var = NULL;



    account_info_country_currencies_local_var = account_info_country_currencies_create_internal (
        );

    if (!account_info_country_currencies_local_var) {
        goto end;
    }

    return account_info_country_currencies_local_var;
end:
    return NULL;

}
