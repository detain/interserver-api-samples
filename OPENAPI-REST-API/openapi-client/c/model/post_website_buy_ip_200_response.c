#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_website_buy_ip_200_response.h"



static post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_create_internal(
    char *message,
    int success
    ) {
    post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_local_var = malloc(sizeof(post_website_buy_ip_200_response_t));
    if (!post_website_buy_ip_200_response_local_var) {
        return NULL;
    }
    post_website_buy_ip_200_response_local_var->message = message;
    post_website_buy_ip_200_response_local_var->success = success;

    post_website_buy_ip_200_response_local_var->_library_owned = 1;
    return post_website_buy_ip_200_response_local_var;
}

__attribute__((deprecated)) post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_create(
    char *message,
    int success
    ) {
    return post_website_buy_ip_200_response_create_internal (
        message,
        success
        );
}

void post_website_buy_ip_200_response_free(post_website_buy_ip_200_response_t *post_website_buy_ip_200_response) {
    if(NULL == post_website_buy_ip_200_response){
        return ;
    }
    if(post_website_buy_ip_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "post_website_buy_ip_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (post_website_buy_ip_200_response->message) {
        free(post_website_buy_ip_200_response->message);
        post_website_buy_ip_200_response->message = NULL;
    }
    free(post_website_buy_ip_200_response);
}

cJSON *post_website_buy_ip_200_response_convertToJSON(post_website_buy_ip_200_response_t *post_website_buy_ip_200_response) {
    cJSON *item = cJSON_CreateObject();

    // post_website_buy_ip_200_response->message
    if(post_website_buy_ip_200_response->message) {
    if(cJSON_AddStringToObject(item, "message", post_website_buy_ip_200_response->message) == NULL) {
    goto fail; //String
    }
    }


    // post_website_buy_ip_200_response->success
    if(post_website_buy_ip_200_response->success) {
    if(cJSON_AddBoolToObject(item, "success", post_website_buy_ip_200_response->success) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_parseFromJSON(cJSON *post_website_buy_ip_200_responseJSON){

    post_website_buy_ip_200_response_t *post_website_buy_ip_200_response_local_var = NULL;

    // post_website_buy_ip_200_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(post_website_buy_ip_200_responseJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // post_website_buy_ip_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(post_website_buy_ip_200_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }


    post_website_buy_ip_200_response_local_var = post_website_buy_ip_200_response_create_internal (
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        success ? success->valueint : 0
        );

    return post_website_buy_ip_200_response_local_var;
end:
    return NULL;

}
