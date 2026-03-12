#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "close_ticket_response_schema.h"



static close_ticket_response_schema_t *close_ticket_response_schema_create_internal(
    int success,
    char *text
    ) {
    close_ticket_response_schema_t *close_ticket_response_schema_local_var = malloc(sizeof(close_ticket_response_schema_t));
    if (!close_ticket_response_schema_local_var) {
        return NULL;
    }
    close_ticket_response_schema_local_var->success = success;
    close_ticket_response_schema_local_var->text = text;

    close_ticket_response_schema_local_var->_library_owned = 1;
    return close_ticket_response_schema_local_var;
}

__attribute__((deprecated)) close_ticket_response_schema_t *close_ticket_response_schema_create(
    int success,
    char *text
    ) {
    return close_ticket_response_schema_create_internal (
        success,
        text
        );
}

void close_ticket_response_schema_free(close_ticket_response_schema_t *close_ticket_response_schema) {
    if(NULL == close_ticket_response_schema){
        return ;
    }
    if(close_ticket_response_schema->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "close_ticket_response_schema_free");
        return ;
    }
    listEntry_t *listEntry;
    if (close_ticket_response_schema->text) {
        free(close_ticket_response_schema->text);
        close_ticket_response_schema->text = NULL;
    }
    free(close_ticket_response_schema);
}

cJSON *close_ticket_response_schema_convertToJSON(close_ticket_response_schema_t *close_ticket_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // close_ticket_response_schema->success
    if(close_ticket_response_schema->success) {
    if(cJSON_AddBoolToObject(item, "success", close_ticket_response_schema->success) == NULL) {
    goto fail; //Bool
    }
    }


    // close_ticket_response_schema->text
    if(close_ticket_response_schema->text) {
    if(cJSON_AddStringToObject(item, "text", close_ticket_response_schema->text) == NULL) {
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

close_ticket_response_schema_t *close_ticket_response_schema_parseFromJSON(cJSON *close_ticket_response_schemaJSON){

    close_ticket_response_schema_t *close_ticket_response_schema_local_var = NULL;

    // close_ticket_response_schema->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(close_ticket_response_schemaJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // close_ticket_response_schema->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(close_ticket_response_schemaJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    close_ticket_response_schema_local_var = close_ticket_response_schema_create_internal (
        success ? success->valueint : 0,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL
        );

    return close_ticket_response_schema_local_var;
end:
    return NULL;

}
