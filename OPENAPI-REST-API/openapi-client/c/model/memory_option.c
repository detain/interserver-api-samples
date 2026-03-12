#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "memory_option.h"



static memory_option_t *memory_option_create_internal(
    int id,
    char *short_desc,
    double monthly_price,
    char *monthly_price_display
    ) {
    memory_option_t *memory_option_local_var = malloc(sizeof(memory_option_t));
    if (!memory_option_local_var) {
        return NULL;
    }
    memory_option_local_var->id = id;
    memory_option_local_var->short_desc = short_desc;
    memory_option_local_var->monthly_price = monthly_price;
    memory_option_local_var->monthly_price_display = monthly_price_display;

    memory_option_local_var->_library_owned = 1;
    return memory_option_local_var;
}

__attribute__((deprecated)) memory_option_t *memory_option_create(
    int id,
    char *short_desc,
    double monthly_price,
    char *monthly_price_display
    ) {
    return memory_option_create_internal (
        id,
        short_desc,
        monthly_price,
        monthly_price_display
        );
}

void memory_option_free(memory_option_t *memory_option) {
    if(NULL == memory_option){
        return ;
    }
    if(memory_option->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "memory_option_free");
        return ;
    }
    listEntry_t *listEntry;
    if (memory_option->short_desc) {
        free(memory_option->short_desc);
        memory_option->short_desc = NULL;
    }
    if (memory_option->monthly_price_display) {
        free(memory_option->monthly_price_display);
        memory_option->monthly_price_display = NULL;
    }
    free(memory_option);
}

cJSON *memory_option_convertToJSON(memory_option_t *memory_option) {
    cJSON *item = cJSON_CreateObject();

    // memory_option->id
    if(memory_option->id) {
    if(cJSON_AddNumberToObject(item, "id", memory_option->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // memory_option->short_desc
    if(memory_option->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", memory_option->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // memory_option->monthly_price
    if(memory_option->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", memory_option->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // memory_option->monthly_price_display
    if(memory_option->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", memory_option->monthly_price_display) == NULL) {
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

memory_option_t *memory_option_parseFromJSON(cJSON *memory_optionJSON){

    memory_option_t *memory_option_local_var = NULL;

    // memory_option->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(memory_optionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // memory_option->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(memory_optionJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // memory_option->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(memory_optionJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }

    // memory_option->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(memory_optionJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    memory_option_local_var = memory_option_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL
        );

    return memory_option_local_var;
end:
    return NULL;

}
