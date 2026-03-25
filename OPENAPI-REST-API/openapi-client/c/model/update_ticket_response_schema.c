#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_ticket_response_schema.h"



static update_ticket_response_schema_t *update_ticket_response_schema_create_internal(
    int *success,
    char *message
    ) {
    update_ticket_response_schema_t *update_ticket_response_schema_local_var = malloc(sizeof(update_ticket_response_schema_t));
    if (!update_ticket_response_schema_local_var) {
        return NULL;
    }
    memset(update_ticket_response_schema_local_var, 0, sizeof(update_ticket_response_schema_t));
    update_ticket_response_schema_local_var->_library_owned = 1;
    update_ticket_response_schema_local_var->success = success;
    update_ticket_response_schema_local_var->message = message;
    return update_ticket_response_schema_local_var;
}

__attribute__((deprecated)) update_ticket_response_schema_t *update_ticket_response_schema_create(
    int *success,
    char *message
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    update_ticket_response_schema_t *result = update_ticket_response_schema_create_internal (
        success_copy,
        message
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void update_ticket_response_schema_free(update_ticket_response_schema_t *update_ticket_response_schema) {
    if(NULL == update_ticket_response_schema){
        return ;
    }
    if(update_ticket_response_schema->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "update_ticket_response_schema_free");
        return ;
    }
    listEntry_t *listEntry;
    if (update_ticket_response_schema->success) {
        free(update_ticket_response_schema->success);
        update_ticket_response_schema->success = NULL;
    }
    if (update_ticket_response_schema->message) {
        free(update_ticket_response_schema->message);
        update_ticket_response_schema->message = NULL;
    }
    free(update_ticket_response_schema);
}

cJSON *update_ticket_response_schema_convertToJSON(update_ticket_response_schema_t *update_ticket_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // update_ticket_response_schema->success
    if(update_ticket_response_schema->success) {
    if(cJSON_AddBoolToObject(item, "success", *update_ticket_response_schema->success) == NULL) {
    goto fail; //Bool
    }
    }


    // update_ticket_response_schema->message
    if(update_ticket_response_schema->message) {
    if(cJSON_AddStringToObject(item, "message", update_ticket_response_schema->message) == NULL) {
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

update_ticket_response_schema_t *update_ticket_response_schema_parseFromJSON(cJSON *update_ticket_response_schemaJSON){

    update_ticket_response_schema_t *update_ticket_response_schema_local_var = NULL;

    // define the local variable for update_ticket_response_schema->success
    int *success_local_var = NULL;

    char *message_local_str = NULL;

    // update_ticket_response_schema->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(update_ticket_response_schemaJSON, "success");
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

    // update_ticket_response_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(update_ticket_response_schemaJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    if (message && !cJSON_IsNull(message)) message_local_str = strdup(message->valuestring);

    update_ticket_response_schema_local_var = update_ticket_response_schema_create_internal (
        success_local_var,
        message_local_str
        );

    if (!update_ticket_response_schema_local_var) {
        goto end;
    }

    return update_ticket_response_schema_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (message_local_str) {
        free(message_local_str);
        message_local_str = NULL;
    }
    return NULL;

}
