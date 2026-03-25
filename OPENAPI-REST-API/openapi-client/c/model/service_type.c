#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_type.h"



static service_type_t *service_type_create_internal(
    int *st_id,
    char *st_name,
    int *st_category,
    char *st_module
    ) {
    service_type_t *service_type_local_var = malloc(sizeof(service_type_t));
    if (!service_type_local_var) {
        return NULL;
    }
    memset(service_type_local_var, 0, sizeof(service_type_t));
    service_type_local_var->_library_owned = 1;
    service_type_local_var->st_id = st_id;
    service_type_local_var->st_name = st_name;
    service_type_local_var->st_category = st_category;
    service_type_local_var->st_module = st_module;
    return service_type_local_var;
}

__attribute__((deprecated)) service_type_t *service_type_create(
    int *st_id,
    char *st_name,
    int *st_category,
    char *st_module
    ) {
    int *st_id_copy = NULL;
    if (st_id) {
        st_id_copy = malloc(sizeof(int));
        if (st_id_copy) *st_id_copy = *st_id;
    }
    int *st_category_copy = NULL;
    if (st_category) {
        st_category_copy = malloc(sizeof(int));
        if (st_category_copy) *st_category_copy = *st_category;
    }
    service_type_t *result = service_type_create_internal (
        st_id_copy,
        st_name,
        st_category_copy,
        st_module
        );
    if (!result) {
        free(st_id_copy);
        free(st_category_copy);
    }
    return result;
}

void service_type_free(service_type_t *service_type) {
    if(NULL == service_type){
        return ;
    }
    if(service_type->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "service_type_free");
        return ;
    }
    listEntry_t *listEntry;
    if (service_type->st_id) {
        free(service_type->st_id);
        service_type->st_id = NULL;
    }
    if (service_type->st_name) {
        free(service_type->st_name);
        service_type->st_name = NULL;
    }
    if (service_type->st_category) {
        free(service_type->st_category);
        service_type->st_category = NULL;
    }
    if (service_type->st_module) {
        free(service_type->st_module);
        service_type->st_module = NULL;
    }
    free(service_type);
}

cJSON *service_type_convertToJSON(service_type_t *service_type) {
    cJSON *item = cJSON_CreateObject();

    // service_type->st_id
    if (!service_type->st_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "st_id", *service_type->st_id) == NULL) {
    goto fail; //Numeric
    }


    // service_type->st_name
    if (!service_type->st_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "st_name", service_type->st_name) == NULL) {
    goto fail; //String
    }


    // service_type->st_category
    if (!service_type->st_category) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "st_category", *service_type->st_category) == NULL) {
    goto fail; //Numeric
    }


    // service_type->st_module
    if (!service_type->st_module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "st_module", service_type->st_module) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

service_type_t *service_type_parseFromJSON(cJSON *service_typeJSON){

    service_type_t *service_type_local_var = NULL;

    // define the local variable for service_type->st_id
    int *st_id_local_var = NULL;

    char *st_name_local_str = NULL;

    // define the local variable for service_type->st_category
    int *st_category_local_var = NULL;

    char *st_module_local_str = NULL;

    // service_type->st_id
    cJSON *st_id = cJSON_GetObjectItemCaseSensitive(service_typeJSON, "st_id");
    if (cJSON_IsNull(st_id)) {
        st_id = NULL;
    }
    if (!st_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(st_id))
    {
    goto end; //Numeric
    }
    st_id_local_var = malloc(sizeof(int));
    if(!st_id_local_var)
    {
        goto end;
    }
    *st_id_local_var = st_id->valuedouble;

    // service_type->st_name
    cJSON *st_name = cJSON_GetObjectItemCaseSensitive(service_typeJSON, "st_name");
    if (cJSON_IsNull(st_name)) {
        st_name = NULL;
    }
    if (!st_name) {
        goto end;
    }

    
    if(!cJSON_IsString(st_name))
    {
    goto end; //String
    }

    // service_type->st_category
    cJSON *st_category = cJSON_GetObjectItemCaseSensitive(service_typeJSON, "st_category");
    if (cJSON_IsNull(st_category)) {
        st_category = NULL;
    }
    if (!st_category) {
        goto end;
    }

    
    if(!cJSON_IsNumber(st_category))
    {
    goto end; //Numeric
    }
    st_category_local_var = malloc(sizeof(int));
    if(!st_category_local_var)
    {
        goto end;
    }
    *st_category_local_var = st_category->valuedouble;

    // service_type->st_module
    cJSON *st_module = cJSON_GetObjectItemCaseSensitive(service_typeJSON, "st_module");
    if (cJSON_IsNull(st_module)) {
        st_module = NULL;
    }
    if (!st_module) {
        goto end;
    }

    
    if(!cJSON_IsString(st_module))
    {
    goto end; //String
    }


    if (st_name && !cJSON_IsNull(st_name)) st_name_local_str = strdup(st_name->valuestring);
    if (st_module && !cJSON_IsNull(st_module)) st_module_local_str = strdup(st_module->valuestring);

    service_type_local_var = service_type_create_internal (
        st_id_local_var,
        st_name_local_str,
        st_category_local_var,
        st_module_local_str
        );

    if (!service_type_local_var) {
        goto end;
    }

    return service_type_local_var;
end:
    if (st_id_local_var) {
        free(st_id_local_var);
        st_id_local_var = NULL;
    }
    if (st_name_local_str) {
        free(st_name_local_str);
        st_name_local_str = NULL;
    }
    if (st_category_local_var) {
        free(st_category_local_var);
        st_category_local_var = NULL;
    }
    if (st_module_local_str) {
        free(st_module_local_str);
        st_module_local_str = NULL;
    }
    return NULL;

}
