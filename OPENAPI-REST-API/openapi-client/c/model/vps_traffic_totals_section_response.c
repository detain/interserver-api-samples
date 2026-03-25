#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_totals_section_response.h"



static vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_create_internal(
    long *in,
    long *out
    ) {
    vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_local_var = malloc(sizeof(vps_traffic_totals_section_response_t));
    if (!vps_traffic_totals_section_response_local_var) {
        return NULL;
    }
    memset(vps_traffic_totals_section_response_local_var, 0, sizeof(vps_traffic_totals_section_response_t));
    vps_traffic_totals_section_response_local_var->_library_owned = 1;
    vps_traffic_totals_section_response_local_var->in = in;
    vps_traffic_totals_section_response_local_var->out = out;
    return vps_traffic_totals_section_response_local_var;
}

__attribute__((deprecated)) vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_create(
    long *in,
    long *out
    ) {
    long *in_copy = NULL;
    if (in) {
        in_copy = malloc(sizeof(long));
        if (in_copy) *in_copy = *in;
    }
    long *out_copy = NULL;
    if (out) {
        out_copy = malloc(sizeof(long));
        if (out_copy) *out_copy = *out;
    }
    vps_traffic_totals_section_response_t *result = vps_traffic_totals_section_response_create_internal (
        in_copy,
        out_copy
        );
    if (!result) {
        free(in_copy);
        free(out_copy);
    }
    return result;
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
    if (vps_traffic_totals_section_response->in) {
        free(vps_traffic_totals_section_response->in);
        vps_traffic_totals_section_response->in = NULL;
    }
    if (vps_traffic_totals_section_response->out) {
        free(vps_traffic_totals_section_response->out);
        vps_traffic_totals_section_response->out = NULL;
    }
    free(vps_traffic_totals_section_response);
}

cJSON *vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_section_response_t *vps_traffic_totals_section_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_totals_section_response->in
    if (!vps_traffic_totals_section_response->in) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "in", *vps_traffic_totals_section_response->in) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_totals_section_response->out
    if (!vps_traffic_totals_section_response->out) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "out", *vps_traffic_totals_section_response->out) == NULL) {
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

    // define the local variable for vps_traffic_totals_section_response->in
    long *in_local_var = NULL;

    // define the local variable for vps_traffic_totals_section_response->out
    long *out_local_var = NULL;

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
    in_local_var = malloc(sizeof(long));
    if(!in_local_var)
    {
        goto end;
    }
    *in_local_var = in->valuedouble;

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
    out_local_var = malloc(sizeof(long));
    if(!out_local_var)
    {
        goto end;
    }
    *out_local_var = out->valuedouble;



    vps_traffic_totals_section_response_local_var = vps_traffic_totals_section_response_create_internal (
        in_local_var,
        out_local_var
        );

    if (!vps_traffic_totals_section_response_local_var) {
        goto end;
    }

    return vps_traffic_totals_section_response_local_var;
end:
    if (in_local_var) {
        free(in_local_var);
        in_local_var = NULL;
    }
    if (out_local_var) {
        free(out_local_var);
        out_local_var = NULL;
    }
    return NULL;

}
