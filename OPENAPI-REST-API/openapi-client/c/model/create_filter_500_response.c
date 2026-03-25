#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_filter_500_response.h"



static create_filter_500_response_t *create_filter_500_response_create_internal(
    int *success,
    char *text
    ) {
    create_filter_500_response_t *create_filter_500_response_local_var = malloc(sizeof(create_filter_500_response_t));
    if (!create_filter_500_response_local_var) {
        return NULL;
    }
    memset(create_filter_500_response_local_var, 0, sizeof(create_filter_500_response_t));
    create_filter_500_response_local_var->_library_owned = 1;
    create_filter_500_response_local_var->success = success;
    create_filter_500_response_local_var->text = text;
    return create_filter_500_response_local_var;
}

__attribute__((deprecated)) create_filter_500_response_t *create_filter_500_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    create_filter_500_response_t *result = create_filter_500_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void create_filter_500_response_free(create_filter_500_response_t *create_filter_500_response) {
    if(NULL == create_filter_500_response){
        return ;
    }
    if(create_filter_500_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_filter_500_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (create_filter_500_response->success) {
        free(create_filter_500_response->success);
        create_filter_500_response->success = NULL;
    }
    if (create_filter_500_response->text) {
        free(create_filter_500_response->text);
        create_filter_500_response->text = NULL;
    }
    free(create_filter_500_response);
}

cJSON *create_filter_500_response_convertToJSON(create_filter_500_response_t *create_filter_500_response) {
    cJSON *item = cJSON_CreateObject();

    // create_filter_500_response->success
    if(create_filter_500_response->success) {
    if(cJSON_AddBoolToObject(item, "success", *create_filter_500_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // create_filter_500_response->text
    if(create_filter_500_response->text) {
    if(cJSON_AddStringToObject(item, "text", create_filter_500_response->text) == NULL) {
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

create_filter_500_response_t *create_filter_500_response_parseFromJSON(cJSON *create_filter_500_responseJSON){

    create_filter_500_response_t *create_filter_500_response_local_var = NULL;

    // define the local variable for create_filter_500_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // create_filter_500_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(create_filter_500_responseJSON, "success");
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

    // create_filter_500_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(create_filter_500_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    create_filter_500_response_local_var = create_filter_500_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!create_filter_500_response_local_var) {
        goto end;
    }

    return create_filter_500_response_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    return NULL;

}
