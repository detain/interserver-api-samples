#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "raid_option.h"



static raid_option_t *raid_option_create_internal(
    int id,
    char *short_desc,
    double monthly_price
    ) {
    raid_option_t *raid_option_local_var = malloc(sizeof(raid_option_t));
    if (!raid_option_local_var) {
        return NULL;
    }
    raid_option_local_var->id = id;
    raid_option_local_var->short_desc = short_desc;
    raid_option_local_var->monthly_price = monthly_price;

    raid_option_local_var->_library_owned = 1;
    return raid_option_local_var;
}

__attribute__((deprecated)) raid_option_t *raid_option_create(
    int id,
    char *short_desc,
    double monthly_price
    ) {
    return raid_option_create_internal (
        id,
        short_desc,
        monthly_price
        );
}

void raid_option_free(raid_option_t *raid_option) {
    if(NULL == raid_option){
        return ;
    }
    if(raid_option->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "raid_option_free");
        return ;
    }
    listEntry_t *listEntry;
    if (raid_option->short_desc) {
        free(raid_option->short_desc);
        raid_option->short_desc = NULL;
    }
    free(raid_option);
}

cJSON *raid_option_convertToJSON(raid_option_t *raid_option) {
    cJSON *item = cJSON_CreateObject();

    // raid_option->id
    if(raid_option->id) {
    if(cJSON_AddNumberToObject(item, "id", raid_option->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // raid_option->short_desc
    if(raid_option->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", raid_option->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // raid_option->monthly_price
    if(raid_option->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", raid_option->monthly_price) == NULL) {
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

raid_option_t *raid_option_parseFromJSON(cJSON *raid_optionJSON){

    raid_option_t *raid_option_local_var = NULL;

    // raid_option->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(raid_optionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // raid_option->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(raid_optionJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // raid_option->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(raid_optionJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }


    raid_option_local_var = raid_option_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0
        );

    return raid_option_local_var;
end:
    return NULL;

}
