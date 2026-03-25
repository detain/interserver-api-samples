#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ticket_new_response.h"



static ticket_new_response_t *ticket_new_response_create_internal(
    char *text,
    int *success,
    int *ticket_id
    ) {
    ticket_new_response_t *ticket_new_response_local_var = malloc(sizeof(ticket_new_response_t));
    if (!ticket_new_response_local_var) {
        return NULL;
    }
    memset(ticket_new_response_local_var, 0, sizeof(ticket_new_response_t));
    ticket_new_response_local_var->_library_owned = 1;
    ticket_new_response_local_var->text = text;
    ticket_new_response_local_var->success = success;
    ticket_new_response_local_var->ticket_id = ticket_id;
    return ticket_new_response_local_var;
}

__attribute__((deprecated)) ticket_new_response_t *ticket_new_response_create(
    char *text,
    int *success,
    int *ticket_id
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    int *ticket_id_copy = NULL;
    if (ticket_id) {
        ticket_id_copy = malloc(sizeof(int));
        if (ticket_id_copy) *ticket_id_copy = *ticket_id;
    }
    ticket_new_response_t *result = ticket_new_response_create_internal (
        text,
        success_copy,
        ticket_id_copy
        );
    if (!result) {
        free(success_copy);
        free(ticket_id_copy);
    }
    return result;
}

void ticket_new_response_free(ticket_new_response_t *ticket_new_response) {
    if(NULL == ticket_new_response){
        return ;
    }
    if(ticket_new_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ticket_new_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ticket_new_response->text) {
        free(ticket_new_response->text);
        ticket_new_response->text = NULL;
    }
    if (ticket_new_response->success) {
        free(ticket_new_response->success);
        ticket_new_response->success = NULL;
    }
    if (ticket_new_response->ticket_id) {
        free(ticket_new_response->ticket_id);
        ticket_new_response->ticket_id = NULL;
    }
    free(ticket_new_response);
}

cJSON *ticket_new_response_convertToJSON(ticket_new_response_t *ticket_new_response) {
    cJSON *item = cJSON_CreateObject();

    // ticket_new_response->text
    if (!ticket_new_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", ticket_new_response->text) == NULL) {
    goto fail; //String
    }


    // ticket_new_response->success
    if (!ticket_new_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *ticket_new_response->success) == NULL) {
    goto fail; //Bool
    }


    // ticket_new_response->ticket_id
    if(ticket_new_response->ticket_id) {
    if(cJSON_AddNumberToObject(item, "ticket_id", *ticket_new_response->ticket_id) == NULL) {
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

ticket_new_response_t *ticket_new_response_parseFromJSON(cJSON *ticket_new_responseJSON){

    ticket_new_response_t *ticket_new_response_local_var = NULL;

    char *text_local_str = NULL;

    // define the local variable for ticket_new_response->success
    int *success_local_var = NULL;

    // define the local variable for ticket_new_response->ticket_id
    int *ticket_id_local_var = NULL;

    // ticket_new_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(ticket_new_responseJSON, "text");
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

    // ticket_new_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(ticket_new_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (!success) {
        goto end;
    }

    
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

    // ticket_new_response->ticket_id
    cJSON *ticket_id = cJSON_GetObjectItemCaseSensitive(ticket_new_responseJSON, "ticket_id");
    if (cJSON_IsNull(ticket_id)) {
        ticket_id = NULL;
    }
    if (ticket_id) { 
    if(!cJSON_IsNumber(ticket_id))
    {
    goto end; //Numeric
    }
    ticket_id_local_var = malloc(sizeof(int));
    if(!ticket_id_local_var)
    {
        goto end;
    }
    *ticket_id_local_var = ticket_id->valuedouble;
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    ticket_new_response_local_var = ticket_new_response_create_internal (
        text_local_str,
        success_local_var,
        ticket_id_local_var
        );

    if (!ticket_new_response_local_var) {
        goto end;
    }

    return ticket_new_response_local_var;
end:
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (ticket_id_local_var) {
        free(ticket_id_local_var);
        ticket_id_local_var = NULL;
    }
    return NULL;

}
