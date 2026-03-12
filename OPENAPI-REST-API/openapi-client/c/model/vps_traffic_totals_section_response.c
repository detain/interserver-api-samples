#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_totals_section_response.h"



static vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_create_internal(
    long in,
    long out
    ) {
    vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_local_var = malloc(sizeof(vps_traffic_totals_section_response_t));
    if (!vps_traffic_totals_section_response_local_var) {
        return NULL;
    }
    vps_traffic_totals_section_response_local_var->in = in;
    vps_traffic_totals_section_response_local_var->out = out;

    vps_traffic_totals_section_response_local_var->_library_owned = 1;
    return vps_traffic_totals_section_response_local_var;
}

__attribute__((deprecated)) vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_create(
    long in,
    long out
    ) {
    return vps_traffic_totals_section_response_create_internal (
        in,
        out
        );
}

void vps_traffic_totals_section_response_free(vps_traffic_totals_section_response_t *vps_traffic_totals_section_response) {
    if(NULL == vps_traffic_totals_section_response){
        return ;
    }
    if(vps_traffic_totals_section_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_totals_section_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(vps_traffic_totals_section_response);
}

cJSON *vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_section_response_t *vps_traffic_totals_section_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_totals_section_response->in
    if (!vps_traffic_totals_section_response->in) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "in", vps_traffic_totals_section_response->in) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_totals_section_response->out
    if (!vps_traffic_totals_section_response->out) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "out", vps_traffic_totals_section_response->out) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_parseFromJSON(cJSON *vps_traffic_totals_section_responseJSON){

    vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_local_var = NULL;

    // vps_traffic_totals_section_response->in
    cJSON *in = cJSON_GetObjectItemCaseSensitive(vps_traffic_totals_section_responseJSON, "in");
    if (cJSON_IsNull(in)) {
        in = NULL;
    }
    if (!in) {
        goto end;
    }

    
    if(!cJSON_IsNumber(in))
    {
    goto end; //Numeric
    }

    // vps_traffic_totals_section_response->out
    cJSON *out = cJSON_GetObjectItemCaseSensitive(vps_traffic_totals_section_responseJSON, "out");
    if (cJSON_IsNull(out)) {
        out = NULL;
    }
    if (!out) {
        goto end;
    }

    
    if(!cJSON_IsNumber(out))
    {
    goto end; //Numeric
    }


    vps_traffic_totals_section_response_local_var = vps_traffic_totals_section_response_create_internal (
        in->valuedouble,
        out->valuedouble
        );

    return vps_traffic_totals_section_response_local_var;
end:
    return NULL;

}
