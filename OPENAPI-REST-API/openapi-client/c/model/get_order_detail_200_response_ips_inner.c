#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_order_detail_200_response_ips_inner.h"



static get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_create_internal(
    double *service_id,
    char *service_module,
    char *service_hostname
    ) {
    get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_local_var = malloc(sizeof(get_order_detail_200_response_ips_inner_t));
    if (!get_order_detail_200_response_ips_inner_local_var) {
        return NULL;
    }
    memset(get_order_detail_200_response_ips_inner_local_var, 0, sizeof(get_order_detail_200_response_ips_inner_t));
    get_order_detail_200_response_ips_inner_local_var->_library_owned = 1;
    get_order_detail_200_response_ips_inner_local_var->service_id = service_id;
    get_order_detail_200_response_ips_inner_local_var->service_module = service_module;
    get_order_detail_200_response_ips_inner_local_var->service_hostname = service_hostname;
    return get_order_detail_200_response_ips_inner_local_var;
}

__attribute__((deprecated)) get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_create(
    double *service_id,
    char *service_module,
    char *service_hostname
    ) {
    double *service_id_copy = NULL;
    if (service_id) {
        service_id_copy = malloc(sizeof(double));
        if (service_id_copy) *service_id_copy = *service_id;
    }
    get_order_detail_200_response_ips_inner_t *result = get_order_detail_200_response_ips_inner_create_internal (
        service_id_copy,
        service_module,
        service_hostname
        );
    if (!result) {
        free(service_id_copy);
    }
    return result;
}

void get_order_detail_200_response_ips_inner_free(get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner) {
    if(NULL == get_order_detail_200_response_ips_inner){
        return ;
    }
    if(get_order_detail_200_response_ips_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_order_detail_200_response_ips_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_order_detail_200_response_ips_inner->service_id) {
        free(get_order_detail_200_response_ips_inner->service_id);
        get_order_detail_200_response_ips_inner->service_id = NULL;
    }
    if (get_order_detail_200_response_ips_inner->service_module) {
        free(get_order_detail_200_response_ips_inner->service_module);
        get_order_detail_200_response_ips_inner->service_module = NULL;
    }
    if (get_order_detail_200_response_ips_inner->service_hostname) {
        free(get_order_detail_200_response_ips_inner->service_hostname);
        get_order_detail_200_response_ips_inner->service_hostname = NULL;
    }
    free(get_order_detail_200_response_ips_inner);
}

cJSON *get_order_detail_200_response_ips_inner_convertToJSON(get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_order_detail_200_response_ips_inner->service_id
    if(get_order_detail_200_response_ips_inner->service_id) {
    if(cJSON_AddNumberToObject(item, "service_id", *get_order_detail_200_response_ips_inner->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_order_detail_200_response_ips_inner->service_module
    if(get_order_detail_200_response_ips_inner->service_module) {
    if(cJSON_AddStringToObject(item, "service_module", get_order_detail_200_response_ips_inner->service_module) == NULL) {
    goto fail; //String
    }
    }


    // get_order_detail_200_response_ips_inner->service_hostname
    if(get_order_detail_200_response_ips_inner->service_hostname) {
    if(cJSON_AddStringToObject(item, "service_hostname", get_order_detail_200_response_ips_inner->service_hostname) == NULL) {
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

get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_parseFromJSON(cJSON *get_order_detail_200_response_ips_innerJSON){

    get_order_detail_200_response_ips_inner_t *get_order_detail_200_response_ips_inner_local_var = NULL;

    // define the local variable for get_order_detail_200_response_ips_inner->service_id
    double *service_id_local_var = NULL;

    char *service_module_local_str = NULL;

    char *service_hostname_local_str = NULL;

    // get_order_detail_200_response_ips_inner->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_ips_innerJSON, "service_id");
    if (cJSON_IsNull(service_id)) {
        service_id = NULL;
    }
    if (service_id) { 
    if(!cJSON_IsNumber(service_id))
    {
    goto end; //Numeric
    }
    service_id_local_var = malloc(sizeof(double));
    if(!service_id_local_var)
    {
        goto end;
    }
    *service_id_local_var = service_id->valuedouble;
    }

    // get_order_detail_200_response_ips_inner->service_module
    cJSON *service_module = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_ips_innerJSON, "service_module");
    if (cJSON_IsNull(service_module)) {
        service_module = NULL;
    }
    if (service_module) { 
    if(!cJSON_IsString(service_module) && !cJSON_IsNull(service_module))
    {
    goto end; //String
    }
    }

    // get_order_detail_200_response_ips_inner->service_hostname
    cJSON *service_hostname = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_ips_innerJSON, "service_hostname");
    if (cJSON_IsNull(service_hostname)) {
        service_hostname = NULL;
    }
    if (service_hostname) { 
    if(!cJSON_IsString(service_hostname) && !cJSON_IsNull(service_hostname))
    {
    goto end; //String
    }
    }


    if (service_module && !cJSON_IsNull(service_module)) service_module_local_str = strdup(service_module->valuestring);
    if (service_hostname && !cJSON_IsNull(service_hostname)) service_hostname_local_str = strdup(service_hostname->valuestring);

    get_order_detail_200_response_ips_inner_local_var = get_order_detail_200_response_ips_inner_create_internal (
        service_id_local_var,
        service_module_local_str,
        service_hostname_local_str
        );

    if (!get_order_detail_200_response_ips_inner_local_var) {
        goto end;
    }

    return get_order_detail_200_response_ips_inner_local_var;
end:
    if (service_id_local_var) {
        free(service_id_local_var);
        service_id_local_var = NULL;
    }
    if (service_module_local_str) {
        free(service_module_local_str);
        service_module_local_str = NULL;
    }
    if (service_hostname_local_str) {
        free(service_hostname_local_str);
        service_hostname_local_str = NULL;
    }
    return NULL;

}
