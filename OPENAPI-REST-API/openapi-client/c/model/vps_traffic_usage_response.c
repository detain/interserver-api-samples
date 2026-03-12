#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_usage_response.h"



static vps_traffic_usage_response_t *vps_traffic_usage_response_create_internal(
    vps_traffic_totals_section_response_t *current,
    vps_traffic_totals_section_response_t *peak,
    vps_traffic_usage_average_response_t *average
    ) {
    vps_traffic_usage_response_t *vps_traffic_usage_response_local_var = malloc(sizeof(vps_traffic_usage_response_t));
    if (!vps_traffic_usage_response_local_var) {
        return NULL;
    }
    vps_traffic_usage_response_local_var->current = current;
    vps_traffic_usage_response_local_var->peak = peak;
    vps_traffic_usage_response_local_var->average = average;

    vps_traffic_usage_response_local_var->_library_owned = 1;
    return vps_traffic_usage_response_local_var;
}

__attribute__((deprecated)) vps_traffic_usage_response_t *vps_traffic_usage_response_create(
    vps_traffic_totals_section_response_t *current,
    vps_traffic_totals_section_response_t *peak,
    vps_traffic_usage_average_response_t *average
    ) {
    return vps_traffic_usage_response_create_internal (
        current,
        peak,
        average
        );
}

void vps_traffic_usage_response_free(vps_traffic_usage_response_t *vps_traffic_usage_response) {
    if(NULL == vps_traffic_usage_response){
        return ;
    }
    if(vps_traffic_usage_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_usage_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_usage_response->current) {
        vps_traffic_totals_section_response_free(vps_traffic_usage_response->current);
        vps_traffic_usage_response->current = NULL;
    }
    if (vps_traffic_usage_response->peak) {
        vps_traffic_totals_section_response_free(vps_traffic_usage_response->peak);
        vps_traffic_usage_response->peak = NULL;
    }
    if (vps_traffic_usage_response->average) {
        vps_traffic_usage_average_response_free(vps_traffic_usage_response->average);
        vps_traffic_usage_response->average = NULL;
    }
    free(vps_traffic_usage_response);
}

cJSON *vps_traffic_usage_response_convertToJSON(vps_traffic_usage_response_t *vps_traffic_usage_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_usage_response->current
    if (!vps_traffic_usage_response->current) {
        goto fail;
    }
    cJSON *current_local_JSON = vps_traffic_totals_section_response_convertToJSON(vps_traffic_usage_response->current);
    if(current_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "current", current_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_usage_response->peak
    if (!vps_traffic_usage_response->peak) {
        goto fail;
    }
    cJSON *peak_local_JSON = vps_traffic_totals_section_response_convertToJSON(vps_traffic_usage_response->peak);
    if(peak_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "peak", peak_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_usage_response->average
    if (!vps_traffic_usage_response->average) {
        goto fail;
    }
    cJSON *average_local_JSON = vps_traffic_usage_average_response_convertToJSON(vps_traffic_usage_response->average);
    if(average_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "average", average_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_usage_response_t *vps_traffic_usage_response_parseFromJSON(cJSON *vps_traffic_usage_responseJSON){

    vps_traffic_usage_response_t *vps_traffic_usage_response_local_var = NULL;

    // define the local variable for vps_traffic_usage_response->current
    vps_traffic_totals_section_response_t *current_local_nonprim = NULL;

    // define the local variable for vps_traffic_usage_response->peak
    vps_traffic_totals_section_response_t *peak_local_nonprim = NULL;

    // define the local variable for vps_traffic_usage_response->average
    vps_traffic_usage_average_response_t *average_local_nonprim = NULL;

    // vps_traffic_usage_response->current
    cJSON *current = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_responseJSON, "current");
    if (cJSON_IsNull(current)) {
        current = NULL;
    }
    if (!current) {
        goto end;
    }

    
    current_local_nonprim = vps_traffic_totals_section_response_parseFromJSON(current); //nonprimitive

    // vps_traffic_usage_response->peak
    cJSON *peak = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_responseJSON, "peak");
    if (cJSON_IsNull(peak)) {
        peak = NULL;
    }
    if (!peak) {
        goto end;
    }

    
    peak_local_nonprim = vps_traffic_totals_section_response_parseFromJSON(peak); //nonprimitive

    // vps_traffic_usage_response->average
    cJSON *average = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_responseJSON, "average");
    if (cJSON_IsNull(average)) {
        average = NULL;
    }
    if (!average) {
        goto end;
    }

    
    average_local_nonprim = vps_traffic_usage_average_response_parseFromJSON(average); //nonprimitive


    vps_traffic_usage_response_local_var = vps_traffic_usage_response_create_internal (
        current_local_nonprim,
        peak_local_nonprim,
        average_local_nonprim
        );

    return vps_traffic_usage_response_local_var;
end:
    if (current_local_nonprim) {
        vps_traffic_totals_section_response_free(current_local_nonprim);
        current_local_nonprim = NULL;
    }
    if (peak_local_nonprim) {
        vps_traffic_totals_section_response_free(peak_local_nonprim);
        peak_local_nonprim = NULL;
    }
    if (average_local_nonprim) {
        vps_traffic_usage_average_response_free(average_local_nonprim);
        average_local_nonprim = NULL;
    }
    return NULL;

}
