#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_service_type.h"



static mail_service_type_t *mail_service_type_create_internal(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
    ) {
    mail_service_type_t *mail_service_type_local_var = malloc(sizeof(mail_service_type_t));
    if (!mail_service_type_local_var) {
        return NULL;
    }
    mail_service_type_local_var->services_id = services_id;
    mail_service_type_local_var->services_name = services_name;
    mail_service_type_local_var->services_cost = services_cost;
    mail_service_type_local_var->services_category = services_category;
    mail_service_type_local_var->services_buyable = services_buyable;
    mail_service_type_local_var->services_type = services_type;
    mail_service_type_local_var->services_field1 = services_field1;
    mail_service_type_local_var->services_field2 = services_field2;
    mail_service_type_local_var->services_module = services_module;

    mail_service_type_local_var->_library_owned = 1;
    return mail_service_type_local_var;
}

__attribute__((deprecated)) mail_service_type_t *mail_service_type_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
    ) {
    return mail_service_type_create_internal (
        services_id,
        services_name,
        services_cost,
        services_category,
        services_buyable,
        services_type,
        services_field1,
        services_field2,
        services_module
        );
}

void mail_service_type_free(mail_service_type_t *mail_service_type) {
    if(NULL == mail_service_type){
        return ;
    }
    if(mail_service_type->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_service_type_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_service_type->services_id) {
        free(mail_service_type->services_id);
        mail_service_type->services_id = NULL;
    }
    if (mail_service_type->services_name) {
        free(mail_service_type->services_name);
        mail_service_type->services_name = NULL;
    }
    if (mail_service_type->services_cost) {
        free(mail_service_type->services_cost);
        mail_service_type->services_cost = NULL;
    }
    if (mail_service_type->services_category) {
        free(mail_service_type->services_category);
        mail_service_type->services_category = NULL;
    }
    if (mail_service_type->services_buyable) {
        free(mail_service_type->services_buyable);
        mail_service_type->services_buyable = NULL;
    }
    if (mail_service_type->services_type) {
        free(mail_service_type->services_type);
        mail_service_type->services_type = NULL;
    }
    if (mail_service_type->services_field1) {
        free(mail_service_type->services_field1);
        mail_service_type->services_field1 = NULL;
    }
    if (mail_service_type->services_field2) {
        free(mail_service_type->services_field2);
        mail_service_type->services_field2 = NULL;
    }
    if (mail_service_type->services_module) {
        free(mail_service_type->services_module);
        mail_service_type->services_module = NULL;
    }
    free(mail_service_type);
}

cJSON *mail_service_type_convertToJSON(mail_service_type_t *mail_service_type) {
    cJSON *item = cJSON_CreateObject();

    // mail_service_type->services_id
    if(mail_service_type->services_id) {
    if(cJSON_AddStringToObject(item, "services_id", mail_service_type->services_id) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_name
    if(mail_service_type->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", mail_service_type->services_name) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_cost
    if(mail_service_type->services_cost) {
    if(cJSON_AddStringToObject(item, "services_cost", mail_service_type->services_cost) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_category
    if(mail_service_type->services_category) {
    if(cJSON_AddStringToObject(item, "services_category", mail_service_type->services_category) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_buyable
    if(mail_service_type->services_buyable) {
    if(cJSON_AddStringToObject(item, "services_buyable", mail_service_type->services_buyable) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_type
    if(mail_service_type->services_type) {
    if(cJSON_AddStringToObject(item, "services_type", mail_service_type->services_type) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_field1
    if(mail_service_type->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", mail_service_type->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_field2
    if(mail_service_type->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", mail_service_type->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_type->services_module
    if(mail_service_type->services_module) {
    if(cJSON_AddStringToObject(item, "services_module", mail_service_type->services_module) == NULL) {
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

mail_service_type_t *mail_service_type_parseFromJSON(cJSON *mail_service_typeJSON){

    mail_service_type_t *mail_service_type_local_var = NULL;

    // mail_service_type->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (services_id) { 
    if(!cJSON_IsString(services_id) && !cJSON_IsNull(services_id))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (services_cost) { 
    if(!cJSON_IsString(services_cost) && !cJSON_IsNull(services_cost))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (services_category) { 
    if(!cJSON_IsString(services_category) && !cJSON_IsNull(services_category))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (services_buyable) { 
    if(!cJSON_IsString(services_buyable) && !cJSON_IsNull(services_buyable))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (services_type) { 
    if(!cJSON_IsString(services_type) && !cJSON_IsNull(services_type))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // mail_service_type->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(mail_service_typeJSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (services_module) { 
    if(!cJSON_IsString(services_module) && !cJSON_IsNull(services_module))
    {
    goto end; //String
    }
    }


    mail_service_type_local_var = mail_service_type_create_internal (
        services_id && !cJSON_IsNull(services_id) ? strdup(services_id->valuestring) : NULL,
        services_name && !cJSON_IsNull(services_name) ? strdup(services_name->valuestring) : NULL,
        services_cost && !cJSON_IsNull(services_cost) ? strdup(services_cost->valuestring) : NULL,
        services_category && !cJSON_IsNull(services_category) ? strdup(services_category->valuestring) : NULL,
        services_buyable && !cJSON_IsNull(services_buyable) ? strdup(services_buyable->valuestring) : NULL,
        services_type && !cJSON_IsNull(services_type) ? strdup(services_type->valuestring) : NULL,
        services_field1 && !cJSON_IsNull(services_field1) ? strdup(services_field1->valuestring) : NULL,
        services_field2 && !cJSON_IsNull(services_field2) ? strdup(services_field2->valuestring) : NULL,
        services_module && !cJSON_IsNull(services_module) ? strdup(services_module->valuestring) : NULL
        );

    return mail_service_type_local_var;
end:
    return NULL;

}
