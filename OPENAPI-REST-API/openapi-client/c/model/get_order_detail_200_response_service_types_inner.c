#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_order_detail_200_response_service_types_inner.h"



static get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_create_internal(
    int services_id,
    char *services_name,
    int services_cost,
    char *services_field1,
    char *services_field2,
    char *services_module
    ) {
    get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_local_var = malloc(sizeof(get_order_detail_200_response_service_types_inner_t));
    if (!get_order_detail_200_response_service_types_inner_local_var) {
        return NULL;
    }
    get_order_detail_200_response_service_types_inner_local_var->services_id = services_id;
    get_order_detail_200_response_service_types_inner_local_var->services_name = services_name;
    get_order_detail_200_response_service_types_inner_local_var->services_cost = services_cost;
    get_order_detail_200_response_service_types_inner_local_var->services_field1 = services_field1;
    get_order_detail_200_response_service_types_inner_local_var->services_field2 = services_field2;
    get_order_detail_200_response_service_types_inner_local_var->services_module = services_module;

    get_order_detail_200_response_service_types_inner_local_var->_library_owned = 1;
    return get_order_detail_200_response_service_types_inner_local_var;
}

__attribute__((deprecated)) get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_create(
    int services_id,
    char *services_name,
    int services_cost,
    char *services_field1,
    char *services_field2,
    char *services_module
    ) {
    return get_order_detail_200_response_service_types_inner_create_internal (
        services_id,
        services_name,
        services_cost,
        services_field1,
        services_field2,
        services_module
        );
}

void get_order_detail_200_response_service_types_inner_free(get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner) {
    if(NULL == get_order_detail_200_response_service_types_inner){
        return ;
    }
    if(get_order_detail_200_response_service_types_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_order_detail_200_response_service_types_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_order_detail_200_response_service_types_inner->services_name) {
        free(get_order_detail_200_response_service_types_inner->services_name);
        get_order_detail_200_response_service_types_inner->services_name = NULL;
    }
    if (get_order_detail_200_response_service_types_inner->services_field1) {
        free(get_order_detail_200_response_service_types_inner->services_field1);
        get_order_detail_200_response_service_types_inner->services_field1 = NULL;
    }
    if (get_order_detail_200_response_service_types_inner->services_field2) {
        free(get_order_detail_200_response_service_types_inner->services_field2);
        get_order_detail_200_response_service_types_inner->services_field2 = NULL;
    }
    if (get_order_detail_200_response_service_types_inner->services_module) {
        free(get_order_detail_200_response_service_types_inner->services_module);
        get_order_detail_200_response_service_types_inner->services_module = NULL;
    }
    free(get_order_detail_200_response_service_types_inner);
}

cJSON *get_order_detail_200_response_service_types_inner_convertToJSON(get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_order_detail_200_response_service_types_inner->services_id
    if(get_order_detail_200_response_service_types_inner->services_id) {
    if(cJSON_AddNumberToObject(item, "services_id", get_order_detail_200_response_service_types_inner->services_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_order_detail_200_response_service_types_inner->services_name
    if(get_order_detail_200_response_service_types_inner->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", get_order_detail_200_response_service_types_inner->services_name) == NULL) {
    goto fail; //String
    }
    }


    // get_order_detail_200_response_service_types_inner->services_cost
    if(get_order_detail_200_response_service_types_inner->services_cost) {
    if(cJSON_AddNumberToObject(item, "services_cost", get_order_detail_200_response_service_types_inner->services_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_order_detail_200_response_service_types_inner->services_field1
    if(get_order_detail_200_response_service_types_inner->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", get_order_detail_200_response_service_types_inner->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // get_order_detail_200_response_service_types_inner->services_field2
    if(get_order_detail_200_response_service_types_inner->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", get_order_detail_200_response_service_types_inner->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // get_order_detail_200_response_service_types_inner->services_module
    if(get_order_detail_200_response_service_types_inner->services_module) {
    if(cJSON_AddStringToObject(item, "services_module", get_order_detail_200_response_service_types_inner->services_module) == NULL) {
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

get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_parseFromJSON(cJSON *get_order_detail_200_response_service_types_innerJSON){

    get_order_detail_200_response_service_types_inner_t *get_order_detail_200_response_service_types_inner_local_var = NULL;

    // get_order_detail_200_response_service_types_inner->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_service_types_innerJSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (services_id) { 
    if(!cJSON_IsNumber(services_id))
    {
    goto end; //Numeric
    }
    }

    // get_order_detail_200_response_service_types_inner->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_service_types_innerJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // get_order_detail_200_response_service_types_inner->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_service_types_innerJSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (services_cost) { 
    if(!cJSON_IsNumber(services_cost))
    {
    goto end; //Numeric
    }
    }

    // get_order_detail_200_response_service_types_inner->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_service_types_innerJSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // get_order_detail_200_response_service_types_inner->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_service_types_innerJSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // get_order_detail_200_response_service_types_inner->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_service_types_innerJSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (services_module) { 
    if(!cJSON_IsString(services_module) && !cJSON_IsNull(services_module))
    {
    goto end; //String
    }
    }


    get_order_detail_200_response_service_types_inner_local_var = get_order_detail_200_response_service_types_inner_create_internal (
        services_id ? services_id->valuedouble : 0,
        services_name && !cJSON_IsNull(services_name) ? strdup(services_name->valuestring) : NULL,
        services_cost ? services_cost->valuedouble : 0,
        services_field1 && !cJSON_IsNull(services_field1) ? strdup(services_field1->valuestring) : NULL,
        services_field2 && !cJSON_IsNull(services_field2) ? strdup(services_field2->valuestring) : NULL,
        services_module && !cJSON_IsNull(services_module) ? strdup(services_module->valuestring) : NULL
        );

    return get_order_detail_200_response_service_types_inner_local_var;
end:
    return NULL;

}
