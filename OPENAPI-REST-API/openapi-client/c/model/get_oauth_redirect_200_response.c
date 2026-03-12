#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_oauth_redirect_200_response.h"



static get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_create_internal(
    char *redirect_url
    ) {
    get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_local_var = malloc(sizeof(get_oauth_redirect_200_response_t));
    if (!get_oauth_redirect_200_response_local_var) {
        return NULL;
    }
    get_oauth_redirect_200_response_local_var->redirect_url = redirect_url;

    get_oauth_redirect_200_response_local_var->_library_owned = 1;
    return get_oauth_redirect_200_response_local_var;
}

__attribute__((deprecated)) get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_create(
    char *redirect_url
    ) {
    return get_oauth_redirect_200_response_create_internal (
        redirect_url
        );
}

void get_oauth_redirect_200_response_free(get_oauth_redirect_200_response_t *get_oauth_redirect_200_response) {
    if(NULL == get_oauth_redirect_200_response){
        return ;
    }
    if(get_oauth_redirect_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_oauth_redirect_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_oauth_redirect_200_response->redirect_url) {
        free(get_oauth_redirect_200_response->redirect_url);
        get_oauth_redirect_200_response->redirect_url = NULL;
    }
    free(get_oauth_redirect_200_response);
}

cJSON *get_oauth_redirect_200_response_convertToJSON(get_oauth_redirect_200_response_t *get_oauth_redirect_200_response) {
    cJSON *item = cJSON_CreateObject();

    // get_oauth_redirect_200_response->redirect_url
    if(get_oauth_redirect_200_response->redirect_url) {
    if(cJSON_AddStringToObject(item, "redirect_url", get_oauth_redirect_200_response->redirect_url) == NULL) {
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

get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_parseFromJSON(cJSON *get_oauth_redirect_200_responseJSON){

    get_oauth_redirect_200_response_t *get_oauth_redirect_200_response_local_var = NULL;

    // get_oauth_redirect_200_response->redirect_url
    cJSON *redirect_url = cJSON_GetObjectItemCaseSensitive(get_oauth_redirect_200_responseJSON, "redirect_url");
    if (cJSON_IsNull(redirect_url)) {
        redirect_url = NULL;
    }
    if (redirect_url) { 
    if(!cJSON_IsString(redirect_url) && !cJSON_IsNull(redirect_url))
    {
    goto end; //String
    }
    }


    get_oauth_redirect_200_response_local_var = get_oauth_redirect_200_response_create_internal (
        redirect_url && !cJSON_IsNull(redirect_url) ? strdup(redirect_url->valuestring) : NULL
        );

    return get_oauth_redirect_200_response_local_var;
end:
    return NULL;

}
