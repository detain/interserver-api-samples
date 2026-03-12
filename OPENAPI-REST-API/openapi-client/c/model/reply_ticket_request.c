#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reply_ticket_request.h"



static reply_ticket_request_t *reply_ticket_request_create_internal(
    char *content
    ) {
    reply_ticket_request_t *reply_ticket_request_local_var = malloc(sizeof(reply_ticket_request_t));
    if (!reply_ticket_request_local_var) {
        return NULL;
    }
    reply_ticket_request_local_var->content = content;

    reply_ticket_request_local_var->_library_owned = 1;
    return reply_ticket_request_local_var;
}

__attribute__((deprecated)) reply_ticket_request_t *reply_ticket_request_create(
    char *content
    ) {
    return reply_ticket_request_create_internal (
        content
        );
}

void reply_ticket_request_free(reply_ticket_request_t *reply_ticket_request) {
    if(NULL == reply_ticket_request){
        return ;
    }
    if(reply_ticket_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "reply_ticket_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (reply_ticket_request->content) {
        free(reply_ticket_request->content);
        reply_ticket_request->content = NULL;
    }
    free(reply_ticket_request);
}

cJSON *reply_ticket_request_convertToJSON(reply_ticket_request_t *reply_ticket_request) {
    cJSON *item = cJSON_CreateObject();

    // reply_ticket_request->content
    if(reply_ticket_request->content) {
    if(cJSON_AddStringToObject(item, "content", reply_ticket_request->content) == NULL) {
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

reply_ticket_request_t *reply_ticket_request_parseFromJSON(cJSON *reply_ticket_requestJSON){

    reply_ticket_request_t *reply_ticket_request_local_var = NULL;

    // reply_ticket_request->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(reply_ticket_requestJSON, "content");
    if (cJSON_IsNull(content)) {
        content = NULL;
    }
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }


    reply_ticket_request_local_var = reply_ticket_request_create_internal (
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL
        );

    return reply_ticket_request_local_var;
end:
    return NULL;

}
