#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "queue_response.h"



static queue_response_t *queue_response_create_internal(
    char *text,
    int *queue_id
    ) {
    queue_response_t *queue_response_local_var = malloc(sizeof(queue_response_t));
    if (!queue_response_local_var) {
        return NULL;
    }
    memset(queue_response_local_var, 0, sizeof(queue_response_t));
    queue_response_local_var->_library_owned = 1;
    queue_response_local_var->text = text;
    queue_response_local_var->queue_id = queue_id;
    return queue_response_local_var;
}

__attribute__((deprecated)) queue_response_t *queue_response_create(
    char *text,
    int *queue_id
    ) {
    int *queue_id_copy = NULL;
    if (queue_id) {
        queue_id_copy = malloc(sizeof(int));
        if (queue_id_copy) *queue_id_copy = *queue_id;
    }
    queue_response_t *result = queue_response_create_internal (
        text,
        queue_id_copy
        );
    if (!result) {
        free(queue_id_copy);
    }
    return result;
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
    if (queue_response->queue_id) {
        free(queue_response->queue_id);
        queue_response->queue_id = NULL;
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
    if(cJSON_AddNumberToObject(item, "queueId", *queue_response->queue_id) == NULL) {
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

    char *text_local_str = NULL;

    // define the local variable for queue_response->queue_id
    int *queue_id_local_var = NULL;

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
    queue_id_local_var = malloc(sizeof(int));
    if(!queue_id_local_var)
    {
        goto end;
    }
    *queue_id_local_var = queue_id->valuedouble;


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    queue_response_local_var = queue_response_create_internal (
        text_local_str,
        queue_id_local_var
        );

    if (!queue_response_local_var) {
        goto end;
    }

    return queue_response_local_var;
end:
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (queue_id_local_var) {
        free(queue_id_local_var);
        queue_id_local_var = NULL;
    }
    return NULL;

}
