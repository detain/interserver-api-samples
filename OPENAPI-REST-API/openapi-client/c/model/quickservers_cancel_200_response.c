#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickservers_cancel_200_response.h"



static quickservers_cancel_200_response_t *quickservers_cancel_200_response_create_internal(
    int success,
    char *text
    ) {
    quickservers_cancel_200_response_t *quickservers_cancel_200_response_local_var = malloc(sizeof(quickservers_cancel_200_response_t));
    if (!quickservers_cancel_200_response_local_var) {
        return NULL;
    }
    quickservers_cancel_200_response_local_var->success = success;
    quickservers_cancel_200_response_local_var->text = text;

    quickservers_cancel_200_response_local_var->_library_owned = 1;
    return quickservers_cancel_200_response_local_var;
}

__attribute__((deprecated)) quickservers_cancel_200_response_t *quickservers_cancel_200_response_create(
    int success,
    char *text
    ) {
    return quickservers_cancel_200_response_create_internal (
        success,
        text
        );
}

void quickservers_cancel_200_response_free(quickservers_cancel_200_response_t *quickservers_cancel_200_response) {
    if(NULL == quickservers_cancel_200_response){
        return ;
    }
    if(quickservers_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickservers_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickservers_cancel_200_response->text) {
        free(quickservers_cancel_200_response->text);
        quickservers_cancel_200_response->text = NULL;
    }
    free(quickservers_cancel_200_response);
}

cJSON *quickservers_cancel_200_response_convertToJSON(quickservers_cancel_200_response_t *quickservers_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // quickservers_cancel_200_response->success
    if (!quickservers_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", quickservers_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // quickservers_cancel_200_response->text
    if (!quickservers_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", quickservers_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickservers_cancel_200_response_t *quickservers_cancel_200_response_parseFromJSON(cJSON *quickservers_cancel_200_responseJSON){

    quickservers_cancel_200_response_t *quickservers_cancel_200_response_local_var = NULL;

    // quickservers_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(quickservers_cancel_200_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (!success) {
        goto end;
    }

    
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }

    // quickservers_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(quickservers_cancel_200_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (!text) {
        goto end;
    }

    
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }


    quickservers_cancel_200_response_local_var = quickservers_cancel_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return quickservers_cancel_200_response_local_var;
end:
    return NULL;

}
