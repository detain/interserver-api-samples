#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "operating_system.h"



static operating_system_t *operating_system_create_internal(
    int id,
    char *short_desc,
    double monthly_price
    ) {
    operating_system_t *operating_system_local_var = malloc(sizeof(operating_system_t));
    if (!operating_system_local_var) {
        return NULL;
    }
    operating_system_local_var->id = id;
    operating_system_local_var->short_desc = short_desc;
    operating_system_local_var->monthly_price = monthly_price;

    operating_system_local_var->_library_owned = 1;
    return operating_system_local_var;
}

__attribute__((deprecated)) operating_system_t *operating_system_create(
    int id,
    char *short_desc,
    double monthly_price
    ) {
    return operating_system_create_internal (
        id,
        short_desc,
        monthly_price
        );
}

void operating_system_free(operating_system_t *operating_system) {
    if(NULL == operating_system){
        return ;
    }
    if(operating_system->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "operating_system_free");
        return ;
    }
    listEntry_t *listEntry;
    if (operating_system->short_desc) {
        free(operating_system->short_desc);
        operating_system->short_desc = NULL;
    }
    free(operating_system);
}

cJSON *operating_system_convertToJSON(operating_system_t *operating_system) {
    cJSON *item = cJSON_CreateObject();

    // operating_system->id
    if(operating_system->id) {
    if(cJSON_AddNumberToObject(item, "id", operating_system->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // operating_system->short_desc
    if(operating_system->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", operating_system->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // operating_system->monthly_price
    if(operating_system->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", operating_system->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

operating_system_t *operating_system_parseFromJSON(cJSON *operating_systemJSON){

    operating_system_t *operating_system_local_var = NULL;

    // operating_system->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(operating_systemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // operating_system->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(operating_systemJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // operating_system->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(operating_systemJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }


    operating_system_local_var = operating_system_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0
        );

    return operating_system_local_var;
end:
    return NULL;

}
