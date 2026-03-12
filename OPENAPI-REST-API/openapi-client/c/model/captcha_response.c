#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "captcha_response.h"



static captcha_response_t *captcha_response_create_internal(
    char *captcha
    ) {
    captcha_response_t *captcha_response_local_var = malloc(sizeof(captcha_response_t));
    if (!captcha_response_local_var) {
        return NULL;
    }
    captcha_response_local_var->captcha = captcha;

    captcha_response_local_var->_library_owned = 1;
    return captcha_response_local_var;
}

__attribute__((deprecated)) captcha_response_t *captcha_response_create(
    char *captcha
    ) {
    return captcha_response_create_internal (
        captcha
        );
}

void captcha_response_free(captcha_response_t *captcha_response) {
    if(NULL == captcha_response){
        return ;
    }
    if(captcha_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "captcha_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (captcha_response->captcha) {
        free(captcha_response->captcha);
        captcha_response->captcha = NULL;
    }
    free(captcha_response);
}

cJSON *captcha_response_convertToJSON(captcha_response_t *captcha_response) {
    cJSON *item = cJSON_CreateObject();

    // captcha_response->captcha
    if (!captcha_response->captcha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "captcha", captcha_response->captcha) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

captcha_response_t *captcha_response_parseFromJSON(cJSON *captcha_responseJSON){

    captcha_response_t *captcha_response_local_var = NULL;

    // captcha_response->captcha
    cJSON *captcha = cJSON_GetObjectItemCaseSensitive(captcha_responseJSON, "captcha");
    if (cJSON_IsNull(captcha)) {
        captcha = NULL;
    }
    if (!captcha) {
        goto end;
    }

    
    if(!cJSON_IsString(captcha))
    {
    goto end; //String
    }


    captcha_response_local_var = captcha_response_create_internal (
        strdup(captcha->valuestring)
        );

    return captcha_response_local_var;
end:
    return NULL;

}
