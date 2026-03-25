#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_category.h"



static service_category_t *service_category_create_internal(
    int *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
    ) {
    service_category_t *service_category_local_var = malloc(sizeof(service_category_t));
    if (!service_category_local_var) {
        return NULL;
    }
    memset(service_category_local_var, 0, sizeof(service_category_t));
    service_category_local_var->_library_owned = 1;
    service_category_local_var->category_id = category_id;
    service_category_local_var->category_name = category_name;
    service_category_local_var->category_tag = category_tag;
    service_category_local_var->category_module = category_module;
    return service_category_local_var;
}

__attribute__((deprecated)) service_category_t *service_category_create(
    int *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
    ) {
    int *category_id_copy = NULL;
    if (category_id) {
        category_id_copy = malloc(sizeof(int));
        if (category_id_copy) *category_id_copy = *category_id;
    }
    service_category_t *result = service_category_create_internal (
        category_id_copy,
        category_name,
        category_tag,
        category_module
        );
    if (!result) {
        free(category_id_copy);
    }
    return result;
}

void service_category_free(service_category_t *service_category) {
    if(NULL == service_category){
        return ;
    }
    if(service_category->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "service_category_free");
        return ;
    }
    listEntry_t *listEntry;
    if (service_category->category_id) {
        free(service_category->category_id);
        service_category->category_id = NULL;
    }
    if (service_category->category_name) {
        free(service_category->category_name);
        service_category->category_name = NULL;
    }
    if (service_category->category_tag) {
        free(service_category->category_tag);
        service_category->category_tag = NULL;
    }
    if (service_category->category_module) {
        free(service_category->category_module);
        service_category->category_module = NULL;
    }
    free(service_category);
}

cJSON *service_category_convertToJSON(service_category_t *service_category) {
    cJSON *item = cJSON_CreateObject();

    // service_category->category_id
    if (!service_category->category_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "category_id", *service_category->category_id) == NULL) {
    goto fail; //Numeric
    }


    // service_category->category_name
    if (!service_category->category_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "category_name", service_category->category_name) == NULL) {
    goto fail; //String
    }


    // service_category->category_tag
    if (!service_category->category_tag) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "category_tag", service_category->category_tag) == NULL) {
    goto fail; //String
    }


    // service_category->category_module
    if (!service_category->category_module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "category_module", service_category->category_module) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

service_category_t *service_category_parseFromJSON(cJSON *service_categoryJSON){

    service_category_t *service_category_local_var = NULL;

    // define the local variable for service_category->category_id
    int *category_id_local_var = NULL;

    char *category_name_local_str = NULL;

    char *category_tag_local_str = NULL;

    char *category_module_local_str = NULL;

    // service_category->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(service_categoryJSON, "category_id");
    if (cJSON_IsNull(category_id)) {
        category_id = NULL;
    }
    if (!category_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(category_id))
    {
    goto end; //Numeric
    }
    category_id_local_var = malloc(sizeof(int));
    if(!category_id_local_var)
    {
        goto end;
    }
    *category_id_local_var = category_id->valuedouble;

    // service_category->category_name
    cJSON *category_name = cJSON_GetObjectItemCaseSensitive(service_categoryJSON, "category_name");
    if (cJSON_IsNull(category_name)) {
        category_name = NULL;
    }
    if (!category_name) {
        goto end;
    }

    
    if(!cJSON_IsString(category_name))
    {
    goto end; //String
    }

    // service_category->category_tag
    cJSON *category_tag = cJSON_GetObjectItemCaseSensitive(service_categoryJSON, "category_tag");
    if (cJSON_IsNull(category_tag)) {
        category_tag = NULL;
    }
    if (!category_tag) {
        goto end;
    }

    
    if(!cJSON_IsString(category_tag))
    {
    goto end; //String
    }

    // service_category->category_module
    cJSON *category_module = cJSON_GetObjectItemCaseSensitive(service_categoryJSON, "category_module");
    if (cJSON_IsNull(category_module)) {
        category_module = NULL;
    }
    if (!category_module) {
        goto end;
    }

    
    if(!cJSON_IsString(category_module))
    {
    goto end; //String
    }


    if (category_name && !cJSON_IsNull(category_name)) category_name_local_str = strdup(category_name->valuestring);
    if (category_tag && !cJSON_IsNull(category_tag)) category_tag_local_str = strdup(category_tag->valuestring);
    if (category_module && !cJSON_IsNull(category_module)) category_module_local_str = strdup(category_module->valuestring);

    service_category_local_var = service_category_create_internal (
        category_id_local_var,
        category_name_local_str,
        category_tag_local_str,
        category_module_local_str
        );

    if (!service_category_local_var) {
        goto end;
    }

    return service_category_local_var;
end:
    if (category_id_local_var) {
        free(category_id_local_var);
        category_id_local_var = NULL;
    }
    if (category_name_local_str) {
        free(category_name_local_str);
        category_name_local_str = NULL;
    }
    if (category_tag_local_str) {
        free(category_tag_local_str);
        category_tag_local_str = NULL;
    }
    if (category_module_local_str) {
        free(category_module_local_str);
        category_module_local_str = NULL;
    }
    return NULL;

}
