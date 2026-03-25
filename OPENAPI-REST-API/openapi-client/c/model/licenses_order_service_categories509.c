#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_order_service_categories509.h"



static licenses_order_service_categories509_t *licenses_order_service_categories509_create_internal(
    char *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
    ) {
    licenses_order_service_categories509_t *licenses_order_service_categories509_local_var = malloc(sizeof(licenses_order_service_categories509_t));
    if (!licenses_order_service_categories509_local_var) {
        return NULL;
    }
    memset(licenses_order_service_categories509_local_var, 0, sizeof(licenses_order_service_categories509_t));
    licenses_order_service_categories509_local_var->_library_owned = 1;
    licenses_order_service_categories509_local_var->category_id = category_id;
    licenses_order_service_categories509_local_var->category_name = category_name;
    licenses_order_service_categories509_local_var->category_tag = category_tag;
    licenses_order_service_categories509_local_var->category_module = category_module;
    return licenses_order_service_categories509_local_var;
}

__attribute__((deprecated)) licenses_order_service_categories509_t *licenses_order_service_categories509_create(
    char *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
    ) {
    licenses_order_service_categories509_t *result = licenses_order_service_categories509_create_internal (
        category_id,
        category_name,
        category_tag,
        category_module
        );
    if (!result) {
    }
    return result;
}

void licenses_order_service_categories509_free(licenses_order_service_categories509_t *licenses_order_service_categories509) {
    if(NULL == licenses_order_service_categories509){
        return ;
    }
    if(licenses_order_service_categories509->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_order_service_categories509_free");
        return ;
    }
    listEntry_t *listEntry;
    if (licenses_order_service_categories509->category_id) {
        free(licenses_order_service_categories509->category_id);
        licenses_order_service_categories509->category_id = NULL;
    }
    if (licenses_order_service_categories509->category_name) {
        free(licenses_order_service_categories509->category_name);
        licenses_order_service_categories509->category_name = NULL;
    }
    if (licenses_order_service_categories509->category_tag) {
        free(licenses_order_service_categories509->category_tag);
        licenses_order_service_categories509->category_tag = NULL;
    }
    if (licenses_order_service_categories509->category_module) {
        free(licenses_order_service_categories509->category_module);
        licenses_order_service_categories509->category_module = NULL;
    }
    free(licenses_order_service_categories509);
}

cJSON *licenses_order_service_categories509_convertToJSON(licenses_order_service_categories509_t *licenses_order_service_categories509) {
    cJSON *item = cJSON_CreateObject();

    // licenses_order_service_categories509->category_id
    if(licenses_order_service_categories509->category_id) {
    if(cJSON_AddStringToObject(item, "category_id", licenses_order_service_categories509->category_id) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_categories509->category_name
    if(licenses_order_service_categories509->category_name) {
    if(cJSON_AddStringToObject(item, "category_name", licenses_order_service_categories509->category_name) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_categories509->category_tag
    if(licenses_order_service_categories509->category_tag) {
    if(cJSON_AddStringToObject(item, "category_tag", licenses_order_service_categories509->category_tag) == NULL) {
    goto fail; //String
    }
    }


    // licenses_order_service_categories509->category_module
    if(licenses_order_service_categories509->category_module) {
    if(cJSON_AddStringToObject(item, "category_module", licenses_order_service_categories509->category_module) == NULL) {
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

licenses_order_service_categories509_t *licenses_order_service_categories509_parseFromJSON(cJSON *licenses_order_service_categories509JSON){

    licenses_order_service_categories509_t *licenses_order_service_categories509_local_var = NULL;

    char *category_id_local_str = NULL;

    char *category_name_local_str = NULL;

    char *category_tag_local_str = NULL;

    char *category_module_local_str = NULL;

    // licenses_order_service_categories509->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(licenses_order_service_categories509JSON, "category_id");
    if (cJSON_IsNull(category_id)) {
        category_id = NULL;
    }
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // licenses_order_service_categories509->category_name
    cJSON *category_name = cJSON_GetObjectItemCaseSensitive(licenses_order_service_categories509JSON, "category_name");
    if (cJSON_IsNull(category_name)) {
        category_name = NULL;
    }
    if (category_name) { 
    if(!cJSON_IsString(category_name) && !cJSON_IsNull(category_name))
    {
    goto end; //String
    }
    }

    // licenses_order_service_categories509->category_tag
    cJSON *category_tag = cJSON_GetObjectItemCaseSensitive(licenses_order_service_categories509JSON, "category_tag");
    if (cJSON_IsNull(category_tag)) {
        category_tag = NULL;
    }
    if (category_tag) { 
    if(!cJSON_IsString(category_tag) && !cJSON_IsNull(category_tag))
    {
    goto end; //String
    }
    }

    // licenses_order_service_categories509->category_module
    cJSON *category_module = cJSON_GetObjectItemCaseSensitive(licenses_order_service_categories509JSON, "category_module");
    if (cJSON_IsNull(category_module)) {
        category_module = NULL;
    }
    if (category_module) { 
    if(!cJSON_IsString(category_module) && !cJSON_IsNull(category_module))
    {
    goto end; //String
    }
    }


    if (category_id && !cJSON_IsNull(category_id)) category_id_local_str = strdup(category_id->valuestring);
    if (category_name && !cJSON_IsNull(category_name)) category_name_local_str = strdup(category_name->valuestring);
    if (category_tag && !cJSON_IsNull(category_tag)) category_tag_local_str = strdup(category_tag->valuestring);
    if (category_module && !cJSON_IsNull(category_module)) category_module_local_str = strdup(category_module->valuestring);

    licenses_order_service_categories509_local_var = licenses_order_service_categories509_create_internal (
        category_id_local_str,
        category_name_local_str,
        category_tag_local_str,
        category_module_local_str
        );

    if (!licenses_order_service_categories509_local_var) {
        goto end;
    }

    return licenses_order_service_categories509_local_var;
end:
    if (category_id_local_str) {
        free(category_id_local_str);
        category_id_local_str = NULL;
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
