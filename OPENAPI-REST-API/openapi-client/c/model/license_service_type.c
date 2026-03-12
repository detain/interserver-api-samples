#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_service_type.h"



static license_service_type_t *license_service_type_create_internal(
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
    license_service_type_t *license_service_type_local_var = malloc(sizeof(license_service_type_t));
    if (!license_service_type_local_var) {
        return NULL;
    }
    license_service_type_local_var->services_id = services_id;
    license_service_type_local_var->services_name = services_name;
    license_service_type_local_var->services_cost = services_cost;
    license_service_type_local_var->services_category = services_category;
    license_service_type_local_var->services_buyable = services_buyable;
    license_service_type_local_var->services_type = services_type;
    license_service_type_local_var->services_field1 = services_field1;
    license_service_type_local_var->services_field2 = services_field2;
    license_service_type_local_var->services_module = services_module;

    license_service_type_local_var->_library_owned = 1;
    return license_service_type_local_var;
}

__attribute__((deprecated)) license_service_type_t *license_service_type_create(
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
    return license_service_type_create_internal (
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

void license_service_type_free(license_service_type_t *license_service_type) {
    if(NULL == license_service_type){
        return ;
    }
    if(license_service_type->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_service_type_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_service_type->services_id) {
        free(license_service_type->services_id);
        license_service_type->services_id = NULL;
    }
    if (license_service_type->services_name) {
        free(license_service_type->services_name);
        license_service_type->services_name = NULL;
    }
    if (license_service_type->services_cost) {
        free(license_service_type->services_cost);
        license_service_type->services_cost = NULL;
    }
    if (license_service_type->services_category) {
        free(license_service_type->services_category);
        license_service_type->services_category = NULL;
    }
    if (license_service_type->services_buyable) {
        free(license_service_type->services_buyable);
        license_service_type->services_buyable = NULL;
    }
    if (license_service_type->services_type) {
        free(license_service_type->services_type);
        license_service_type->services_type = NULL;
    }
    if (license_service_type->services_field1) {
        free(license_service_type->services_field1);
        license_service_type->services_field1 = NULL;
    }
    if (license_service_type->services_field2) {
        free(license_service_type->services_field2);
        license_service_type->services_field2 = NULL;
    }
    if (license_service_type->services_module) {
        free(license_service_type->services_module);
        license_service_type->services_module = NULL;
    }
    free(license_service_type);
}

cJSON *license_service_type_convertToJSON(license_service_type_t *license_service_type) {
    cJSON *item = cJSON_CreateObject();

    // license_service_type->services_id
    if(license_service_type->services_id) {
    if(cJSON_AddStringToObject(item, "services_id", license_service_type->services_id) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_name
    if(license_service_type->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", license_service_type->services_name) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_cost
    if(license_service_type->services_cost) {
    if(cJSON_AddStringToObject(item, "services_cost", license_service_type->services_cost) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_category
    if(license_service_type->services_category) {
    if(cJSON_AddStringToObject(item, "services_category", license_service_type->services_category) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_buyable
    if(license_service_type->services_buyable) {
    if(cJSON_AddStringToObject(item, "services_buyable", license_service_type->services_buyable) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_type
    if(license_service_type->services_type) {
    if(cJSON_AddStringToObject(item, "services_type", license_service_type->services_type) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_field1
    if(license_service_type->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", license_service_type->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_field2
    if(license_service_type->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", license_service_type->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // license_service_type->services_module
    if(license_service_type->services_module) {
    if(cJSON_AddStringToObject(item, "services_module", license_service_type->services_module) == NULL) {
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

license_service_type_t *license_service_type_parseFromJSON(cJSON *license_service_typeJSON){

    license_service_type_t *license_service_type_local_var = NULL;

    // license_service_type->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (services_id) { 
    if(!cJSON_IsString(services_id) && !cJSON_IsNull(services_id))
    {
    goto end; //String
    }
    }

    // license_service_type->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // license_service_type->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (services_cost) { 
    if(!cJSON_IsString(services_cost) && !cJSON_IsNull(services_cost))
    {
    goto end; //String
    }
    }

    // license_service_type->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (services_category) { 
    if(!cJSON_IsString(services_category) && !cJSON_IsNull(services_category))
    {
    goto end; //String
    }
    }

    // license_service_type->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (services_buyable) { 
    if(!cJSON_IsString(services_buyable) && !cJSON_IsNull(services_buyable))
    {
    goto end; //String
    }
    }

    // license_service_type->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (services_type) { 
    if(!cJSON_IsString(services_type) && !cJSON_IsNull(services_type))
    {
    goto end; //String
    }
    }

    // license_service_type->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // license_service_type->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // license_service_type->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(license_service_typeJSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (services_module) { 
    if(!cJSON_IsString(services_module) && !cJSON_IsNull(services_module))
    {
    goto end; //String
    }
    }


    license_service_type_local_var = license_service_type_create_internal (
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

    return license_service_type_local_var;
end:
    return NULL;

}
