#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reply_ticket_response_schema.h"



static reply_ticket_response_schema_t *reply_ticket_response_schema_create_internal(
    int *success,
    int *post_id
    ) {
    reply_ticket_response_schema_t *reply_ticket_response_schema_local_var = malloc(sizeof(reply_ticket_response_schema_t));
    if (!reply_ticket_response_schema_local_var) {
        return NULL;
    }
    memset(reply_ticket_response_schema_local_var, 0, sizeof(reply_ticket_response_schema_t));
    reply_ticket_response_schema_local_var->_library_owned = 1;
    reply_ticket_response_schema_local_var->success = success;
    reply_ticket_response_schema_local_var->post_id = post_id;
    return reply_ticket_response_schema_local_var;
}

__attribute__((deprecated)) reply_ticket_response_schema_t *reply_ticket_response_schema_create(
    int *success,
    int *post_id
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    int *post_id_copy = NULL;
    if (post_id) {
        post_id_copy = malloc(sizeof(int));
        if (post_id_copy) *post_id_copy = *post_id;
    }
    reply_ticket_response_schema_t *result = reply_ticket_response_schema_create_internal (
        success_copy,
        post_id_copy
        );
    if (!result) {
        free(success_copy);
        free(post_id_copy);
    }
    return result;
}

void reply_ticket_response_schema_free(reply_ticket_response_schema_t *reply_ticket_response_schema) {
    if(NULL == reply_ticket_response_schema){
        return ;
    }
    if(reply_ticket_response_schema->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "reply_ticket_response_schema_free");
        return ;
    }
    listEntry_t *listEntry;
    if (reply_ticket_response_schema->success) {
        free(reply_ticket_response_schema->success);
        reply_ticket_response_schema->success = NULL;
    }
    if (reply_ticket_response_schema->post_id) {
        free(reply_ticket_response_schema->post_id);
        reply_ticket_response_schema->post_id = NULL;
    }
    free(reply_ticket_response_schema);
}

cJSON *reply_ticket_response_schema_convertToJSON(reply_ticket_response_schema_t *reply_ticket_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // reply_ticket_response_schema->success
    if(reply_ticket_response_schema->success) {
    if(cJSON_AddBoolToObject(item, "success", *reply_ticket_response_schema->success) == NULL) {
    goto fail; //Bool
    }
    }


    // reply_ticket_response_schema->post_id
    if(reply_ticket_response_schema->post_id) {
    if(cJSON_AddNumberToObject(item, "post_id", *reply_ticket_response_schema->post_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

reply_ticket_response_schema_t *reply_ticket_response_schema_parseFromJSON(cJSON *reply_ticket_response_schemaJSON){

    reply_ticket_response_schema_t *reply_ticket_response_schema_local_var = NULL;

    // define the local variable for reply_ticket_response_schema->success
    int *success_local_var = NULL;

    // define the local variable for reply_ticket_response_schema->post_id
    int *post_id_local_var = NULL;

    // reply_ticket_response_schema->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(reply_ticket_response_schemaJSON, "success");
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

    // reply_ticket_response_schema->post_id
    cJSON *post_id = cJSON_GetObjectItemCaseSensitive(reply_ticket_response_schemaJSON, "post_id");
    if (cJSON_IsNull(post_id)) {
        post_id = NULL;
    }
    if (post_id) { 
    if(!cJSON_IsNumber(post_id))
    {
    goto end; //Numeric
    }
    post_id_local_var = malloc(sizeof(int));
    if(!post_id_local_var)
    {
        goto end;
    }
    *post_id_local_var = post_id->valuedouble;
    }



    reply_ticket_response_schema_local_var = reply_ticket_response_schema_create_internal (
        success_local_var,
        post_id_local_var
        );

    if (!reply_ticket_response_schema_local_var) {
        goto end;
    }

    return reply_ticket_response_schema_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (post_id_local_var) {
        free(post_id_local_var);
        post_id_local_var = NULL;
    }
    return NULL;

}
