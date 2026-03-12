#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_usage_average_section_response.h"



static vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_create_internal(
    int total,
    int count,
    int value
    ) {
    vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_local_var = malloc(sizeof(vps_traffic_usage_average_section_response_t));
    if (!vps_traffic_usage_average_section_response_local_var) {
        return NULL;
    }
    vps_traffic_usage_average_section_response_local_var->total = total;
    vps_traffic_usage_average_section_response_local_var->count = count;
    vps_traffic_usage_average_section_response_local_var->value = value;

    vps_traffic_usage_average_section_response_local_var->_library_owned = 1;
    return vps_traffic_usage_average_section_response_local_var;
}

__attribute__((deprecated)) vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_create(
    int total,
    int count,
    int value
    ) {
    return vps_traffic_usage_average_section_response_create_internal (
        total,
        count,
        value
        );
}

void vps_traffic_usage_average_section_response_free(vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response) {
    if(NULL == vps_traffic_usage_average_section_response){
        return ;
    }
    if(vps_traffic_usage_average_section_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_usage_average_section_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(vps_traffic_usage_average_section_response);
}

cJSON *vps_traffic_usage_average_section_response_convertToJSON(vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_usage_average_section_response->total
    if (!vps_traffic_usage_average_section_response->total) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total", vps_traffic_usage_average_section_response->total) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_usage_average_section_response->count
    if (!vps_traffic_usage_average_section_response->count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "count", vps_traffic_usage_average_section_response->count) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_usage_average_section_response->value
    if (!vps_traffic_usage_average_section_response->value) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "value", vps_traffic_usage_average_section_response->value) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_parseFromJSON(cJSON *vps_traffic_usage_average_section_responseJSON){

    vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_local_var = NULL;

    // vps_traffic_usage_average_section_response->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_average_section_responseJSON, "total");
    if (cJSON_IsNull(total)) {
        total = NULL;
    }
    if (!total) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }

    // vps_traffic_usage_average_section_response->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_average_section_responseJSON, "count");
    if (cJSON_IsNull(count)) {
        count = NULL;
    }
    if (!count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }

    // vps_traffic_usage_average_section_response->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_average_section_responseJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }


    vps_traffic_usage_average_section_response_local_var = vps_traffic_usage_average_section_response_create_internal (
        total->valuedouble,
        count->valuedouble,
        value->valuedouble
        );

    return vps_traffic_usage_average_section_response_local_var;
end:
    return NULL;

}
