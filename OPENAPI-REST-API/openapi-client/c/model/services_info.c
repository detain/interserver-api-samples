#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "services_info.h"



static services_info_t *services_info_create_internal(
    modules_t *modules,
    services_t *services,
    service_types_t *service_types,
    service_categories_t *service_categories
    ) {
    services_info_t *services_info_local_var = malloc(sizeof(services_info_t));
    if (!services_info_local_var) {
        return NULL;
    }
    services_info_local_var->modules = modules;
    services_info_local_var->services = services;
    services_info_local_var->service_types = service_types;
    services_info_local_var->service_categories = service_categories;

    services_info_local_var->_library_owned = 1;
    return services_info_local_var;
}

__attribute__((deprecated)) services_info_t *services_info_create(
    modules_t *modules,
    services_t *services,
    service_types_t *service_types,
    service_categories_t *service_categories
    ) {
    return services_info_create_internal (
        modules,
        services,
        service_types,
        service_categories
        );
}

void services_info_free(services_info_t *services_info) {
    if(NULL == services_info){
        return ;
    }
    if(services_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "services_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (services_info->modules) {
        modules_free(services_info->modules);
        services_info->modules = NULL;
    }
    if (services_info->services) {
        services_free(services_info->services);
        services_info->services = NULL;
    }
    if (services_info->service_types) {
        service_types_free(services_info->service_types);
        services_info->service_types = NULL;
    }
    if (services_info->service_categories) {
        service_categories_free(services_info->service_categories);
        services_info->service_categories = NULL;
    }
    free(services_info);
}

cJSON *services_info_convertToJSON(services_info_t *services_info) {
    cJSON *item = cJSON_CreateObject();

    // services_info->modules
    if (!services_info->modules) {
        goto fail;
    }
    cJSON *modules_local_JSON = modules_convertToJSON(services_info->modules);
    if(modules_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "modules", modules_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // services_info->services
    if (!services_info->services) {
        goto fail;
    }
    cJSON *services_local_JSON = services_convertToJSON(services_info->services);
    if(services_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "services", services_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // services_info->service_types
    if (!services_info->service_types) {
        goto fail;
    }
    cJSON *service_types_local_JSON = service_types_convertToJSON(services_info->service_types);
    if(service_types_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "serviceTypes", service_types_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // services_info->service_categories
    if (!services_info->service_categories) {
        goto fail;
    }
    cJSON *service_categories_local_JSON = service_categories_convertToJSON(services_info->service_categories);
    if(service_categories_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "serviceCategories", service_categories_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

services_info_t *services_info_parseFromJSON(cJSON *services_infoJSON){

    services_info_t *services_info_local_var = NULL;

    // define the local variable for services_info->modules
    modules_t *modules_local_nonprim = NULL;

    // define the local variable for services_info->services
    services_t *services_local_nonprim = NULL;

    // define the local variable for services_info->service_types
    service_types_t *service_types_local_nonprim = NULL;

    // define the local variable for services_info->service_categories
    service_categories_t *service_categories_local_nonprim = NULL;

    // services_info->modules
    cJSON *modules = cJSON_GetObjectItemCaseSensitive(services_infoJSON, "modules");
    if (cJSON_IsNull(modules)) {
        modules = NULL;
    }
    if (!modules) {
        goto end;
    }

    
    modules_local_nonprim = modules_parseFromJSON(modules); //custom

    // services_info->services
    cJSON *services = cJSON_GetObjectItemCaseSensitive(services_infoJSON, "services");
    if (cJSON_IsNull(services)) {
        services = NULL;
    }
    if (!services) {
        goto end;
    }

    
    services_local_nonprim = services_parseFromJSON(services); //custom

    // services_info->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(services_infoJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (!service_types) {
        goto end;
    }

    
    service_types_local_nonprim = service_types_parseFromJSON(service_types); //custom

    // services_info->service_categories
    cJSON *service_categories = cJSON_GetObjectItemCaseSensitive(services_infoJSON, "serviceCategories");
    if (cJSON_IsNull(service_categories)) {
        service_categories = NULL;
    }
    if (!service_categories) {
        goto end;
    }

    
    service_categories_local_nonprim = service_categories_parseFromJSON(service_categories); //custom


    services_info_local_var = services_info_create_internal (
        modules_local_nonprim,
        services_local_nonprim,
        service_types_local_nonprim,
        service_categories_local_nonprim
        );

    return services_info_local_var;
end:
    if (modules_local_nonprim) {
        modules_free(modules_local_nonprim);
        modules_local_nonprim = NULL;
    }
    if (services_local_nonprim) {
        services_free(services_local_nonprim);
        services_local_nonprim = NULL;
    }
    if (service_types_local_nonprim) {
        service_types_free(service_types_local_nonprim);
        service_types_local_nonprim = NULL;
    }
    if (service_categories_local_nonprim) {
        service_categories_free(service_categories_local_nonprim);
        service_categories_local_nonprim = NULL;
    }
    return NULL;

}
