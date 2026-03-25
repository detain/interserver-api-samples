#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_oauth_callback_request.h"



static post_oauth_callback_request_t *post_oauth_callback_request_create_internal(
    char *provider
    ) {
    post_oauth_callback_request_t *post_oauth_callback_request_local_var = malloc(sizeof(post_oauth_callback_request_t));
    if (!post_oauth_callback_request_local_var) {
        return NULL;
    }
    memset(post_oauth_callback_request_local_var, 0, sizeof(post_oauth_callback_request_t));
    post_oauth_callback_request_local_var->_library_owned = 1;
    post_oauth_callback_request_local_var->provider = provider;
    return post_oauth_callback_request_local_var;
}

__attribute__((deprecated)) post_oauth_callback_request_t *post_oauth_callback_request_create(
    char *provider
    ) {
    post_oauth_callback_request_t *result = post_oauth_callback_request_create_internal (
        provider
        );
    if (!result) {
    }
    return result;
}

void post_oauth_callback_request_free(post_oauth_callback_request_t *post_oauth_callback_request) {
    if(NULL == post_oauth_callback_request){
        return ;
    }
    if(post_oauth_callback_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "post_oauth_callback_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (post_oauth_callback_request->provider) {
        free(post_oauth_callback_request->provider);
        post_oauth_callback_request->provider = NULL;
    }
    free(post_oauth_callback_request);
}

cJSON *post_oauth_callback_request_convertToJSON(post_oauth_callback_request_t *post_oauth_callback_request) {
    cJSON *item = cJSON_CreateObject();

    // post_oauth_callback_request->provider
    if(post_oauth_callback_request->provider) {
    if(cJSON_AddStringToObject(item, "provider", post_oauth_callback_request->provider) == NULL) {
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

post_oauth_callback_request_t *post_oauth_callback_request_parseFromJSON(cJSON *post_oauth_callback_requestJSON){

    post_oauth_callback_request_t *post_oauth_callback_request_local_var = NULL;

    char *provider_local_str = NULL;

    // post_oauth_callback_request->provider
    cJSON *provider = cJSON_GetObjectItemCaseSensitive(post_oauth_callback_requestJSON, "provider");
    if (cJSON_IsNull(provider)) {
        provider = NULL;
    }
    if (provider) { 
    if(!cJSON_IsString(provider) && !cJSON_IsNull(provider))
    {
    goto end; //String
    }
    }


    if (provider && !cJSON_IsNull(provider)) provider_local_str = strdup(provider->valuestring);

    post_oauth_callback_request_local_var = post_oauth_callback_request_create_internal (
        provider_local_str
        );

    if (!post_oauth_callback_request_local_var) {
        goto end;
    }

    return post_oauth_callback_request_local_var;
end:
    if (provider_local_str) {
        free(provider_local_str);
        provider_local_str = NULL;
    }
    return NULL;

}
