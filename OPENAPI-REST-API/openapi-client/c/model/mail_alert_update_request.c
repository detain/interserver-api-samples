#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_alert_update_request.h"



static mail_alert_update_request_t *mail_alert_update_request_create_internal(
    int alert_id,
    char *type,
    char *value,
    char *to,
    char *enabled
    ) {
    mail_alert_update_request_t *mail_alert_update_request_local_var = malloc(sizeof(mail_alert_update_request_t));
    if (!mail_alert_update_request_local_var) {
        return NULL;
    }
    mail_alert_update_request_local_var->alert_id = alert_id;
    mail_alert_update_request_local_var->type = type;
    mail_alert_update_request_local_var->value = value;
    mail_alert_update_request_local_var->to = to;
    mail_alert_update_request_local_var->enabled = enabled;

    mail_alert_update_request_local_var->_library_owned = 1;
    return mail_alert_update_request_local_var;
}

__attribute__((deprecated)) mail_alert_update_request_t *mail_alert_update_request_create(
    int alert_id,
    char *type,
    char *value,
    char *to,
    char *enabled
    ) {
    return mail_alert_update_request_create_internal (
        alert_id,
        type,
        value,
        to,
        enabled
        );
}

void mail_alert_update_request_free(mail_alert_update_request_t *mail_alert_update_request) {
    if(NULL == mail_alert_update_request){
        return ;
    }
    if(mail_alert_update_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_alert_update_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_alert_update_request->type) {
        free(mail_alert_update_request->type);
        mail_alert_update_request->type = NULL;
    }
    if (mail_alert_update_request->value) {
        free(mail_alert_update_request->value);
        mail_alert_update_request->value = NULL;
    }
    if (mail_alert_update_request->to) {
        free(mail_alert_update_request->to);
        mail_alert_update_request->to = NULL;
    }
    if (mail_alert_update_request->enabled) {
        free(mail_alert_update_request->enabled);
        mail_alert_update_request->enabled = NULL;
    }
    free(mail_alert_update_request);
}

cJSON *mail_alert_update_request_convertToJSON(mail_alert_update_request_t *mail_alert_update_request) {
    cJSON *item = cJSON_CreateObject();

    // mail_alert_update_request->alert_id
    if(mail_alert_update_request->alert_id) {
    if(cJSON_AddNumberToObject(item, "alert_id", mail_alert_update_request->alert_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_alert_update_request->type
    if(mail_alert_update_request->type) {
    if(cJSON_AddStringToObject(item, "type", mail_alert_update_request->type) == NULL) {
    goto fail; //String
    }
    }


    // mail_alert_update_request->value
    if(mail_alert_update_request->value) {
    if(cJSON_AddStringToObject(item, "value", mail_alert_update_request->value) == NULL) {
    goto fail; //String
    }
    }


    // mail_alert_update_request->to
    if(mail_alert_update_request->to) {
    if(cJSON_AddStringToObject(item, "to", mail_alert_update_request->to) == NULL) {
    goto fail; //String
    }
    }


    // mail_alert_update_request->enabled
    if(mail_alert_update_request->enabled) {
    if(cJSON_AddStringToObject(item, "enabled", mail_alert_update_request->enabled) == NULL) {
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

mail_alert_update_request_t *mail_alert_update_request_parseFromJSON(cJSON *mail_alert_update_requestJSON){

    mail_alert_update_request_t *mail_alert_update_request_local_var = NULL;

    // mail_alert_update_request->alert_id
    cJSON *alert_id = cJSON_GetObjectItemCaseSensitive(mail_alert_update_requestJSON, "alert_id");
    if (cJSON_IsNull(alert_id)) {
        alert_id = NULL;
    }
    if (alert_id) { 
    if(!cJSON_IsNumber(alert_id))
    {
    goto end; //Numeric
    }
    }

    // mail_alert_update_request->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(mail_alert_update_requestJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // mail_alert_update_request->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(mail_alert_update_requestJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // mail_alert_update_request->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(mail_alert_update_requestJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (to) { 
    if(!cJSON_IsString(to) && !cJSON_IsNull(to))
    {
    goto end; //String
    }
    }

    // mail_alert_update_request->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(mail_alert_update_requestJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsString(enabled) && !cJSON_IsNull(enabled))
    {
    goto end; //String
    }
    }


    mail_alert_update_request_local_var = mail_alert_update_request_create_internal (
        alert_id ? alert_id->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        to && !cJSON_IsNull(to) ? strdup(to->valuestring) : NULL,
        enabled && !cJSON_IsNull(enabled) ? strdup(enabled->valuestring) : NULL
        );

    return mail_alert_update_request_local_var;
end:
    return NULL;

}
