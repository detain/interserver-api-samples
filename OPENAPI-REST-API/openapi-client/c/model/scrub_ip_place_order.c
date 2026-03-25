#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ip_place_order.h"



static scrub_ip_place_order_t *scrub_ip_place_order_create_internal(
    int *service_type,
    char *ip
    ) {
    scrub_ip_place_order_t *scrub_ip_place_order_local_var = malloc(sizeof(scrub_ip_place_order_t));
    if (!scrub_ip_place_order_local_var) {
        return NULL;
    }
    memset(scrub_ip_place_order_local_var, 0, sizeof(scrub_ip_place_order_t));
    scrub_ip_place_order_local_var->_library_owned = 1;
    scrub_ip_place_order_local_var->service_type = service_type;
    scrub_ip_place_order_local_var->ip = ip;
    return scrub_ip_place_order_local_var;
}

__attribute__((deprecated)) scrub_ip_place_order_t *scrub_ip_place_order_create(
    int *service_type,
    char *ip
    ) {
    int *service_type_copy = NULL;
    if (service_type) {
        service_type_copy = malloc(sizeof(int));
        if (service_type_copy) *service_type_copy = *service_type;
    }
    scrub_ip_place_order_t *result = scrub_ip_place_order_create_internal (
        service_type_copy,
        ip
        );
    if (!result) {
        free(service_type_copy);
    }
    return result;
}

void scrub_ip_place_order_free(scrub_ip_place_order_t *scrub_ip_place_order) {
    if(NULL == scrub_ip_place_order){
        return ;
    }
    if(scrub_ip_place_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ip_place_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ip_place_order->service_type) {
        free(scrub_ip_place_order->service_type);
        scrub_ip_place_order->service_type = NULL;
    }
    if (scrub_ip_place_order->ip) {
        free(scrub_ip_place_order->ip);
        scrub_ip_place_order->ip = NULL;
    }
    free(scrub_ip_place_order);
}

cJSON *scrub_ip_place_order_convertToJSON(scrub_ip_place_order_t *scrub_ip_place_order) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ip_place_order->service_type
    if (!scrub_ip_place_order->service_type) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "service_type", *scrub_ip_place_order->service_type) == NULL) {
    goto fail; //Numeric
    }


    // scrub_ip_place_order->ip
    if (!scrub_ip_place_order->ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ip", scrub_ip_place_order->ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scrub_ip_place_order_t *scrub_ip_place_order_parseFromJSON(cJSON *scrub_ip_place_orderJSON){

    scrub_ip_place_order_t *scrub_ip_place_order_local_var = NULL;

    // define the local variable for scrub_ip_place_order->service_type
    int *service_type_local_var = NULL;

    char *ip_local_str = NULL;

    // scrub_ip_place_order->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(scrub_ip_place_orderJSON, "service_type");
    if (cJSON_IsNull(service_type)) {
        service_type = NULL;
    }
    if (!service_type) {
        goto end;
    }

    
    if(!cJSON_IsNumber(service_type))
    {
    goto end; //Numeric
    }
    service_type_local_var = malloc(sizeof(int));
    if(!service_type_local_var)
    {
        goto end;
    }
    *service_type_local_var = service_type->valuedouble;

    // scrub_ip_place_order->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(scrub_ip_place_orderJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }


    if (ip && !cJSON_IsNull(ip)) ip_local_str = strdup(ip->valuestring);

    scrub_ip_place_order_local_var = scrub_ip_place_order_create_internal (
        service_type_local_var,
        ip_local_str
        );

    if (!scrub_ip_place_order_local_var) {
        goto end;
    }

    return scrub_ip_place_order_local_var;
end:
    if (service_type_local_var) {
        free(service_type_local_var);
        service_type_local_var = NULL;
    }
    if (ip_local_str) {
        free(ip_local_str);
        ip_local_str = NULL;
    }
    return NULL;

}
