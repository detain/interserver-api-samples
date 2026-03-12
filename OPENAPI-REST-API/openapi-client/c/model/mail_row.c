#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_row.h"



static mail_row_t *mail_row_create_internal(
    char *mail_id,
    char *repeat_invoices_cost,
    char *mail_username,
    char *mail_status,
    char *services_name
    ) {
    mail_row_t *mail_row_local_var = malloc(sizeof(mail_row_t));
    if (!mail_row_local_var) {
        return NULL;
    }
    mail_row_local_var->mail_id = mail_id;
    mail_row_local_var->repeat_invoices_cost = repeat_invoices_cost;
    mail_row_local_var->mail_username = mail_username;
    mail_row_local_var->mail_status = mail_status;
    mail_row_local_var->services_name = services_name;

    mail_row_local_var->_library_owned = 1;
    return mail_row_local_var;
}

__attribute__((deprecated)) mail_row_t *mail_row_create(
    char *mail_id,
    char *repeat_invoices_cost,
    char *mail_username,
    char *mail_status,
    char *services_name
    ) {
    return mail_row_create_internal (
        mail_id,
        repeat_invoices_cost,
        mail_username,
        mail_status,
        services_name
        );
}

void mail_row_free(mail_row_t *mail_row) {
    if(NULL == mail_row){
        return ;
    }
    if(mail_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_row->mail_id) {
        free(mail_row->mail_id);
        mail_row->mail_id = NULL;
    }
    if (mail_row->repeat_invoices_cost) {
        free(mail_row->repeat_invoices_cost);
        mail_row->repeat_invoices_cost = NULL;
    }
    if (mail_row->mail_username) {
        free(mail_row->mail_username);
        mail_row->mail_username = NULL;
    }
    if (mail_row->mail_status) {
        free(mail_row->mail_status);
        mail_row->mail_status = NULL;
    }
    if (mail_row->services_name) {
        free(mail_row->services_name);
        mail_row->services_name = NULL;
    }
    free(mail_row);
}

cJSON *mail_row_convertToJSON(mail_row_t *mail_row) {
    cJSON *item = cJSON_CreateObject();

    // mail_row->mail_id
    if(mail_row->mail_id) {
    if(cJSON_AddStringToObject(item, "mail_id", mail_row->mail_id) == NULL) {
    goto fail; //String
    }
    }


    // mail_row->repeat_invoices_cost
    if(mail_row->repeat_invoices_cost) {
    if(cJSON_AddStringToObject(item, "repeat_invoices_cost", mail_row->repeat_invoices_cost) == NULL) {
    goto fail; //String
    }
    }


    // mail_row->mail_username
    if(mail_row->mail_username) {
    if(cJSON_AddStringToObject(item, "mail_username", mail_row->mail_username) == NULL) {
    goto fail; //String
    }
    }


    // mail_row->mail_status
    if(mail_row->mail_status) {
    if(cJSON_AddStringToObject(item, "mail_status", mail_row->mail_status) == NULL) {
    goto fail; //String
    }
    }


    // mail_row->services_name
    if(mail_row->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", mail_row->services_name) == NULL) {
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

mail_row_t *mail_row_parseFromJSON(cJSON *mail_rowJSON){

    mail_row_t *mail_row_local_var = NULL;

    // mail_row->mail_id
    cJSON *mail_id = cJSON_GetObjectItemCaseSensitive(mail_rowJSON, "mail_id");
    if (cJSON_IsNull(mail_id)) {
        mail_id = NULL;
    }
    if (mail_id) { 
    if(!cJSON_IsString(mail_id) && !cJSON_IsNull(mail_id))
    {
    goto end; //String
    }
    }

    // mail_row->repeat_invoices_cost
    cJSON *repeat_invoices_cost = cJSON_GetObjectItemCaseSensitive(mail_rowJSON, "repeat_invoices_cost");
    if (cJSON_IsNull(repeat_invoices_cost)) {
        repeat_invoices_cost = NULL;
    }
    if (repeat_invoices_cost) { 
    if(!cJSON_IsString(repeat_invoices_cost) && !cJSON_IsNull(repeat_invoices_cost))
    {
    goto end; //String
    }
    }

    // mail_row->mail_username
    cJSON *mail_username = cJSON_GetObjectItemCaseSensitive(mail_rowJSON, "mail_username");
    if (cJSON_IsNull(mail_username)) {
        mail_username = NULL;
    }
    if (mail_username) { 
    if(!cJSON_IsString(mail_username) && !cJSON_IsNull(mail_username))
    {
    goto end; //String
    }
    }

    // mail_row->mail_status
    cJSON *mail_status = cJSON_GetObjectItemCaseSensitive(mail_rowJSON, "mail_status");
    if (cJSON_IsNull(mail_status)) {
        mail_status = NULL;
    }
    if (mail_status) { 
    if(!cJSON_IsString(mail_status) && !cJSON_IsNull(mail_status))
    {
    goto end; //String
    }
    }

    // mail_row->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(mail_rowJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }


    mail_row_local_var = mail_row_create_internal (
        mail_id && !cJSON_IsNull(mail_id) ? strdup(mail_id->valuestring) : NULL,
        repeat_invoices_cost && !cJSON_IsNull(repeat_invoices_cost) ? strdup(repeat_invoices_cost->valuestring) : NULL,
        mail_username && !cJSON_IsNull(mail_username) ? strdup(mail_username->valuestring) : NULL,
        mail_status && !cJSON_IsNull(mail_status) ? strdup(mail_status->valuestring) : NULL,
        services_name && !cJSON_IsNull(services_name) ? strdup(services_name->valuestring) : NULL
        );

    return mail_row_local_var;
end:
    return NULL;

}
