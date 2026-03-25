#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "close_ticket_response_schema.h"



static close_ticket_response_schema_t *close_ticket_response_schema_create_internal(
    int *success,
    char *text
    ) {
    close_ticket_response_schema_t *close_ticket_response_schema_local_var = malloc(sizeof(close_ticket_response_schema_t));
    if (!close_ticket_response_schema_local_var) {
        return NULL;
    }
    memset(close_ticket_response_schema_local_var, 0, sizeof(close_ticket_response_schema_t));
    close_ticket_response_schema_local_var->_library_owned = 1;
    close_ticket_response_schema_local_var->success = success;
    close_ticket_response_schema_local_var->text = text;
    return close_ticket_response_schema_local_var;
}

__attribute__((deprecated)) close_ticket_response_schema_t *close_ticket_response_schema_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    close_ticket_response_schema_t *result = close_ticket_response_schema_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
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
    if (close_ticket_response_schema->success) {
        free(close_ticket_response_schema->success);
        close_ticket_response_schema->success = NULL;
    }
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
    if(cJSON_AddBoolToObject(item, "success", *close_ticket_response_schema->success) == NULL) {
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

    // define the local variable for close_ticket_response_schema->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

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
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;
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


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    close_ticket_response_schema_local_var = close_ticket_response_schema_create_internal (
        success_local_var,
        text_local_str
        );

    if (!close_ticket_response_schema_local_var) {
        goto end;
    }

    return close_ticket_response_schema_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    return NULL;

}
