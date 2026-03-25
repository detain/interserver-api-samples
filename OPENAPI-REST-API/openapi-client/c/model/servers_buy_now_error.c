#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "servers_buy_now_error.h"



static servers_buy_now_error_t *servers_buy_now_error_create_internal(
    int *success,
    char *text,
    list_t *errors
    ) {
    servers_buy_now_error_t *servers_buy_now_error_local_var = malloc(sizeof(servers_buy_now_error_t));
    if (!servers_buy_now_error_local_var) {
        return NULL;
    }
    memset(servers_buy_now_error_local_var, 0, sizeof(servers_buy_now_error_t));
    servers_buy_now_error_local_var->_library_owned = 1;
    servers_buy_now_error_local_var->success = success;
    servers_buy_now_error_local_var->text = text;
    servers_buy_now_error_local_var->errors = errors;
    return servers_buy_now_error_local_var;
}

__attribute__((deprecated)) servers_buy_now_error_t *servers_buy_now_error_create(
    int *success,
    char *text,
    list_t *errors
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    servers_buy_now_error_t *result = servers_buy_now_error_create_internal (
        success_copy,
        text,
        errors
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void servers_buy_now_error_free(servers_buy_now_error_t *servers_buy_now_error) {
    if(NULL == servers_buy_now_error){
        return ;
    }
    if(servers_buy_now_error->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "servers_buy_now_error_free");
        return ;
    }
    listEntry_t *listEntry;
    if (servers_buy_now_error->success) {
        free(servers_buy_now_error->success);
        servers_buy_now_error->success = NULL;
    }
    if (servers_buy_now_error->text) {
        free(servers_buy_now_error->text);
        servers_buy_now_error->text = NULL;
    }
    if (servers_buy_now_error->errors) {
        list_ForEach(listEntry, servers_buy_now_error->errors) {
            free(listEntry->data);
        }
        list_freeList(servers_buy_now_error->errors);
        servers_buy_now_error->errors = NULL;
    }
    free(servers_buy_now_error);
}

cJSON *servers_buy_now_error_convertToJSON(servers_buy_now_error_t *servers_buy_now_error) {
    cJSON *item = cJSON_CreateObject();

    // servers_buy_now_error->success
    if(servers_buy_now_error->success) {
    if(cJSON_AddBoolToObject(item, "success", *servers_buy_now_error->success) == NULL) {
    goto fail; //Bool
    }
    }


    // servers_buy_now_error->text
    if(servers_buy_now_error->text) {
    if(cJSON_AddStringToObject(item, "text", servers_buy_now_error->text) == NULL) {
    goto fail; //String
    }
    }


    // servers_buy_now_error->errors
    if(servers_buy_now_error->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, servers_buy_now_error->errors) {
    if(cJSON_AddStringToObject(errors, "", errorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

servers_buy_now_error_t *servers_buy_now_error_parseFromJSON(cJSON *servers_buy_now_errorJSON){

    servers_buy_now_error_t *servers_buy_now_error_local_var = NULL;

    // define the local variable for servers_buy_now_error->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // define the local list for servers_buy_now_error->errors
    list_t *errorsList = NULL;

    // servers_buy_now_error->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(servers_buy_now_errorJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;
    }

    // servers_buy_now_error->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(servers_buy_now_errorJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // servers_buy_now_error->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(servers_buy_now_errorJSON, "errors");
    if (cJSON_IsNull(errors)) {
        errors = NULL;
    }
    if (errors) { 
    cJSON *errors_local = NULL;
    if(!cJSON_IsArray(errors)) {
        goto end;//primitive container
    }
    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local, errors)
    {
        if(!cJSON_IsString(errors_local))
        {
            goto end;
        }
        list_addElement(errorsList , strdup(errors_local->valuestring));
    }
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    servers_buy_now_error_local_var = servers_buy_now_error_create_internal (
        success_local_var,
        text_local_str,
        errors ? errorsList : NULL
        );

    if (!servers_buy_now_error_local_var) {
        goto end;
    }

    return servers_buy_now_error_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    return NULL;

}
