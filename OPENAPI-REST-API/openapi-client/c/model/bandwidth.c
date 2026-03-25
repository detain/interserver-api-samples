#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bandwidth.h"



static bandwidth_t *bandwidth_create_internal(
    int *id,
    char *short_desc,
    double *monthly_price,
    char *monthly_price_display
    ) {
    bandwidth_t *bandwidth_local_var = malloc(sizeof(bandwidth_t));
    if (!bandwidth_local_var) {
        return NULL;
    }
    memset(bandwidth_local_var, 0, sizeof(bandwidth_t));
    bandwidth_local_var->_library_owned = 1;
    bandwidth_local_var->id = id;
    bandwidth_local_var->short_desc = short_desc;
    bandwidth_local_var->monthly_price = monthly_price;
    bandwidth_local_var->monthly_price_display = monthly_price_display;
    return bandwidth_local_var;
}

__attribute__((deprecated)) bandwidth_t *bandwidth_create(
    int *id,
    char *short_desc,
    double *monthly_price,
    char *monthly_price_display
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    double *monthly_price_copy = NULL;
    if (monthly_price) {
        monthly_price_copy = malloc(sizeof(double));
        if (monthly_price_copy) *monthly_price_copy = *monthly_price;
    }
    bandwidth_t *result = bandwidth_create_internal (
        id_copy,
        short_desc,
        monthly_price_copy,
        monthly_price_display
        );
    if (!result) {
        free(id_copy);
        free(monthly_price_copy);
    }
    return result;
}

void bandwidth_free(bandwidth_t *bandwidth) {
    if(NULL == bandwidth){
        return ;
    }
    if(bandwidth->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bandwidth_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bandwidth->id) {
        free(bandwidth->id);
        bandwidth->id = NULL;
    }
    if (bandwidth->short_desc) {
        free(bandwidth->short_desc);
        bandwidth->short_desc = NULL;
    }
    if (bandwidth->monthly_price) {
        free(bandwidth->monthly_price);
        bandwidth->monthly_price = NULL;
    }
    if (bandwidth->monthly_price_display) {
        free(bandwidth->monthly_price_display);
        bandwidth->monthly_price_display = NULL;
    }
    free(bandwidth);
}

cJSON *bandwidth_convertToJSON(bandwidth_t *bandwidth) {
    cJSON *item = cJSON_CreateObject();

    // bandwidth->id
    if(bandwidth->id) {
    if(cJSON_AddNumberToObject(item, "id", *bandwidth->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // bandwidth->short_desc
    if(bandwidth->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", bandwidth->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // bandwidth->monthly_price
    if(bandwidth->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", *bandwidth->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // bandwidth->monthly_price_display
    if(bandwidth->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", bandwidth->monthly_price_display) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

bandwidth_t *bandwidth_parseFromJSON(cJSON *bandwidthJSON){

    bandwidth_t *bandwidth_local_var = NULL;

    // define the local variable for bandwidth->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    // define the local variable for bandwidth->monthly_price
    double *monthly_price_local_var = NULL;

    char *monthly_price_display_local_str = NULL;

    // bandwidth->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bandwidthJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
    }

    // bandwidth->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(bandwidthJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // bandwidth->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(bandwidthJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    monthly_price_local_var = malloc(sizeof(double));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
    }

    // bandwidth->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(bandwidthJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (monthly_price_display && !cJSON_IsNull(monthly_price_display)) monthly_price_display_local_str = strdup(monthly_price_display->valuestring);

    bandwidth_local_var = bandwidth_create_internal (
        id_local_var,
        short_desc_local_str,
        monthly_price_local_var,
        monthly_price_display_local_str
        );

    if (!bandwidth_local_var) {
        goto end;
    }

    return bandwidth_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (short_desc_local_str) {
        free(short_desc_local_str);
        short_desc_local_str = NULL;
    }
    if (monthly_price_local_var) {
        free(monthly_price_local_var);
        monthly_price_local_var = NULL;
    }
    if (monthly_price_display_local_str) {
        free(monthly_price_display_local_str);
        monthly_price_display_local_str = NULL;
    }
    return NULL;

}
