#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_cancel_200_response.h"



static vps_cancel_200_response_t *vps_cancel_200_response_create_internal(
    int success,
    char *text
    ) {
    vps_cancel_200_response_t *vps_cancel_200_response_local_var = malloc(sizeof(vps_cancel_200_response_t));
    if (!vps_cancel_200_response_local_var) {
        return NULL;
    }
    vps_cancel_200_response_local_var->success = success;
    vps_cancel_200_response_local_var->text = text;

    vps_cancel_200_response_local_var->_library_owned = 1;
    return vps_cancel_200_response_local_var;
}

__attribute__((deprecated)) vps_cancel_200_response_t *vps_cancel_200_response_create(
    int success,
    char *text
    ) {
    return vps_cancel_200_response_create_internal (
        success,
        text
        );
}

void vps_cancel_200_response_free(vps_cancel_200_response_t *vps_cancel_200_response) {
    if(NULL == vps_cancel_200_response){
        return ;
    }
    if(vps_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_cancel_200_response->text) {
        free(vps_cancel_200_response->text);
        vps_cancel_200_response->text = NULL;
    }
    free(vps_cancel_200_response);
}

cJSON *vps_cancel_200_response_convertToJSON(vps_cancel_200_response_t *vps_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_cancel_200_response->success
    if (!vps_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", vps_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // vps_cancel_200_response->text
    if (!vps_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", vps_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_cancel_200_response_t *vps_cancel_200_response_parseFromJSON(cJSON *vps_cancel_200_responseJSON){

    vps_cancel_200_response_t *vps_cancel_200_response_local_var = NULL;

    // vps_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(vps_cancel_200_responseJSON, "success");
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

    // vps_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(vps_cancel_200_responseJSON, "text");
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


    vps_cancel_200_response_local_var = vps_cancel_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return vps_cancel_200_response_local_var;
end:
    return NULL;

}
