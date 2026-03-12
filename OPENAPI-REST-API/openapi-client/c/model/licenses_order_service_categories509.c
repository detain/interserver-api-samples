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
    licenses_order_service_categories509_local_var->category_id = category_id;
    licenses_order_service_categories509_local_var->category_name = category_name;
    licenses_order_service_categories509_local_var->category_tag = category_tag;
    licenses_order_service_categories509_local_var->category_module = category_module;

    licenses_order_service_categories509_local_var->_library_owned = 1;
    return licenses_order_service_categories509_local_var;
}

__attribute__((deprecated)) licenses_order_service_categories509_t *licenses_order_service_categories509_create(
    char *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
    ) {
    return licenses_order_service_categories509_create_internal (
        category_id,
        category_name,
        category_tag,
        category_module
        );
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


    licenses_order_service_categories509_local_var = licenses_order_service_categories509_create_internal (
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL,
        category_name && !cJSON_IsNull(category_name) ? strdup(category_name->valuestring) : NULL,
        category_tag && !cJSON_IsNull(category_tag) ? strdup(category_tag->valuestring) : NULL,
        category_module && !cJSON_IsNull(category_module) ? strdup(category_module->valuestring) : NULL
        );

    return licenses_order_service_categories509_local_var;
end:
    return NULL;

}
