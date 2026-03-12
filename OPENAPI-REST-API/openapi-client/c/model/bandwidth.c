#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bandwidth.h"



static bandwidth_t *bandwidth_create_internal(
    int id,
    char *short_desc,
    double monthly_price,
    char *monthly_price_display
    ) {
    bandwidth_t *bandwidth_local_var = malloc(sizeof(bandwidth_t));
    if (!bandwidth_local_var) {
        return NULL;
    }
    bandwidth_local_var->id = id;
    bandwidth_local_var->short_desc = short_desc;
    bandwidth_local_var->monthly_price = monthly_price;
    bandwidth_local_var->monthly_price_display = monthly_price_display;

    bandwidth_local_var->_library_owned = 1;
    return bandwidth_local_var;
}

__attribute__((deprecated)) bandwidth_t *bandwidth_create(
    int id,
    char *short_desc,
    double monthly_price,
    char *monthly_price_display
    ) {
    return bandwidth_create_internal (
        id,
        short_desc,
        monthly_price,
        monthly_price_display
        );
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
    if (bandwidth->short_desc) {
        free(bandwidth->short_desc);
        bandwidth->short_desc = NULL;
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
    if(cJSON_AddNumberToObject(item, "id", bandwidth->id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "monthly_price", bandwidth->monthly_price) == NULL) {
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


    bandwidth_local_var = bandwidth_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL
        );

    return bandwidth_local_var;
end:
    return NULL;

}
