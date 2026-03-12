#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_data_fraudrecord.h"



static account_info_data_fraudrecord_t *account_info_data_fraudrecord_create_internal(
    char *score,
    char *count,
    char *reliability,
    char *code
    ) {
    account_info_data_fraudrecord_t *account_info_data_fraudrecord_local_var = malloc(sizeof(account_info_data_fraudrecord_t));
    if (!account_info_data_fraudrecord_local_var) {
        return NULL;
    }
    account_info_data_fraudrecord_local_var->score = score;
    account_info_data_fraudrecord_local_var->count = count;
    account_info_data_fraudrecord_local_var->reliability = reliability;
    account_info_data_fraudrecord_local_var->code = code;

    account_info_data_fraudrecord_local_var->_library_owned = 1;
    return account_info_data_fraudrecord_local_var;
}

__attribute__((deprecated)) account_info_data_fraudrecord_t *account_info_data_fraudrecord_create(
    char *score,
    char *count,
    char *reliability,
    char *code
    ) {
    return account_info_data_fraudrecord_create_internal (
        score,
        count,
        reliability,
        code
        );
}

void account_info_data_fraudrecord_free(account_info_data_fraudrecord_t *account_info_data_fraudrecord) {
    if(NULL == account_info_data_fraudrecord){
        return ;
    }
    if(account_info_data_fraudrecord->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_data_fraudrecord_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_data_fraudrecord->score) {
        free(account_info_data_fraudrecord->score);
        account_info_data_fraudrecord->score = NULL;
    }
    if (account_info_data_fraudrecord->count) {
        free(account_info_data_fraudrecord->count);
        account_info_data_fraudrecord->count = NULL;
    }
    if (account_info_data_fraudrecord->reliability) {
        free(account_info_data_fraudrecord->reliability);
        account_info_data_fraudrecord->reliability = NULL;
    }
    if (account_info_data_fraudrecord->code) {
        free(account_info_data_fraudrecord->code);
        account_info_data_fraudrecord->code = NULL;
    }
    free(account_info_data_fraudrecord);
}

cJSON *account_info_data_fraudrecord_convertToJSON(account_info_data_fraudrecord_t *account_info_data_fraudrecord) {
    cJSON *item = cJSON_CreateObject();

    // account_info_data_fraudrecord->score
    if(account_info_data_fraudrecord->score) {
    if(cJSON_AddStringToObject(item, "score", account_info_data_fraudrecord->score) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_fraudrecord->count
    if(account_info_data_fraudrecord->count) {
    if(cJSON_AddStringToObject(item, "count", account_info_data_fraudrecord->count) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_fraudrecord->reliability
    if(account_info_data_fraudrecord->reliability) {
    if(cJSON_AddStringToObject(item, "reliability", account_info_data_fraudrecord->reliability) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_fraudrecord->code
    if(account_info_data_fraudrecord->code) {
    if(cJSON_AddStringToObject(item, "code", account_info_data_fraudrecord->code) == NULL) {
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

account_info_data_fraudrecord_t *account_info_data_fraudrecord_parseFromJSON(cJSON *account_info_data_fraudrecordJSON){

    account_info_data_fraudrecord_t *account_info_data_fraudrecord_local_var = NULL;

    // account_info_data_fraudrecord->score
    cJSON *score = cJSON_GetObjectItemCaseSensitive(account_info_data_fraudrecordJSON, "score");
    if (cJSON_IsNull(score)) {
        score = NULL;
    }
    if (score) { 
    if(!cJSON_IsString(score) && !cJSON_IsNull(score))
    {
    goto end; //String
    }
    }

    // account_info_data_fraudrecord->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(account_info_data_fraudrecordJSON, "count");
    if (cJSON_IsNull(count)) {
        count = NULL;
    }
    if (count) { 
    if(!cJSON_IsString(count) && !cJSON_IsNull(count))
    {
    goto end; //String
    }
    }

    // account_info_data_fraudrecord->reliability
    cJSON *reliability = cJSON_GetObjectItemCaseSensitive(account_info_data_fraudrecordJSON, "reliability");
    if (cJSON_IsNull(reliability)) {
        reliability = NULL;
    }
    if (reliability) { 
    if(!cJSON_IsString(reliability) && !cJSON_IsNull(reliability))
    {
    goto end; //String
    }
    }

    // account_info_data_fraudrecord->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(account_info_data_fraudrecordJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }


    account_info_data_fraudrecord_local_var = account_info_data_fraudrecord_create_internal (
        score && !cJSON_IsNull(score) ? strdup(score->valuestring) : NULL,
        count && !cJSON_IsNull(count) ? strdup(count->valuestring) : NULL,
        reliability && !cJSON_IsNull(reliability) ? strdup(reliability->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL
        );

    return account_info_data_fraudrecord_local_var;
end:
    return NULL;

}
