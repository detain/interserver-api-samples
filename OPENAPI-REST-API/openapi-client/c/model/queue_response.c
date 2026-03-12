#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "queue_response.h"



static queue_response_t *queue_response_create_internal(
    char *text,
    int queue_id
    ) {
    queue_response_t *queue_response_local_var = malloc(sizeof(queue_response_t));
    if (!queue_response_local_var) {
        return NULL;
    }
    queue_response_local_var->text = text;
    queue_response_local_var->queue_id = queue_id;

    queue_response_local_var->_library_owned = 1;
    return queue_response_local_var;
}

__attribute__((deprecated)) queue_response_t *queue_response_create(
    char *text,
    int queue_id
    ) {
    return queue_response_create_internal (
        text,
        queue_id
        );
}

void queue_response_free(queue_response_t *queue_response) {
    if(NULL == queue_response){
        return ;
    }
    if(queue_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "queue_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (queue_response->text) {
        free(queue_response->text);
        queue_response->text = NULL;
    }
    free(queue_response);
}

cJSON *queue_response_convertToJSON(queue_response_t *queue_response) {
    cJSON *item = cJSON_CreateObject();

    // queue_response->text
    if (!queue_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", queue_response->text) == NULL) {
    goto fail; //String
    }


    // queue_response->queue_id
    if (!queue_response->queue_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "queueId", queue_response->queue_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

queue_response_t *queue_response_parseFromJSON(cJSON *queue_responseJSON){

    queue_response_t *queue_response_local_var = NULL;

    // queue_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(queue_responseJSON, "text");
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

    // queue_response->queue_id
    cJSON *queue_id = cJSON_GetObjectItemCaseSensitive(queue_responseJSON, "queueId");
    if (cJSON_IsNull(queue_id)) {
        queue_id = NULL;
    }
    if (!queue_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(queue_id))
    {
    goto end; //Numeric
    }


    queue_response_local_var = queue_response_create_internal (
        strdup(text->valuestring),
        queue_id->valuedouble
        );

    return queue_response_local_var;
end:
    return NULL;

}
