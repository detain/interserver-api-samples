#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_usage_average_response.h"



static vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_create_internal(
    vps_traffic_usage_average_section_response_t *in,
    vps_traffic_usage_average_section_response_t *out
    ) {
    vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_local_var = malloc(sizeof(vps_traffic_usage_average_response_t));
    if (!vps_traffic_usage_average_response_local_var) {
        return NULL;
    }
    memset(vps_traffic_usage_average_response_local_var, 0, sizeof(vps_traffic_usage_average_response_t));
    vps_traffic_usage_average_response_local_var->_library_owned = 1;
    vps_traffic_usage_average_response_local_var->in = in;
    vps_traffic_usage_average_response_local_var->out = out;
    return vps_traffic_usage_average_response_local_var;
}

__attribute__((deprecated)) vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_create(
    vps_traffic_usage_average_section_response_t *in,
    vps_traffic_usage_average_section_response_t *out
    ) {
    vps_traffic_usage_average_response_t *result = vps_traffic_usage_average_response_create_internal (
        in,
        out
        );
    if (!result) {
    }
    return result;
}

void vps_traffic_usage_average_response_free(vps_traffic_usage_average_response_t *vps_traffic_usage_average_response) {
    if(NULL == vps_traffic_usage_average_response){
        return ;
    }
    if(vps_traffic_usage_average_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_usage_average_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_usage_average_response->in) {
        vps_traffic_usage_average_section_response_free(vps_traffic_usage_average_response->in);
        vps_traffic_usage_average_response->in = NULL;
    }
    if (vps_traffic_usage_average_response->out) {
        vps_traffic_usage_average_section_response_free(vps_traffic_usage_average_response->out);
        vps_traffic_usage_average_response->out = NULL;
    }
    free(vps_traffic_usage_average_response);
}

cJSON *vps_traffic_usage_average_response_convertToJSON(vps_traffic_usage_average_response_t *vps_traffic_usage_average_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_usage_average_response->in
    if (!vps_traffic_usage_average_response->in) {
        goto fail;
    }
    cJSON *in_local_JSON = vps_traffic_usage_average_section_response_convertToJSON(vps_traffic_usage_average_response->in);
    if(in_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "in", in_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_usage_average_response->out
    if (!vps_traffic_usage_average_response->out) {
        goto fail;
    }
    cJSON *out_local_JSON = vps_traffic_usage_average_section_response_convertToJSON(vps_traffic_usage_average_response->out);
    if(out_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "out", out_local_JSON);
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

vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_parseFromJSON(cJSON *vps_traffic_usage_average_responseJSON){

    vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_local_var = NULL;

    // define the local variable for vps_traffic_usage_average_response->in
    vps_traffic_usage_average_section_response_t *in_local_nonprim = NULL;

    // define the local variable for vps_traffic_usage_average_response->out
    vps_traffic_usage_average_section_response_t *out_local_nonprim = NULL;

    // vps_traffic_usage_average_response->in
    cJSON *in = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_average_responseJSON, "in");
    if (cJSON_IsNull(in)) {
        in = NULL;
    }
    if (!in) {
        goto end;
    }

    
    in_local_nonprim = vps_traffic_usage_average_section_response_parseFromJSON(in); //nonprimitive

    // vps_traffic_usage_average_response->out
    cJSON *out = cJSON_GetObjectItemCaseSensitive(vps_traffic_usage_average_responseJSON, "out");
    if (cJSON_IsNull(out)) {
        out = NULL;
    }
    if (!out) {
        goto end;
    }

    
    out_local_nonprim = vps_traffic_usage_average_section_response_parseFromJSON(out); //nonprimitive



    vps_traffic_usage_average_response_local_var = vps_traffic_usage_average_response_create_internal (
        in_local_nonprim,
        out_local_nonprim
        );

    if (!vps_traffic_usage_average_response_local_var) {
        goto end;
    }

    return vps_traffic_usage_average_response_local_var;
end:
    if (in_local_nonprim) {
        vps_traffic_usage_average_section_response_free(in_local_nonprim);
        in_local_nonprim = NULL;
    }
    if (out_local_nonprim) {
        vps_traffic_usage_average_section_response_free(out_local_nonprim);
        out_local_nonprim = NULL;
    }
    return NULL;

}
