#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_limits_inner.h"



static account_info_limits_inner_t *account_info_limits_inner_create_internal(
    char *start,
    char *end
    ) {
    account_info_limits_inner_t *account_info_limits_inner_local_var = malloc(sizeof(account_info_limits_inner_t));
    if (!account_info_limits_inner_local_var) {
        return NULL;
    }
    account_info_limits_inner_local_var->start = start;
    account_info_limits_inner_local_var->end = end;

    account_info_limits_inner_local_var->_library_owned = 1;
    return account_info_limits_inner_local_var;
}

__attribute__((deprecated)) account_info_limits_inner_t *account_info_limits_inner_create(
    char *start,
    char *end
    ) {
    return account_info_limits_inner_create_internal (
        start,
        end
        );
}

void account_info_limits_inner_free(account_info_limits_inner_t *account_info_limits_inner) {
    if(NULL == account_info_limits_inner){
        return ;
    }
    if(account_info_limits_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_limits_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_limits_inner->start) {
        free(account_info_limits_inner->start);
        account_info_limits_inner->start = NULL;
    }
    if (account_info_limits_inner->end) {
        free(account_info_limits_inner->end);
        account_info_limits_inner->end = NULL;
    }
    free(account_info_limits_inner);
}

cJSON *account_info_limits_inner_convertToJSON(account_info_limits_inner_t *account_info_limits_inner) {
    cJSON *item = cJSON_CreateObject();

    // account_info_limits_inner->start
    if(account_info_limits_inner->start) {
    if(cJSON_AddStringToObject(item, "start", account_info_limits_inner->start) == NULL) {
    goto fail; //String
    }
    }


    // account_info_limits_inner->end
    if(account_info_limits_inner->end) {
    if(cJSON_AddStringToObject(item, "end", account_info_limits_inner->end) == NULL) {
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

account_info_limits_inner_t *account_info_limits_inner_parseFromJSON(cJSON *account_info_limits_innerJSON){

    account_info_limits_inner_t *account_info_limits_inner_local_var = NULL;

    // account_info_limits_inner->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(account_info_limits_innerJSON, "start");
    if (cJSON_IsNull(start)) {
        start = NULL;
    }
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //String
    }
    }

    // account_info_limits_inner->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(account_info_limits_innerJSON, "end");
    if (cJSON_IsNull(end)) {
        end = NULL;
    }
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //String
    }
    }


    account_info_limits_inner_local_var = account_info_limits_inner_create_internal (
        start && !cJSON_IsNull(start) ? strdup(start->valuestring) : NULL,
        end && !cJSON_IsNull(end) ? strdup(end->valuestring) : NULL
        );

    return account_info_limits_inner_local_var;
end:
    return NULL;

}
