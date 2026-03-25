#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_usage_average_section_response.h"



static vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_create_internal(
    int *total,
    int *count,
    int *value
    ) {
    vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_local_var = malloc(sizeof(vps_traffic_usage_average_section_response_t));
    if (!vps_traffic_usage_average_section_response_local_var) {
        return NULL;
    }
    memset(vps_traffic_usage_average_section_response_local_var, 0, sizeof(vps_traffic_usage_average_section_response_t));
    vps_traffic_usage_average_section_response_local_var->_library_owned = 1;
    vps_traffic_usage_average_section_response_local_var->total = total;
    vps_traffic_usage_average_section_response_local_var->count = count;
    vps_traffic_usage_average_section_response_local_var->value = value;
    return vps_traffic_usage_average_section_response_local_var;
}

__attribute__((deprecated)) vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response_create(
    int *total,
    int *count,
    int *value
    ) {
    int *total_copy = NULL;
    if (total) {
        total_copy = malloc(sizeof(int));
        if (total_copy) *total_copy = *total;
    }
    int *count_copy = NULL;
    if (count) {
        count_copy = malloc(sizeof(int));
        if (count_copy) *count_copy = *count;
    }
    int *value_copy = NULL;
    if (value) {
        value_copy = malloc(sizeof(int));
        if (value_copy) *value_copy = *value;
    }
    vps_traffic_usage_average_section_response_t *result = vps_traffic_usage_average_section_response_create_internal (
        total_copy,
        count_copy,
        value_copy
        );
    if (!result) {
        free(total_copy);
        free(count_copy);
        free(value_copy);
    }
    return result;
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
    if (vps_traffic_usage_average_section_response->total) {
        free(vps_traffic_usage_average_section_response->total);
        vps_traffic_usage_average_section_response->total = NULL;
    }
    if (vps_traffic_usage_average_section_response->count) {
        free(vps_traffic_usage_average_section_response->count);
        vps_traffic_usage_average_section_response->count = NULL;
    }
    if (vps_traffic_usage_average_section_response->value) {
        free(vps_traffic_usage_average_section_response->value);
        vps_traffic_usage_average_section_response->value = NULL;
    }
    free(vps_traffic_usage_average_section_response);
}

cJSON *vps_traffic_usage_average_section_response_convertToJSON(vps_traffic_usage_average_section_response_t *vps_traffic_usage_average_section_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_usage_average_section_response->total
    if (!vps_traffic_usage_average_section_response->total) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total", *vps_traffic_usage_average_section_response->total) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_usage_average_section_response->count
    if (!vps_traffic_usage_average_section_response->count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "count", *vps_traffic_usage_average_section_response->count) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_usage_average_section_response->value
    if (!vps_traffic_usage_average_section_response->value) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "value", *vps_traffic_usage_average_section_response->value) == NULL) {
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

    // define the local variable for vps_traffic_usage_average_section_response->total
    int *total_local_var = NULL;

    // define the local variable for vps_traffic_usage_average_section_response->count
    int *count_local_var = NULL;

    // define the local variable for vps_traffic_usage_average_section_response->value
    int *value_local_var = NULL;

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
    total_local_var = malloc(sizeof(int));
    if(!total_local_var)
    {
        goto end;
    }
    *total_local_var = total->valuedouble;

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
    count_local_var = malloc(sizeof(int));
    if(!count_local_var)
    {
        goto end;
    }
    *count_local_var = count->valuedouble;

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
    value_local_var = malloc(sizeof(int));
    if(!value_local_var)
    {
        goto end;
    }
    *value_local_var = value->valuedouble;



    vps_traffic_usage_average_section_response_local_var = vps_traffic_usage_average_section_response_create_internal (
        total_local_var,
        count_local_var,
        value_local_var
        );

    if (!vps_traffic_usage_average_section_response_local_var) {
        goto end;
    }

    return vps_traffic_usage_average_section_response_local_var;
end:
    if (total_local_var) {
        free(total_local_var);
        total_local_var = NULL;
    }
    if (count_local_var) {
        free(count_local_var);
        count_local_var = NULL;
    }
    if (value_local_var) {
        free(value_local_var);
        value_local_var = NULL;
    }
    return NULL;

}
