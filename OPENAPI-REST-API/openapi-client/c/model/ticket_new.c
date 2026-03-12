#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ticket_new.h"



static ticket_new_t *ticket_new_create_internal(
    char *subject,
    char *body,
    int service_id,
    char *service_module
    ) {
    ticket_new_t *ticket_new_local_var = malloc(sizeof(ticket_new_t));
    if (!ticket_new_local_var) {
        return NULL;
    }
    ticket_new_local_var->subject = subject;
    ticket_new_local_var->body = body;
    ticket_new_local_var->service_id = service_id;
    ticket_new_local_var->service_module = service_module;

    ticket_new_local_var->_library_owned = 1;
    return ticket_new_local_var;
}

__attribute__((deprecated)) ticket_new_t *ticket_new_create(
    char *subject,
    char *body,
    int service_id,
    char *service_module
    ) {
    return ticket_new_create_internal (
        subject,
        body,
        service_id,
        service_module
        );
}

void ticket_new_free(ticket_new_t *ticket_new) {
    if(NULL == ticket_new){
        return ;
    }
    if(ticket_new->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ticket_new_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ticket_new->subject) {
        free(ticket_new->subject);
        ticket_new->subject = NULL;
    }
    if (ticket_new->body) {
        free(ticket_new->body);
        ticket_new->body = NULL;
    }
    if (ticket_new->service_module) {
        free(ticket_new->service_module);
        ticket_new->service_module = NULL;
    }
    free(ticket_new);
}

cJSON *ticket_new_convertToJSON(ticket_new_t *ticket_new) {
    cJSON *item = cJSON_CreateObject();

    // ticket_new->subject
    if (!ticket_new->subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "subject", ticket_new->subject) == NULL) {
    goto fail; //String
    }


    // ticket_new->body
    if (!ticket_new->body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "body", ticket_new->body) == NULL) {
    goto fail; //String
    }


    // ticket_new->service_id
    if(ticket_new->service_id) {
    if(cJSON_AddNumberToObject(item, "service_id", ticket_new->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ticket_new->service_module
    if(ticket_new->service_module) {
    if(cJSON_AddStringToObject(item, "service_module", ticket_new->service_module) == NULL) {
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

ticket_new_t *ticket_new_parseFromJSON(cJSON *ticket_newJSON){

    ticket_new_t *ticket_new_local_var = NULL;

    // ticket_new->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(ticket_newJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (!subject) {
        goto end;
    }

    
    if(!cJSON_IsString(subject))
    {
    goto end; //String
    }

    // ticket_new->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(ticket_newJSON, "body");
    if (cJSON_IsNull(body)) {
        body = NULL;
    }
    if (!body) {
        goto end;
    }

    
    if(!cJSON_IsString(body))
    {
    goto end; //String
    }

    // ticket_new->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(ticket_newJSON, "service_id");
    if (cJSON_IsNull(service_id)) {
        service_id = NULL;
    }
    if (service_id) { 
    if(!cJSON_IsNumber(service_id))
    {
    goto end; //Numeric
    }
    }

    // ticket_new->service_module
    cJSON *service_module = cJSON_GetObjectItemCaseSensitive(ticket_newJSON, "service_module");
    if (cJSON_IsNull(service_module)) {
        service_module = NULL;
    }
    if (service_module) { 
    if(!cJSON_IsString(service_module) && !cJSON_IsNull(service_module))
    {
    goto end; //String
    }
    }


    ticket_new_local_var = ticket_new_create_internal (
        strdup(subject->valuestring),
        strdup(body->valuestring),
        service_id ? service_id->valuedouble : 0,
        service_module && !cJSON_IsNull(service_module) ? strdup(service_module->valuestring) : NULL
        );

    return ticket_new_local_var;
end:
    return NULL;

}
