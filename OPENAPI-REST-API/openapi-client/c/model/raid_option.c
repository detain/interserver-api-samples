#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "raid_option.h"



static raid_option_t *raid_option_create_internal(
    int *id,
    char *short_desc,
    double *monthly_price
    ) {
    raid_option_t *raid_option_local_var = malloc(sizeof(raid_option_t));
    if (!raid_option_local_var) {
        return NULL;
    }
    memset(raid_option_local_var, 0, sizeof(raid_option_t));
    raid_option_local_var->_library_owned = 1;
    raid_option_local_var->id = id;
    raid_option_local_var->short_desc = short_desc;
    raid_option_local_var->monthly_price = monthly_price;
    return raid_option_local_var;
}

__attribute__((deprecated)) raid_option_t *raid_option_create(
    int *id,
    char *short_desc,
    double *monthly_price
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
    raid_option_t *result = raid_option_create_internal (
        id_copy,
        short_desc,
        monthly_price_copy
        );
    if (!result) {
        free(id_copy);
        free(monthly_price_copy);
    }
    return result;
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
    if (raid_option->id) {
        free(raid_option->id);
        raid_option->id = NULL;
    }
    if (raid_option->short_desc) {
        free(raid_option->short_desc);
        raid_option->short_desc = NULL;
    }
    if (raid_option->monthly_price) {
        free(raid_option->monthly_price);
        raid_option->monthly_price = NULL;
    }
    free(raid_option);
}

cJSON *raid_option_convertToJSON(raid_option_t *raid_option) {
    cJSON *item = cJSON_CreateObject();

    // raid_option->id
    if(raid_option->id) {
    if(cJSON_AddNumberToObject(item, "id", *raid_option->id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "monthly_price", *raid_option->monthly_price) == NULL) {
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

    // define the local variable for raid_option->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    // define the local variable for raid_option->monthly_price
    double *monthly_price_local_var = NULL;

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
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
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
    monthly_price_local_var = malloc(sizeof(double));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
    }


    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);

    raid_option_local_var = raid_option_create_internal (
        id_local_var,
        short_desc_local_str,
        monthly_price_local_var
        );

    if (!raid_option_local_var) {
        goto end;
    }

    return raid_option_local_var;
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
    return NULL;

}
