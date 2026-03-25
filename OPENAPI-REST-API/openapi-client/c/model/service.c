#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service.h"



static service_t *service_create_internal(
    int *services_id,
    char *services_name,
    double *services_cost,
    char *services_currency,
    int *services_category,
    int *services_buyable,
    int *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
    ) {
    service_t *service_local_var = malloc(sizeof(service_t));
    if (!service_local_var) {
        return NULL;
    }
    memset(service_local_var, 0, sizeof(service_t));
    service_local_var->_library_owned = 1;
    service_local_var->services_id = services_id;
    service_local_var->services_name = services_name;
    service_local_var->services_cost = services_cost;
    service_local_var->services_currency = services_currency;
    service_local_var->services_category = services_category;
    service_local_var->services_buyable = services_buyable;
    service_local_var->services_type = services_type;
    service_local_var->services_field1 = services_field1;
    service_local_var->services_field2 = services_field2;
    service_local_var->services_module = services_module;
    return service_local_var;
}

__attribute__((deprecated)) service_t *service_create(
    int *services_id,
    char *services_name,
    double *services_cost,
    char *services_currency,
    int *services_category,
    int *services_buyable,
    int *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
    ) {
    int *services_id_copy = NULL;
    if (services_id) {
        services_id_copy = malloc(sizeof(int));
        if (services_id_copy) *services_id_copy = *services_id;
    }
    double *services_cost_copy = NULL;
    if (services_cost) {
        services_cost_copy = malloc(sizeof(double));
        if (services_cost_copy) *services_cost_copy = *services_cost;
    }
    int *services_category_copy = NULL;
    if (services_category) {
        services_category_copy = malloc(sizeof(int));
        if (services_category_copy) *services_category_copy = *services_category;
    }
    int *services_buyable_copy = NULL;
    if (services_buyable) {
        services_buyable_copy = malloc(sizeof(int));
        if (services_buyable_copy) *services_buyable_copy = *services_buyable;
    }
    int *services_type_copy = NULL;
    if (services_type) {
        services_type_copy = malloc(sizeof(int));
        if (services_type_copy) *services_type_copy = *services_type;
    }
    service_t *result = service_create_internal (
        services_id_copy,
        services_name,
        services_cost_copy,
        services_currency,
        services_category_copy,
        services_buyable_copy,
        services_type_copy,
        services_field1,
        services_field2,
        services_module
        );
    if (!result) {
        free(services_id_copy);
        free(services_cost_copy);
        free(services_category_copy);
        free(services_buyable_copy);
        free(services_type_copy);
    }
    return result;
}

void service_free(service_t *service) {
    if(NULL == service){
        return ;
    }
    if(service->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "service_free");
        return ;
    }
    listEntry_t *listEntry;
    if (service->services_id) {
        free(service->services_id);
        service->services_id = NULL;
    }
    if (service->services_name) {
        free(service->services_name);
        service->services_name = NULL;
    }
    if (service->services_cost) {
        free(service->services_cost);
        service->services_cost = NULL;
    }
    if (service->services_currency) {
        free(service->services_currency);
        service->services_currency = NULL;
    }
    if (service->services_category) {
        free(service->services_category);
        service->services_category = NULL;
    }
    if (service->services_buyable) {
        free(service->services_buyable);
        service->services_buyable = NULL;
    }
    if (service->services_type) {
        free(service->services_type);
        service->services_type = NULL;
    }
    if (service->services_field1) {
        free(service->services_field1);
        service->services_field1 = NULL;
    }
    if (service->services_field2) {
        free(service->services_field2);
        service->services_field2 = NULL;
    }
    if (service->services_module) {
        free(service->services_module);
        service->services_module = NULL;
    }
    free(service);
}

cJSON *service_convertToJSON(service_t *service) {
    cJSON *item = cJSON_CreateObject();

    // service->services_id
    if (!service->services_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "services_id", *service->services_id) == NULL) {
    goto fail; //Numeric
    }


    // service->services_name
    if (!service->services_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_name", service->services_name) == NULL) {
    goto fail; //String
    }


    // service->services_cost
    if (!service->services_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "services_cost", *service->services_cost) == NULL) {
    goto fail; //Numeric
    }


    // service->services_currency
    if (!service->services_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_currency", service->services_currency) == NULL) {
    goto fail; //String
    }


    // service->services_category
    if (!service->services_category) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "services_category", *service->services_category) == NULL) {
    goto fail; //Numeric
    }


    // service->services_buyable
    if (!service->services_buyable) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "services_buyable", *service->services_buyable) == NULL) {
    goto fail; //Bool
    }


    // service->services_type
    if (!service->services_type) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "services_type", *service->services_type) == NULL) {
    goto fail; //Numeric
    }


    // service->services_field1
    if (!service->services_field1) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_field1", service->services_field1) == NULL) {
    goto fail; //String
    }


    // service->services_field2
    if (!service->services_field2) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_field2", service->services_field2) == NULL) {
    goto fail; //String
    }


    // service->services_module
    if (!service->services_module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_module", service->services_module) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

service_t *service_parseFromJSON(cJSON *serviceJSON){

    service_t *service_local_var = NULL;

    // define the local variable for service->services_id
    int *services_id_local_var = NULL;

    char *services_name_local_str = NULL;

    // define the local variable for service->services_cost
    double *services_cost_local_var = NULL;

    char *services_currency_local_str = NULL;

    // define the local variable for service->services_category
    int *services_category_local_var = NULL;

    // define the local variable for service->services_buyable
    int *services_buyable_local_var = NULL;

    // define the local variable for service->services_type
    int *services_type_local_var = NULL;

    char *services_field1_local_str = NULL;

    char *services_field2_local_str = NULL;

    char *services_module_local_str = NULL;

    // service->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (!services_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(services_id))
    {
    goto end; //Numeric
    }
    services_id_local_var = malloc(sizeof(int));
    if(!services_id_local_var)
    {
        goto end;
    }
    *services_id_local_var = services_id->valuedouble;

    // service->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (!services_name) {
        goto end;
    }

    
    if(!cJSON_IsString(services_name))
    {
    goto end; //String
    }

    // service->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (!services_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(services_cost))
    {
    goto end; //Numeric
    }
    services_cost_local_var = malloc(sizeof(double));
    if(!services_cost_local_var)
    {
        goto end;
    }
    *services_cost_local_var = services_cost->valuedouble;

    // service->services_currency
    cJSON *services_currency = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_currency");
    if (cJSON_IsNull(services_currency)) {
        services_currency = NULL;
    }
    if (!services_currency) {
        goto end;
    }

    
    if(!cJSON_IsString(services_currency))
    {
    goto end; //String
    }

    // service->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (!services_category) {
        goto end;
    }

    
    if(!cJSON_IsNumber(services_category))
    {
    goto end; //Numeric
    }
    services_category_local_var = malloc(sizeof(int));
    if(!services_category_local_var)
    {
        goto end;
    }
    *services_category_local_var = services_category->valuedouble;

    // service->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (!services_buyable) {
        goto end;
    }

    
    if(!cJSON_IsBool(services_buyable))
    {
    goto end; //Bool
    }
    services_buyable_local_var = malloc(sizeof(int));
    if(!services_buyable_local_var)
    {
        goto end;
    }
    *services_buyable_local_var = services_buyable->valueint;

    // service->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (!services_type) {
        goto end;
    }

    
    if(!cJSON_IsNumber(services_type))
    {
    goto end; //Numeric
    }
    services_type_local_var = malloc(sizeof(int));
    if(!services_type_local_var)
    {
        goto end;
    }
    *services_type_local_var = services_type->valuedouble;

    // service->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (!services_field1) {
        goto end;
    }

    
    if(!cJSON_IsString(services_field1))
    {
    goto end; //String
    }

    // service->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (!services_field2) {
        goto end;
    }

    
    if(!cJSON_IsString(services_field2))
    {
    goto end; //String
    }

    // service->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(serviceJSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (!services_module) {
        goto end;
    }

    
    if(!cJSON_IsString(services_module))
    {
    goto end; //String
    }


    if (services_name && !cJSON_IsNull(services_name)) services_name_local_str = strdup(services_name->valuestring);
    if (services_currency && !cJSON_IsNull(services_currency)) services_currency_local_str = strdup(services_currency->valuestring);
    if (services_field1 && !cJSON_IsNull(services_field1)) services_field1_local_str = strdup(services_field1->valuestring);
    if (services_field2 && !cJSON_IsNull(services_field2)) services_field2_local_str = strdup(services_field2->valuestring);
    if (services_module && !cJSON_IsNull(services_module)) services_module_local_str = strdup(services_module->valuestring);

    service_local_var = service_create_internal (
        services_id_local_var,
        services_name_local_str,
        services_cost_local_var,
        services_currency_local_str,
        services_category_local_var,
        services_buyable_local_var,
        services_type_local_var,
        services_field1_local_str,
        services_field2_local_str,
        services_module_local_str
        );

    if (!service_local_var) {
        goto end;
    }

    return service_local_var;
end:
    if (services_id_local_var) {
        free(services_id_local_var);
        services_id_local_var = NULL;
    }
    if (services_name_local_str) {
        free(services_name_local_str);
        services_name_local_str = NULL;
    }
    if (services_cost_local_var) {
        free(services_cost_local_var);
        services_cost_local_var = NULL;
    }
    if (services_currency_local_str) {
        free(services_currency_local_str);
        services_currency_local_str = NULL;
    }
    if (services_category_local_var) {
        free(services_category_local_var);
        services_category_local_var = NULL;
    }
    if (services_buyable_local_var) {
        free(services_buyable_local_var);
        services_buyable_local_var = NULL;
    }
    if (services_type_local_var) {
        free(services_type_local_var);
        services_type_local_var = NULL;
    }
    if (services_field1_local_str) {
        free(services_field1_local_str);
        services_field1_local_str = NULL;
    }
    if (services_field2_local_str) {
        free(services_field2_local_str);
        services_field2_local_str = NULL;
    }
    if (services_module_local_str) {
        free(services_module_local_str);
        services_module_local_str = NULL;
    }
    return NULL;

}
