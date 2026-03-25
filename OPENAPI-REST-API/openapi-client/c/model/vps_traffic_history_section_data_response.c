#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_history_section_data_response.h"



static vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response_create_internal(
    ) {
    vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response_local_var = malloc(sizeof(vps_traffic_history_section_data_response_t));
    if (!vps_traffic_history_section_data_response_local_var) {
        return NULL;
    }
    memset(vps_traffic_history_section_data_response_local_var, 0, sizeof(vps_traffic_history_section_data_response_t));
    vps_traffic_history_section_data_response_local_var->_library_owned = 1;
    return vps_traffic_history_section_data_response_local_var;
}

__attribute__((deprecated)) vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response_create(
    ) {
    vps_traffic_history_section_data_response_t *result = vps_traffic_history_section_data_response_create_internal (
        );
    if (!result) {
    }
    return result;
}

void vps_traffic_history_section_data_response_free(vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response) {
    if(NULL == vps_traffic_history_section_data_response){
        return ;
    }
    if(vps_traffic_history_section_data_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_history_section_data_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(vps_traffic_history_section_data_response);
}

cJSON *vps_traffic_history_section_data_response_convertToJSON(vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response_parseFromJSON(cJSON *vps_traffic_history_section_data_responseJSON){

    vps_traffic_history_section_data_response_t *vps_traffic_history_section_data_response_local_var = NULL;



    vps_traffic_history_section_data_response_local_var = vps_traffic_history_section_data_response_create_internal (
        );

    if (!vps_traffic_history_section_data_response_local_var) {
        goto end;
    }

    return vps_traffic_history_section_data_response_local_var;
end:
    return NULL;

}
