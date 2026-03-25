#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_geo_rule_400_response.h"



static create_geo_rule_400_response_t *create_geo_rule_400_response_create_internal(
    int *success,
    char *text,
    list_t *errors
    ) {
    create_geo_rule_400_response_t *create_geo_rule_400_response_local_var = malloc(sizeof(create_geo_rule_400_response_t));
    if (!create_geo_rule_400_response_local_var) {
        return NULL;
    }
    memset(create_geo_rule_400_response_local_var, 0, sizeof(create_geo_rule_400_response_t));
    create_geo_rule_400_response_local_var->_library_owned = 1;
    create_geo_rule_400_response_local_var->success = success;
    create_geo_rule_400_response_local_var->text = text;
    create_geo_rule_400_response_local_var->errors = errors;
    return create_geo_rule_400_response_local_var;
}

__attribute__((deprecated)) create_geo_rule_400_response_t *create_geo_rule_400_response_create(
    int *success,
    char *text,
    list_t *errors
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    create_geo_rule_400_response_t *result = create_geo_rule_400_response_create_internal (
        success_copy,
        text,
        errors
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void create_geo_rule_400_response_free(create_geo_rule_400_response_t *create_geo_rule_400_response) {
    if(NULL == create_geo_rule_400_response){
        return ;
    }
    if(create_geo_rule_400_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_geo_rule_400_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (create_geo_rule_400_response->success) {
        free(create_geo_rule_400_response->success);
        create_geo_rule_400_response->success = NULL;
    }
    if (create_geo_rule_400_response->text) {
        free(create_geo_rule_400_response->text);
        create_geo_rule_400_response->text = NULL;
    }
    if (create_geo_rule_400_response->errors) {
        list_ForEach(listEntry, create_geo_rule_400_response->errors) {
            free(listEntry->data);
        }
        list_freeList(create_geo_rule_400_response->errors);
        create_geo_rule_400_response->errors = NULL;
    }
    free(create_geo_rule_400_response);
}

cJSON *create_geo_rule_400_response_convertToJSON(create_geo_rule_400_response_t *create_geo_rule_400_response) {
    cJSON *item = cJSON_CreateObject();

    // create_geo_rule_400_response->success
    if(create_geo_rule_400_response->success) {
    if(cJSON_AddBoolToObject(item, "success", *create_geo_rule_400_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // create_geo_rule_400_response->text
    if(create_geo_rule_400_response->text) {
    if(cJSON_AddStringToObject(item, "text", create_geo_rule_400_response->text) == NULL) {
    goto fail; //String
    }
    }


    // create_geo_rule_400_response->errors
    if(create_geo_rule_400_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, create_geo_rule_400_response->errors) {
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

create_geo_rule_400_response_t *create_geo_rule_400_response_parseFromJSON(cJSON *create_geo_rule_400_responseJSON){

    create_geo_rule_400_response_t *create_geo_rule_400_response_local_var = NULL;

    // define the local variable for create_geo_rule_400_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // define the local list for create_geo_rule_400_response->errors
    list_t *errorsList = NULL;

    // create_geo_rule_400_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(create_geo_rule_400_responseJSON, "success");
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

    // create_geo_rule_400_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(create_geo_rule_400_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // create_geo_rule_400_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(create_geo_rule_400_responseJSON, "errors");
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

    create_geo_rule_400_response_local_var = create_geo_rule_400_response_create_internal (
        success_local_var,
        text_local_str,
        errors ? errorsList : NULL
        );

    if (!create_geo_rule_400_response_local_var) {
        goto end;
    }

    return create_geo_rule_400_response_local_var;
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
