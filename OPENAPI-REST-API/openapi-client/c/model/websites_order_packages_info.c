#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_packages_info.h"



static websites_order_packages_info_t *websites_order_packages_info_create_internal(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_module,
    char *services_description,
    char *services_field1,
    char *services_field2,
    char *services_html,
    char *services_moreinfo_url,
    char *services_hidden
    ) {
    websites_order_packages_info_t *websites_order_packages_info_local_var = malloc(sizeof(websites_order_packages_info_t));
    if (!websites_order_packages_info_local_var) {
        return NULL;
    }
    websites_order_packages_info_local_var->services_id = services_id;
    websites_order_packages_info_local_var->services_name = services_name;
    websites_order_packages_info_local_var->services_cost = services_cost;
    websites_order_packages_info_local_var->services_category = services_category;
    websites_order_packages_info_local_var->services_buyable = services_buyable;
    websites_order_packages_info_local_var->services_type = services_type;
    websites_order_packages_info_local_var->services_module = services_module;
    websites_order_packages_info_local_var->services_description = services_description;
    websites_order_packages_info_local_var->services_field1 = services_field1;
    websites_order_packages_info_local_var->services_field2 = services_field2;
    websites_order_packages_info_local_var->services_html = services_html;
    websites_order_packages_info_local_var->services_moreinfo_url = services_moreinfo_url;
    websites_order_packages_info_local_var->services_hidden = services_hidden;

    websites_order_packages_info_local_var->_library_owned = 1;
    return websites_order_packages_info_local_var;
}

__attribute__((deprecated)) websites_order_packages_info_t *websites_order_packages_info_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_module,
    char *services_description,
    char *services_field1,
    char *services_field2,
    char *services_html,
    char *services_moreinfo_url,
    char *services_hidden
    ) {
    return websites_order_packages_info_create_internal (
        services_id,
        services_name,
        services_cost,
        services_category,
        services_buyable,
        services_type,
        services_module,
        services_description,
        services_field1,
        services_field2,
        services_html,
        services_moreinfo_url,
        services_hidden
        );
}

void websites_order_packages_info_free(websites_order_packages_info_t *websites_order_packages_info) {
    if(NULL == websites_order_packages_info){
        return ;
    }
    if(websites_order_packages_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_packages_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_packages_info->services_id) {
        free(websites_order_packages_info->services_id);
        websites_order_packages_info->services_id = NULL;
    }
    if (websites_order_packages_info->services_name) {
        free(websites_order_packages_info->services_name);
        websites_order_packages_info->services_name = NULL;
    }
    if (websites_order_packages_info->services_cost) {
        free(websites_order_packages_info->services_cost);
        websites_order_packages_info->services_cost = NULL;
    }
    if (websites_order_packages_info->services_category) {
        free(websites_order_packages_info->services_category);
        websites_order_packages_info->services_category = NULL;
    }
    if (websites_order_packages_info->services_buyable) {
        free(websites_order_packages_info->services_buyable);
        websites_order_packages_info->services_buyable = NULL;
    }
    if (websites_order_packages_info->services_type) {
        free(websites_order_packages_info->services_type);
        websites_order_packages_info->services_type = NULL;
    }
    if (websites_order_packages_info->services_module) {
        free(websites_order_packages_info->services_module);
        websites_order_packages_info->services_module = NULL;
    }
    if (websites_order_packages_info->services_description) {
        free(websites_order_packages_info->services_description);
        websites_order_packages_info->services_description = NULL;
    }
    if (websites_order_packages_info->services_field1) {
        free(websites_order_packages_info->services_field1);
        websites_order_packages_info->services_field1 = NULL;
    }
    if (websites_order_packages_info->services_field2) {
        free(websites_order_packages_info->services_field2);
        websites_order_packages_info->services_field2 = NULL;
    }
    if (websites_order_packages_info->services_html) {
        free(websites_order_packages_info->services_html);
        websites_order_packages_info->services_html = NULL;
    }
    if (websites_order_packages_info->services_moreinfo_url) {
        free(websites_order_packages_info->services_moreinfo_url);
        websites_order_packages_info->services_moreinfo_url = NULL;
    }
    if (websites_order_packages_info->services_hidden) {
        free(websites_order_packages_info->services_hidden);
        websites_order_packages_info->services_hidden = NULL;
    }
    free(websites_order_packages_info);
}

cJSON *websites_order_packages_info_convertToJSON(websites_order_packages_info_t *websites_order_packages_info) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_packages_info->services_id
    if (!websites_order_packages_info->services_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_id", websites_order_packages_info->services_id) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_name
    if (!websites_order_packages_info->services_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_name", websites_order_packages_info->services_name) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_cost
    if (!websites_order_packages_info->services_cost) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_cost", websites_order_packages_info->services_cost) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_category
    if (!websites_order_packages_info->services_category) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_category", websites_order_packages_info->services_category) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_buyable
    if (!websites_order_packages_info->services_buyable) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_buyable", websites_order_packages_info->services_buyable) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_type
    if (!websites_order_packages_info->services_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_type", websites_order_packages_info->services_type) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_module
    if (!websites_order_packages_info->services_module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_module", websites_order_packages_info->services_module) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_description
    if (!websites_order_packages_info->services_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_description", websites_order_packages_info->services_description) == NULL) {
    goto fail; //String
    }


    // websites_order_packages_info->services_field1
    if(websites_order_packages_info->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", websites_order_packages_info->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // websites_order_packages_info->services_field2
    if(websites_order_packages_info->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", websites_order_packages_info->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // websites_order_packages_info->services_html
    if(websites_order_packages_info->services_html) {
    if(cJSON_AddStringToObject(item, "services_html", websites_order_packages_info->services_html) == NULL) {
    goto fail; //String
    }
    }


    // websites_order_packages_info->services_moreinfo_url
    if(websites_order_packages_info->services_moreinfo_url) {
    if(cJSON_AddStringToObject(item, "services_moreinfo_url", websites_order_packages_info->services_moreinfo_url) == NULL) {
    goto fail; //String
    }
    }


    // websites_order_packages_info->services_hidden
    if(websites_order_packages_info->services_hidden) {
    if(cJSON_AddStringToObject(item, "services_hidden", websites_order_packages_info->services_hidden) == NULL) {
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

websites_order_packages_info_t *websites_order_packages_info_parseFromJSON(cJSON *websites_order_packages_infoJSON){

    websites_order_packages_info_t *websites_order_packages_info_local_var = NULL;

    // websites_order_packages_info->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (!services_id) {
        goto end;
    }

    
    if(!cJSON_IsString(services_id))
    {
    goto end; //String
    }

    // websites_order_packages_info->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_name");
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

    // websites_order_packages_info->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (!services_cost) {
        goto end;
    }

    
    if(!cJSON_IsString(services_cost))
    {
    goto end; //String
    }

    // websites_order_packages_info->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (!services_category) {
        goto end;
    }

    
    if(!cJSON_IsString(services_category))
    {
    goto end; //String
    }

    // websites_order_packages_info->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (!services_buyable) {
        goto end;
    }

    
    if(!cJSON_IsString(services_buyable))
    {
    goto end; //String
    }

    // websites_order_packages_info->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (!services_type) {
        goto end;
    }

    
    if(!cJSON_IsString(services_type))
    {
    goto end; //String
    }

    // websites_order_packages_info->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_module");
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

    // websites_order_packages_info->services_description
    cJSON *services_description = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_description");
    if (cJSON_IsNull(services_description)) {
        services_description = NULL;
    }
    if (!services_description) {
        goto end;
    }

    
    if(!cJSON_IsString(services_description))
    {
    goto end; //String
    }

    // websites_order_packages_info->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // websites_order_packages_info->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // websites_order_packages_info->services_html
    cJSON *services_html = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_html");
    if (cJSON_IsNull(services_html)) {
        services_html = NULL;
    }
    if (services_html) { 
    if(!cJSON_IsString(services_html) && !cJSON_IsNull(services_html))
    {
    goto end; //String
    }
    }

    // websites_order_packages_info->services_moreinfo_url
    cJSON *services_moreinfo_url = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_moreinfo_url");
    if (cJSON_IsNull(services_moreinfo_url)) {
        services_moreinfo_url = NULL;
    }
    if (services_moreinfo_url) { 
    if(!cJSON_IsString(services_moreinfo_url) && !cJSON_IsNull(services_moreinfo_url))
    {
    goto end; //String
    }
    }

    // websites_order_packages_info->services_hidden
    cJSON *services_hidden = cJSON_GetObjectItemCaseSensitive(websites_order_packages_infoJSON, "services_hidden");
    if (cJSON_IsNull(services_hidden)) {
        services_hidden = NULL;
    }
    if (services_hidden) { 
    if(!cJSON_IsString(services_hidden) && !cJSON_IsNull(services_hidden))
    {
    goto end; //String
    }
    }


    websites_order_packages_info_local_var = websites_order_packages_info_create_internal (
        strdup(services_id->valuestring),
        strdup(services_name->valuestring),
        strdup(services_cost->valuestring),
        strdup(services_category->valuestring),
        strdup(services_buyable->valuestring),
        strdup(services_type->valuestring),
        strdup(services_module->valuestring),
        strdup(services_description->valuestring),
        services_field1 && !cJSON_IsNull(services_field1) ? strdup(services_field1->valuestring) : NULL,
        services_field2 && !cJSON_IsNull(services_field2) ? strdup(services_field2->valuestring) : NULL,
        services_html && !cJSON_IsNull(services_html) ? strdup(services_html->valuestring) : NULL,
        services_moreinfo_url && !cJSON_IsNull(services_moreinfo_url) ? strdup(services_moreinfo_url->valuestring) : NULL,
        services_hidden && !cJSON_IsNull(services_hidden) ? strdup(services_hidden->valuestring) : NULL
        );

    return websites_order_packages_info_local_var;
end:
    return NULL;

}
