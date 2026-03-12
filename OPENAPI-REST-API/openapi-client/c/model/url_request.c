#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "url_request.h"



static url_request_t *url_request_create_internal(
    char *url
    ) {
    url_request_t *url_request_local_var = malloc(sizeof(url_request_t));
    if (!url_request_local_var) {
        return NULL;
    }
    url_request_local_var->url = url;

    url_request_local_var->_library_owned = 1;
    return url_request_local_var;
}

__attribute__((deprecated)) url_request_t *url_request_create(
    char *url
    ) {
    return url_request_create_internal (
        url
        );
}

void url_request_free(url_request_t *url_request) {
    if(NULL == url_request){
        return ;
    }
    if(url_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "url_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (url_request->url) {
        free(url_request->url);
        url_request->url = NULL;
    }
    free(url_request);
}

cJSON *url_request_convertToJSON(url_request_t *url_request) {
    cJSON *item = cJSON_CreateObject();

    // url_request->url
    if(url_request->url) {
    if(cJSON_AddStringToObject(item, "url", url_request->url) == NULL) {
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

url_request_t *url_request_parseFromJSON(cJSON *url_requestJSON){

    url_request_t *url_request_local_var = NULL;

    // url_request->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(url_requestJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    url_request_local_var = url_request_create_internal (
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return url_request_local_var;
end:
    return NULL;

}
