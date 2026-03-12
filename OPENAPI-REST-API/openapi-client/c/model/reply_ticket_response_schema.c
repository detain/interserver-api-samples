#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reply_ticket_response_schema.h"



static reply_ticket_response_schema_t *reply_ticket_response_schema_create_internal(
    int success,
    int post_id
    ) {
    reply_ticket_response_schema_t *reply_ticket_response_schema_local_var = malloc(sizeof(reply_ticket_response_schema_t));
    if (!reply_ticket_response_schema_local_var) {
        return NULL;
    }
    reply_ticket_response_schema_local_var->success = success;
    reply_ticket_response_schema_local_var->post_id = post_id;

    reply_ticket_response_schema_local_var->_library_owned = 1;
    return reply_ticket_response_schema_local_var;
}

__attribute__((deprecated)) reply_ticket_response_schema_t *reply_ticket_response_schema_create(
    int success,
    int post_id
    ) {
    return reply_ticket_response_schema_create_internal (
        success,
        post_id
        );
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
    free(reply_ticket_response_schema);
}

cJSON *reply_ticket_response_schema_convertToJSON(reply_ticket_response_schema_t *reply_ticket_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // reply_ticket_response_schema->success
    if(reply_ticket_response_schema->success) {
    if(cJSON_AddBoolToObject(item, "success", reply_ticket_response_schema->success) == NULL) {
    goto fail; //Bool
    }
    }


    // reply_ticket_response_schema->post_id
    if(reply_ticket_response_schema->post_id) {
    if(cJSON_AddNumberToObject(item, "post_id", reply_ticket_response_schema->post_id) == NULL) {
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
    }


    reply_ticket_response_schema_local_var = reply_ticket_response_schema_create_internal (
        success ? success->valueint : 0,
        post_id ? post_id->valuedouble : 0
        );

    return reply_ticket_response_schema_local_var;
end:
    return NULL;

}
