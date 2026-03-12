#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ip_place_order.h"



static scrub_ip_place_order_t *scrub_ip_place_order_create_internal(
    int service_type,
    char *ip
    ) {
    scrub_ip_place_order_t *scrub_ip_place_order_local_var = malloc(sizeof(scrub_ip_place_order_t));
    if (!scrub_ip_place_order_local_var) {
        return NULL;
    }
    scrub_ip_place_order_local_var->service_type = service_type;
    scrub_ip_place_order_local_var->ip = ip;

    scrub_ip_place_order_local_var->_library_owned = 1;
    return scrub_ip_place_order_local_var;
}

__attribute__((deprecated)) scrub_ip_place_order_t *scrub_ip_place_order_create(
    int service_type,
    char *ip
    ) {
    return scrub_ip_place_order_create_internal (
        service_type,
        ip
        );
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
    if(cJSON_AddNumberToObject(item, "service_type", scrub_ip_place_order->service_type) == NULL) {
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


    scrub_ip_place_order_local_var = scrub_ip_place_order_create_internal (
        service_type->valuedouble,
        strdup(ip->valuestring)
        );

    return scrub_ip_place_order_local_var;
end:
    return NULL;

}
