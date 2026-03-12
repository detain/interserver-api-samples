#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_history_response.h"



static vps_traffic_history_response_t *vps_traffic_history_response_create_internal(
    vps_traffic_history_section_response_t *hour,
    vps_traffic_history_section_response_t *day
    ) {
    vps_traffic_history_response_t *vps_traffic_history_response_local_var = malloc(sizeof(vps_traffic_history_response_t));
    if (!vps_traffic_history_response_local_var) {
        return NULL;
    }
    vps_traffic_history_response_local_var->hour = hour;
    vps_traffic_history_response_local_var->day = day;

    vps_traffic_history_response_local_var->_library_owned = 1;
    return vps_traffic_history_response_local_var;
}

__attribute__((deprecated)) vps_traffic_history_response_t *vps_traffic_history_response_create(
    vps_traffic_history_section_response_t *hour,
    vps_traffic_history_section_response_t *day
    ) {
    return vps_traffic_history_response_create_internal (
        hour,
        day
        );
}

void vps_traffic_history_response_free(vps_traffic_history_response_t *vps_traffic_history_response) {
    if(NULL == vps_traffic_history_response){
        return ;
    }
    if(vps_traffic_history_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_history_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_history_response->hour) {
        vps_traffic_history_section_response_free(vps_traffic_history_response->hour);
        vps_traffic_history_response->hour = NULL;
    }
    if (vps_traffic_history_response->day) {
        vps_traffic_history_section_response_free(vps_traffic_history_response->day);
        vps_traffic_history_response->day = NULL;
    }
    free(vps_traffic_history_response);
}

cJSON *vps_traffic_history_response_convertToJSON(vps_traffic_history_response_t *vps_traffic_history_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_history_response->hour
    if (!vps_traffic_history_response->hour) {
        goto fail;
    }
    cJSON *hour_local_JSON = vps_traffic_history_section_response_convertToJSON(vps_traffic_history_response->hour);
    if(hour_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "hour", hour_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_history_response->day
    if (!vps_traffic_history_response->day) {
        goto fail;
    }
    cJSON *day_local_JSON = vps_traffic_history_section_response_convertToJSON(vps_traffic_history_response->day);
    if(day_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "day", day_local_JSON);
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

vps_traffic_history_response_t *vps_traffic_history_response_parseFromJSON(cJSON *vps_traffic_history_responseJSON){

    vps_traffic_history_response_t *vps_traffic_history_response_local_var = NULL;

    // define the local variable for vps_traffic_history_response->hour
    vps_traffic_history_section_response_t *hour_local_nonprim = NULL;

    // define the local variable for vps_traffic_history_response->day
    vps_traffic_history_section_response_t *day_local_nonprim = NULL;

    // vps_traffic_history_response->hour
    cJSON *hour = cJSON_GetObjectItemCaseSensitive(vps_traffic_history_responseJSON, "hour");
    if (cJSON_IsNull(hour)) {
        hour = NULL;
    }
    if (!hour) {
        goto end;
    }

    
    hour_local_nonprim = vps_traffic_history_section_response_parseFromJSON(hour); //nonprimitive

    // vps_traffic_history_response->day
    cJSON *day = cJSON_GetObjectItemCaseSensitive(vps_traffic_history_responseJSON, "day");
    if (cJSON_IsNull(day)) {
        day = NULL;
    }
    if (!day) {
        goto end;
    }

    
    day_local_nonprim = vps_traffic_history_section_response_parseFromJSON(day); //nonprimitive


    vps_traffic_history_response_local_var = vps_traffic_history_response_create_internal (
        hour_local_nonprim,
        day_local_nonprim
        );

    return vps_traffic_history_response_local_var;
end:
    if (hour_local_nonprim) {
        vps_traffic_history_section_response_free(hour_local_nonprim);
        hour_local_nonprim = NULL;
    }
    if (day_local_nonprim) {
        vps_traffic_history_section_response_free(day_local_nonprim);
        day_local_nonprim = NULL;
    }
    return NULL;

}
