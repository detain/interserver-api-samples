#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_alerts_response_inner.h"



static mail_alerts_response_inner_t *mail_alerts_response_inner_create_internal(
    int alert_id,
    char *alert_type,
    char *alert_value,
    char *alert_to,
    char *alert_enabled
    ) {
    mail_alerts_response_inner_t *mail_alerts_response_inner_local_var = malloc(sizeof(mail_alerts_response_inner_t));
    if (!mail_alerts_response_inner_local_var) {
        return NULL;
    }
    mail_alerts_response_inner_local_var->alert_id = alert_id;
    mail_alerts_response_inner_local_var->alert_type = alert_type;
    mail_alerts_response_inner_local_var->alert_value = alert_value;
    mail_alerts_response_inner_local_var->alert_to = alert_to;
    mail_alerts_response_inner_local_var->alert_enabled = alert_enabled;

    mail_alerts_response_inner_local_var->_library_owned = 1;
    return mail_alerts_response_inner_local_var;
}

__attribute__((deprecated)) mail_alerts_response_inner_t *mail_alerts_response_inner_create(
    int alert_id,
    char *alert_type,
    char *alert_value,
    char *alert_to,
    char *alert_enabled
    ) {
    return mail_alerts_response_inner_create_internal (
        alert_id,
        alert_type,
        alert_value,
        alert_to,
        alert_enabled
        );
}

void mail_alerts_response_inner_free(mail_alerts_response_inner_t *mail_alerts_response_inner) {
    if(NULL == mail_alerts_response_inner){
        return ;
    }
    if(mail_alerts_response_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_alerts_response_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_alerts_response_inner->alert_type) {
        free(mail_alerts_response_inner->alert_type);
        mail_alerts_response_inner->alert_type = NULL;
    }
    if (mail_alerts_response_inner->alert_value) {
        free(mail_alerts_response_inner->alert_value);
        mail_alerts_response_inner->alert_value = NULL;
    }
    if (mail_alerts_response_inner->alert_to) {
        free(mail_alerts_response_inner->alert_to);
        mail_alerts_response_inner->alert_to = NULL;
    }
    if (mail_alerts_response_inner->alert_enabled) {
        free(mail_alerts_response_inner->alert_enabled);
        mail_alerts_response_inner->alert_enabled = NULL;
    }
    free(mail_alerts_response_inner);
}

cJSON *mail_alerts_response_inner_convertToJSON(mail_alerts_response_inner_t *mail_alerts_response_inner) {
    cJSON *item = cJSON_CreateObject();

    // mail_alerts_response_inner->alert_id
    if(mail_alerts_response_inner->alert_id) {
    if(cJSON_AddNumberToObject(item, "alert_id", mail_alerts_response_inner->alert_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_alerts_response_inner->alert_type
    if(mail_alerts_response_inner->alert_type) {
    if(cJSON_AddStringToObject(item, "alert_type", mail_alerts_response_inner->alert_type) == NULL) {
    goto fail; //String
    }
    }


    // mail_alerts_response_inner->alert_value
    if(mail_alerts_response_inner->alert_value) {
    if(cJSON_AddStringToObject(item, "alert_value", mail_alerts_response_inner->alert_value) == NULL) {
    goto fail; //String
    }
    }


    // mail_alerts_response_inner->alert_to
    if(mail_alerts_response_inner->alert_to) {
    if(cJSON_AddStringToObject(item, "alert_to", mail_alerts_response_inner->alert_to) == NULL) {
    goto fail; //String
    }
    }


    // mail_alerts_response_inner->alert_enabled
    if(mail_alerts_response_inner->alert_enabled) {
    if(cJSON_AddStringToObject(item, "alert_enabled", mail_alerts_response_inner->alert_enabled) == NULL) {
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

mail_alerts_response_inner_t *mail_alerts_response_inner_parseFromJSON(cJSON *mail_alerts_response_innerJSON){

    mail_alerts_response_inner_t *mail_alerts_response_inner_local_var = NULL;

    // mail_alerts_response_inner->alert_id
    cJSON *alert_id = cJSON_GetObjectItemCaseSensitive(mail_alerts_response_innerJSON, "alert_id");
    if (cJSON_IsNull(alert_id)) {
        alert_id = NULL;
    }
    if (alert_id) { 
    if(!cJSON_IsNumber(alert_id))
    {
    goto end; //Numeric
    }
    }

    // mail_alerts_response_inner->alert_type
    cJSON *alert_type = cJSON_GetObjectItemCaseSensitive(mail_alerts_response_innerJSON, "alert_type");
    if (cJSON_IsNull(alert_type)) {
        alert_type = NULL;
    }
    if (alert_type) { 
    if(!cJSON_IsString(alert_type) && !cJSON_IsNull(alert_type))
    {
    goto end; //String
    }
    }

    // mail_alerts_response_inner->alert_value
    cJSON *alert_value = cJSON_GetObjectItemCaseSensitive(mail_alerts_response_innerJSON, "alert_value");
    if (cJSON_IsNull(alert_value)) {
        alert_value = NULL;
    }
    if (alert_value) { 
    if(!cJSON_IsString(alert_value) && !cJSON_IsNull(alert_value))
    {
    goto end; //String
    }
    }

    // mail_alerts_response_inner->alert_to
    cJSON *alert_to = cJSON_GetObjectItemCaseSensitive(mail_alerts_response_innerJSON, "alert_to");
    if (cJSON_IsNull(alert_to)) {
        alert_to = NULL;
    }
    if (alert_to) { 
    if(!cJSON_IsString(alert_to) && !cJSON_IsNull(alert_to))
    {
    goto end; //String
    }
    }

    // mail_alerts_response_inner->alert_enabled
    cJSON *alert_enabled = cJSON_GetObjectItemCaseSensitive(mail_alerts_response_innerJSON, "alert_enabled");
    if (cJSON_IsNull(alert_enabled)) {
        alert_enabled = NULL;
    }
    if (alert_enabled) { 
    if(!cJSON_IsString(alert_enabled) && !cJSON_IsNull(alert_enabled))
    {
    goto end; //String
    }
    }


    mail_alerts_response_inner_local_var = mail_alerts_response_inner_create_internal (
        alert_id ? alert_id->valuedouble : 0,
        alert_type && !cJSON_IsNull(alert_type) ? strdup(alert_type->valuestring) : NULL,
        alert_value && !cJSON_IsNull(alert_value) ? strdup(alert_value->valuestring) : NULL,
        alert_to && !cJSON_IsNull(alert_to) ? strdup(alert_to->valuestring) : NULL,
        alert_enabled && !cJSON_IsNull(alert_enabled) ? strdup(alert_enabled->valuestring) : NULL
        );

    return mail_alerts_response_inner_local_var;
end:
    return NULL;

}
