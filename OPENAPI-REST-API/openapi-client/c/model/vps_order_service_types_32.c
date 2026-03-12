#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_service_types_32.h"



static vps_order_service_types_32_t *vps_order_service_types_32_create_internal(
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
    vps_order_service_types_32_t *vps_order_service_types_32_local_var = malloc(sizeof(vps_order_service_types_32_t));
    if (!vps_order_service_types_32_local_var) {
        return NULL;
    }
    vps_order_service_types_32_local_var->services_id = services_id;
    vps_order_service_types_32_local_var->services_name = services_name;
    vps_order_service_types_32_local_var->services_cost = services_cost;
    vps_order_service_types_32_local_var->services_category = services_category;
    vps_order_service_types_32_local_var->services_buyable = services_buyable;
    vps_order_service_types_32_local_var->services_type = services_type;
    vps_order_service_types_32_local_var->services_field1 = services_field1;
    vps_order_service_types_32_local_var->services_field2 = services_field2;
    vps_order_service_types_32_local_var->services_module = services_module;

    vps_order_service_types_32_local_var->_library_owned = 1;
    return vps_order_service_types_32_local_var;
}

__attribute__((deprecated)) vps_order_service_types_32_t *vps_order_service_types_32_create(
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
    return vps_order_service_types_32_create_internal (
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

void vps_order_service_types_32_free(vps_order_service_types_32_t *vps_order_service_types_32) {
    if(NULL == vps_order_service_types_32){
        return ;
    }
    if(vps_order_service_types_32->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_service_types_32_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_service_types_32->services_id) {
        free(vps_order_service_types_32->services_id);
        vps_order_service_types_32->services_id = NULL;
    }
    if (vps_order_service_types_32->services_name) {
        free(vps_order_service_types_32->services_name);
        vps_order_service_types_32->services_name = NULL;
    }
    if (vps_order_service_types_32->services_cost) {
        free(vps_order_service_types_32->services_cost);
        vps_order_service_types_32->services_cost = NULL;
    }
    if (vps_order_service_types_32->services_category) {
        free(vps_order_service_types_32->services_category);
        vps_order_service_types_32->services_category = NULL;
    }
    if (vps_order_service_types_32->services_buyable) {
        free(vps_order_service_types_32->services_buyable);
        vps_order_service_types_32->services_buyable = NULL;
    }
    if (vps_order_service_types_32->services_type) {
        free(vps_order_service_types_32->services_type);
        vps_order_service_types_32->services_type = NULL;
    }
    if (vps_order_service_types_32->services_field1) {
        free(vps_order_service_types_32->services_field1);
        vps_order_service_types_32->services_field1 = NULL;
    }
    if (vps_order_service_types_32->services_field2) {
        free(vps_order_service_types_32->services_field2);
        vps_order_service_types_32->services_field2 = NULL;
    }
    if (vps_order_service_types_32->services_module) {
        free(vps_order_service_types_32->services_module);
        vps_order_service_types_32->services_module = NULL;
    }
    free(vps_order_service_types_32);
}

cJSON *vps_order_service_types_32_convertToJSON(vps_order_service_types_32_t *vps_order_service_types_32) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_service_types_32->services_id
    if(vps_order_service_types_32->services_id) {
    if(cJSON_AddStringToObject(item, "services_id", vps_order_service_types_32->services_id) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_name
    if(vps_order_service_types_32->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", vps_order_service_types_32->services_name) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_cost
    if(vps_order_service_types_32->services_cost) {
    if(cJSON_AddStringToObject(item, "services_cost", vps_order_service_types_32->services_cost) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_category
    if(vps_order_service_types_32->services_category) {
    if(cJSON_AddStringToObject(item, "services_category", vps_order_service_types_32->services_category) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_buyable
    if(vps_order_service_types_32->services_buyable) {
    if(cJSON_AddStringToObject(item, "services_buyable", vps_order_service_types_32->services_buyable) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_type
    if(vps_order_service_types_32->services_type) {
    if(cJSON_AddStringToObject(item, "services_type", vps_order_service_types_32->services_type) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_field1
    if(vps_order_service_types_32->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", vps_order_service_types_32->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_field2
    if(vps_order_service_types_32->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", vps_order_service_types_32->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_service_types_32->services_module
    if(vps_order_service_types_32->services_module) {
    if(cJSON_AddStringToObject(item, "services_module", vps_order_service_types_32->services_module) == NULL) {
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

vps_order_service_types_32_t *vps_order_service_types_32_parseFromJSON(cJSON *vps_order_service_types_32JSON){

    vps_order_service_types_32_t *vps_order_service_types_32_local_var = NULL;

    // vps_order_service_types_32->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (services_id) { 
    if(!cJSON_IsString(services_id) && !cJSON_IsNull(services_id))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (services_cost) { 
    if(!cJSON_IsString(services_cost) && !cJSON_IsNull(services_cost))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (services_category) { 
    if(!cJSON_IsString(services_category) && !cJSON_IsNull(services_category))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (services_buyable) { 
    if(!cJSON_IsString(services_buyable) && !cJSON_IsNull(services_buyable))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (services_type) { 
    if(!cJSON_IsString(services_type) && !cJSON_IsNull(services_type))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // vps_order_service_types_32->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(vps_order_service_types_32JSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (services_module) { 
    if(!cJSON_IsString(services_module) && !cJSON_IsNull(services_module))
    {
    goto end; //String
    }
    }


    vps_order_service_types_32_local_var = vps_order_service_types_32_create_internal (
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

    return vps_order_service_types_32_local_var;
end:
    return NULL;

}
