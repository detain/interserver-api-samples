#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order_services10001.h"



static domain_order_services10001_t *domain_order_services10001_create_internal(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_currency,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module,
    char *services_hidden
    ) {
    domain_order_services10001_t *domain_order_services10001_local_var = malloc(sizeof(domain_order_services10001_t));
    if (!domain_order_services10001_local_var) {
        return NULL;
    }
    memset(domain_order_services10001_local_var, 0, sizeof(domain_order_services10001_t));
    domain_order_services10001_local_var->_library_owned = 1;
    domain_order_services10001_local_var->services_id = services_id;
    domain_order_services10001_local_var->services_name = services_name;
    domain_order_services10001_local_var->services_cost = services_cost;
    domain_order_services10001_local_var->services_currency = services_currency;
    domain_order_services10001_local_var->services_category = services_category;
    domain_order_services10001_local_var->services_buyable = services_buyable;
    domain_order_services10001_local_var->services_type = services_type;
    domain_order_services10001_local_var->services_field1 = services_field1;
    domain_order_services10001_local_var->services_field2 = services_field2;
    domain_order_services10001_local_var->services_module = services_module;
    domain_order_services10001_local_var->services_hidden = services_hidden;
    return domain_order_services10001_local_var;
}

__attribute__((deprecated)) domain_order_services10001_t *domain_order_services10001_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_currency,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module,
    char *services_hidden
    ) {
    domain_order_services10001_t *result = domain_order_services10001_create_internal (
        services_id,
        services_name,
        services_cost,
        services_currency,
        services_category,
        services_buyable,
        services_type,
        services_field1,
        services_field2,
        services_module,
        services_hidden
        );
    if (!result) {
    }
    return result;
}

void domain_order_services10001_free(domain_order_services10001_t *domain_order_services10001) {
    if(NULL == domain_order_services10001){
        return ;
    }
    if(domain_order_services10001->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_order_services10001_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_order_services10001->services_id) {
        free(domain_order_services10001->services_id);
        domain_order_services10001->services_id = NULL;
    }
    if (domain_order_services10001->services_name) {
        free(domain_order_services10001->services_name);
        domain_order_services10001->services_name = NULL;
    }
    if (domain_order_services10001->services_cost) {
        free(domain_order_services10001->services_cost);
        domain_order_services10001->services_cost = NULL;
    }
    if (domain_order_services10001->services_currency) {
        free(domain_order_services10001->services_currency);
        domain_order_services10001->services_currency = NULL;
    }
    if (domain_order_services10001->services_category) {
        free(domain_order_services10001->services_category);
        domain_order_services10001->services_category = NULL;
    }
    if (domain_order_services10001->services_buyable) {
        free(domain_order_services10001->services_buyable);
        domain_order_services10001->services_buyable = NULL;
    }
    if (domain_order_services10001->services_type) {
        free(domain_order_services10001->services_type);
        domain_order_services10001->services_type = NULL;
    }
    if (domain_order_services10001->services_field1) {
        free(domain_order_services10001->services_field1);
        domain_order_services10001->services_field1 = NULL;
    }
    if (domain_order_services10001->services_field2) {
        free(domain_order_services10001->services_field2);
        domain_order_services10001->services_field2 = NULL;
    }
    if (domain_order_services10001->services_module) {
        free(domain_order_services10001->services_module);
        domain_order_services10001->services_module = NULL;
    }
    if (domain_order_services10001->services_hidden) {
        free(domain_order_services10001->services_hidden);
        domain_order_services10001->services_hidden = NULL;
    }
    free(domain_order_services10001);
}

cJSON *domain_order_services10001_convertToJSON(domain_order_services10001_t *domain_order_services10001) {
    cJSON *item = cJSON_CreateObject();

    // domain_order_services10001->services_id
    if(domain_order_services10001->services_id) {
    if(cJSON_AddStringToObject(item, "services_id", domain_order_services10001->services_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_name
    if(domain_order_services10001->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", domain_order_services10001->services_name) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_cost
    if(domain_order_services10001->services_cost) {
    if(cJSON_AddStringToObject(item, "services_cost", domain_order_services10001->services_cost) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_currency
    if(domain_order_services10001->services_currency) {
    if(cJSON_AddStringToObject(item, "services_currency", domain_order_services10001->services_currency) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_category
    if(domain_order_services10001->services_category) {
    if(cJSON_AddStringToObject(item, "services_category", domain_order_services10001->services_category) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_buyable
    if(domain_order_services10001->services_buyable) {
    if(cJSON_AddStringToObject(item, "services_buyable", domain_order_services10001->services_buyable) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_type
    if(domain_order_services10001->services_type) {
    if(cJSON_AddStringToObject(item, "services_type", domain_order_services10001->services_type) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_field1
    if(domain_order_services10001->services_field1) {
    if(cJSON_AddStringToObject(item, "services_field1", domain_order_services10001->services_field1) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_field2
    if(domain_order_services10001->services_field2) {
    if(cJSON_AddStringToObject(item, "services_field2", domain_order_services10001->services_field2) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_module
    if(domain_order_services10001->services_module) {
    if(cJSON_AddStringToObject(item, "services_module", domain_order_services10001->services_module) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_services10001->services_hidden
    if(domain_order_services10001->services_hidden) {
    if(cJSON_AddStringToObject(item, "services_hidden", domain_order_services10001->services_hidden) == NULL) {
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

domain_order_services10001_t *domain_order_services10001_parseFromJSON(cJSON *domain_order_services10001JSON){

    domain_order_services10001_t *domain_order_services10001_local_var = NULL;

    char *services_id_local_str = NULL;

    char *services_name_local_str = NULL;

    char *services_cost_local_str = NULL;

    char *services_currency_local_str = NULL;

    char *services_category_local_str = NULL;

    char *services_buyable_local_str = NULL;

    char *services_type_local_str = NULL;

    char *services_field1_local_str = NULL;

    char *services_field2_local_str = NULL;

    char *services_module_local_str = NULL;

    char *services_hidden_local_str = NULL;

    // domain_order_services10001->services_id
    cJSON *services_id = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_id");
    if (cJSON_IsNull(services_id)) {
        services_id = NULL;
    }
    if (services_id) { 
    if(!cJSON_IsString(services_id) && !cJSON_IsNull(services_id))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_cost
    cJSON *services_cost = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_cost");
    if (cJSON_IsNull(services_cost)) {
        services_cost = NULL;
    }
    if (services_cost) { 
    if(!cJSON_IsString(services_cost) && !cJSON_IsNull(services_cost))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_currency
    cJSON *services_currency = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_currency");
    if (cJSON_IsNull(services_currency)) {
        services_currency = NULL;
    }
    if (services_currency) { 
    if(!cJSON_IsString(services_currency) && !cJSON_IsNull(services_currency))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_category
    cJSON *services_category = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_category");
    if (cJSON_IsNull(services_category)) {
        services_category = NULL;
    }
    if (services_category) { 
    if(!cJSON_IsString(services_category) && !cJSON_IsNull(services_category))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_buyable
    cJSON *services_buyable = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_buyable");
    if (cJSON_IsNull(services_buyable)) {
        services_buyable = NULL;
    }
    if (services_buyable) { 
    if(!cJSON_IsString(services_buyable) && !cJSON_IsNull(services_buyable))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_type
    cJSON *services_type = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_type");
    if (cJSON_IsNull(services_type)) {
        services_type = NULL;
    }
    if (services_type) { 
    if(!cJSON_IsString(services_type) && !cJSON_IsNull(services_type))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_field1
    cJSON *services_field1 = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_field1");
    if (cJSON_IsNull(services_field1)) {
        services_field1 = NULL;
    }
    if (services_field1) { 
    if(!cJSON_IsString(services_field1) && !cJSON_IsNull(services_field1))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_field2
    cJSON *services_field2 = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_field2");
    if (cJSON_IsNull(services_field2)) {
        services_field2 = NULL;
    }
    if (services_field2) { 
    if(!cJSON_IsString(services_field2) && !cJSON_IsNull(services_field2))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_module
    cJSON *services_module = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_module");
    if (cJSON_IsNull(services_module)) {
        services_module = NULL;
    }
    if (services_module) { 
    if(!cJSON_IsString(services_module) && !cJSON_IsNull(services_module))
    {
    goto end; //String
    }
    }

    // domain_order_services10001->services_hidden
    cJSON *services_hidden = cJSON_GetObjectItemCaseSensitive(domain_order_services10001JSON, "services_hidden");
    if (cJSON_IsNull(services_hidden)) {
        services_hidden = NULL;
    }
    if (services_hidden) { 
    if(!cJSON_IsString(services_hidden) && !cJSON_IsNull(services_hidden))
    {
    goto end; //String
    }
    }


    if (services_id && !cJSON_IsNull(services_id)) services_id_local_str = strdup(services_id->valuestring);
    if (services_name && !cJSON_IsNull(services_name)) services_name_local_str = strdup(services_name->valuestring);
    if (services_cost && !cJSON_IsNull(services_cost)) services_cost_local_str = strdup(services_cost->valuestring);
    if (services_currency && !cJSON_IsNull(services_currency)) services_currency_local_str = strdup(services_currency->valuestring);
    if (services_category && !cJSON_IsNull(services_category)) services_category_local_str = strdup(services_category->valuestring);
    if (services_buyable && !cJSON_IsNull(services_buyable)) services_buyable_local_str = strdup(services_buyable->valuestring);
    if (services_type && !cJSON_IsNull(services_type)) services_type_local_str = strdup(services_type->valuestring);
    if (services_field1 && !cJSON_IsNull(services_field1)) services_field1_local_str = strdup(services_field1->valuestring);
    if (services_field2 && !cJSON_IsNull(services_field2)) services_field2_local_str = strdup(services_field2->valuestring);
    if (services_module && !cJSON_IsNull(services_module)) services_module_local_str = strdup(services_module->valuestring);
    if (services_hidden && !cJSON_IsNull(services_hidden)) services_hidden_local_str = strdup(services_hidden->valuestring);

    domain_order_services10001_local_var = domain_order_services10001_create_internal (
        services_id_local_str,
        services_name_local_str,
        services_cost_local_str,
        services_currency_local_str,
        services_category_local_str,
        services_buyable_local_str,
        services_type_local_str,
        services_field1_local_str,
        services_field2_local_str,
        services_module_local_str,
        services_hidden_local_str
        );

    if (!domain_order_services10001_local_var) {
        goto end;
    }

    return domain_order_services10001_local_var;
end:
    if (services_id_local_str) {
        free(services_id_local_str);
        services_id_local_str = NULL;
    }
    if (services_name_local_str) {
        free(services_name_local_str);
        services_name_local_str = NULL;
    }
    if (services_cost_local_str) {
        free(services_cost_local_str);
        services_cost_local_str = NULL;
    }
    if (services_currency_local_str) {
        free(services_currency_local_str);
        services_currency_local_str = NULL;
    }
    if (services_category_local_str) {
        free(services_category_local_str);
        services_category_local_str = NULL;
    }
    if (services_buyable_local_str) {
        free(services_buyable_local_str);
        services_buyable_local_str = NULL;
    }
    if (services_type_local_str) {
        free(services_type_local_str);
        services_type_local_str = NULL;
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
    if (services_hidden_local_str) {
        free(services_hidden_local_str);
        services_hidden_local_str = NULL;
    }
    return NULL;

}
