#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_alert_request.h"



static mail_alert_request_t *mail_alert_request_create_internal(
    char *type,
    char *value,
    char *to,
    char *enabled
    ) {
    mail_alert_request_t *mail_alert_request_local_var = malloc(sizeof(mail_alert_request_t));
    if (!mail_alert_request_local_var) {
        return NULL;
    }
    memset(mail_alert_request_local_var, 0, sizeof(mail_alert_request_t));
    mail_alert_request_local_var->_library_owned = 1;
    mail_alert_request_local_var->type = type;
    mail_alert_request_local_var->value = value;
    mail_alert_request_local_var->to = to;
    mail_alert_request_local_var->enabled = enabled;
    return mail_alert_request_local_var;
}

__attribute__((deprecated)) mail_alert_request_t *mail_alert_request_create(
    char *type,
    char *value,
    char *to,
    char *enabled
    ) {
    mail_alert_request_t *result = mail_alert_request_create_internal (
        type,
        value,
        to,
        enabled
        );
    if (!result) {
    }
    return result;
}

void mail_alert_request_free(mail_alert_request_t *mail_alert_request) {
    if(NULL == mail_alert_request){
        return ;
    }
    if(mail_alert_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_alert_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_alert_request->type) {
        free(mail_alert_request->type);
        mail_alert_request->type = NULL;
    }
    if (mail_alert_request->value) {
        free(mail_alert_request->value);
        mail_alert_request->value = NULL;
    }
    if (mail_alert_request->to) {
        free(mail_alert_request->to);
        mail_alert_request->to = NULL;
    }
    if (mail_alert_request->enabled) {
        free(mail_alert_request->enabled);
        mail_alert_request->enabled = NULL;
    }
    free(mail_alert_request);
}

cJSON *mail_alert_request_convertToJSON(mail_alert_request_t *mail_alert_request) {
    cJSON *item = cJSON_CreateObject();

    // mail_alert_request->type
    if(mail_alert_request->type) {
    if(cJSON_AddStringToObject(item, "type", mail_alert_request->type) == NULL) {
    goto fail; //String
    }
    }


    // mail_alert_request->value
    if(mail_alert_request->value) {
    if(cJSON_AddStringToObject(item, "value", mail_alert_request->value) == NULL) {
    goto fail; //String
    }
    }


    // mail_alert_request->to
    if(mail_alert_request->to) {
    if(cJSON_AddStringToObject(item, "to", mail_alert_request->to) == NULL) {
    goto fail; //String
    }
    }


    // mail_alert_request->enabled
    if(mail_alert_request->enabled) {
    if(cJSON_AddStringToObject(item, "enabled", mail_alert_request->enabled) == NULL) {
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

mail_alert_request_t *mail_alert_request_parseFromJSON(cJSON *mail_alert_requestJSON){

    mail_alert_request_t *mail_alert_request_local_var = NULL;

    char *type_local_str = NULL;

    char *value_local_str = NULL;

    char *to_local_str = NULL;

    char *enabled_local_str = NULL;

    // mail_alert_request->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(mail_alert_requestJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // mail_alert_request->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(mail_alert_requestJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // mail_alert_request->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(mail_alert_requestJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (to) { 
    if(!cJSON_IsString(to) && !cJSON_IsNull(to))
    {
    goto end; //String
    }
    }

    // mail_alert_request->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(mail_alert_requestJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsString(enabled) && !cJSON_IsNull(enabled))
    {
    goto end; //String
    }
    }


    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);
    if (to && !cJSON_IsNull(to)) to_local_str = strdup(to->valuestring);
    if (enabled && !cJSON_IsNull(enabled)) enabled_local_str = strdup(enabled->valuestring);

    mail_alert_request_local_var = mail_alert_request_create_internal (
        type_local_str,
        value_local_str,
        to_local_str,
        enabled_local_str
        );

    if (!mail_alert_request_local_var) {
        goto end;
    }

    return mail_alert_request_local_var;
end:
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (value_local_str) {
        free(value_local_str);
        value_local_str = NULL;
    }
    if (to_local_str) {
        free(to_local_str);
        to_local_str = NULL;
    }
    if (enabled_local_str) {
        free(enabled_local_str);
        enabled_local_str = NULL;
    }
    return NULL;

}
