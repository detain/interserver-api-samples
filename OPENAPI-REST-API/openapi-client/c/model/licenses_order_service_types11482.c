#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_order_service_types11482.h"



static licenses_order_service_types11482_t *licenses_order_service_types11482_create_internal(
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
    licenses_order_service_types11482_t *licenses_order_service_types11482_local_var = malloc(sizeof(licenses_order_service_types11482_t));
    if (!licenses_order_service_types11482_local_var) {
        return NULL;
    }
    licenses_order_service_types11482_local_var->services_id = services_id;
    licenses_order_service_types11482_local_var->services_name = services_name;
    licenses_order_service_types11482_local_var->services_cost = services_cost;
    licenses_order_service_types11482_local_var->services_category = services_category;
    licenses_order_service_types11482_local_var->services_buyable = services_buyable;
    licenses_order_service_types11482_local_var->services_type = services_type;
    licenses_order_service_types11482_local_var->services_field1 = services_field1;
    licenses_order_service_types11482_local_var->services_field2 = services_field2;
    licenses_order_service_types11482_local_var->services_module = services_module;

    licenses_order_service_types11482_local_var->_library_owned = 1;
    return licenses_order_service_types11482_local_var;
}

__attribute__((deprecated)) licenses_order_service_types11482_t *licenses_order_service_types11482_create(
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
    return licenses_order_service_types11482_create_internal (
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

void licenses_order_service_types11482_free(licenses_order_service_types11482_t *licenses_order_service_types11482) {
    if(NULL == licenses_order_service_types11482){
        return ;
    }
    if(licenses_order_service_types11482->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_order_service_types11482_free");
        return ;
    }
    listEntry_t *listEntry;
    if (licenses_order_service_types11482->services_id) {
        free(licenses_order_service_types11482->services_id);
        licenses_order_service_types11482->services_id = NULL;
    }
    if (licenses_order_service_types11482->services_name) {
        free(licenses_order_service_types11482->services_name);
        licenses_order_service_types11482->services_name = NULL;
    }
    if (licenses_order_service_types11482->services_cost) {
        free(licenses_order_service_types11482->services_cost);
        licenses_order_service_types11482->services_cost = NULL;
    }
    if (licenses_order_service_types11482->services_category) {
        free(licenses_order_service_types11482->services_category);
        licenses_order_service_types11482->services_category = NULL;
    }
    if (licenses_order_service_types11482->services_buyable) {
        free(licenses_order_service_types11482->services_buyable);
        licenses_order_service_types11482->services_buyable = NULL;
    }
    if (licenses_order_service_types11482->services_type) {
        free(licenses_order_service_types11482->services_type);
        licenses_order_service_types11482->services_type = NULL;
    }
    if (licenses_order_service_types11482->services_field1) {
        free(licenses_order_service_types11482->services_field1);
        licenses_order_service_types11482->services_field1 = NULL;
    }
    if (licenses_order_service_types11482->services_field2) {
        free(licenses_order_service_types11482->services_field2);
        licenses_order_service_types11482->services_field2 = NULL;
    }
    if (licenses_order_service_types11482->services_module) {
        free(licenses_order_service_types11482->services_module);
        licenses_order_service_types11482->services_module = NULL;
    }
    free(licenses_order_service_types11482);
}

cJSON *licenses_order_service_types11482_convertToJSON(licenses_order_service_types11482_t *licenses_order_service_types11482) {
    cJSON *item = cJSON_CreateObject();

    // licenses_order_service_types11482->services_id
    if(licenses_order_service_types11482->services_id) {
    if(cJSON_AddStringToObject(item, "services_id", licenses_order_service_types11482->services_id) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_name
    if(licenses_order_service_types11482->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", licenses_order_service_types11482->services_name) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_cost
    if(licenses_order_service_types11482->services_cost) {
    if(cJSON_AddStringToObject(item, "services_cost", licenses_order_service_types11482->services_cost) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_category
    if(licenses_order_service_types11482->services_category) {
    if(cJSON_AddStringToObject(item, "services_category", licenses_order_service_types11482->services_category) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_buyable
    if(licenses_order_service_types11482->services_buyable) {
    if(cJSON_AddStringToObject(item, "services_buyable", licenses_order_service_types11482->services_buyable) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_type
    if(licenses_order_service_types11482->services_type) {
    if(cJSON_AddStringToObject(item, "services_type", licenses_order_service_types11482->services_type) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_field1
    if(licenses_order_service_types11482->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", licenses_order_service_types11482->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_field2
    if(licenses_order_service_types11482->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", licenses_order_service_types11482->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_types11482->services_module
    if(licenses_order_service_types11482->services_module) {
    if(cJSON_AddStringToObject(item, "services_module", licenses_order_service_types11482->services_module) == NULL) {
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

licenses_order_service_types11482_t *licenses_order_service_types11482_parseFromJSON(cJSON *licenses_order_service_types11482JSON){

    licenses_order_service_types11482_t *licenses_order_service_types11482_local_var = NULL;

    // licenses_order_service_types11482->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (services_id) { 
    if(!cJSON_IsString(services_id) && !cJSON_IsNull(services_id))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (services_cost) { 
    if(!cJSON_IsString(services_cost) && !cJSON_IsNull(services_cost))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (services_category) { 
    if(!cJSON_IsString(services_category) && !cJSON_IsNull(services_category))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (services_buyable) { 
    if(!cJSON_IsString(services_buyable) && !cJSON_IsNull(services_buyable))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (services_type) { 
    if(!cJSON_IsString(services_type) && !cJSON_IsNull(services_type))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // licenses_order_service_types11482->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(licenses_order_service_types11482JSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (services_module) { 
    if(!cJSON_IsString(services_module) && !cJSON_IsNull(services_module))
    {
    goto end; //String
    }
    }


    licenses_order_service_types11482_local_var = licenses_order_service_types11482_create_internal (
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

    return licenses_order_service_types11482_local_var;
end:
    return NULL;

}
