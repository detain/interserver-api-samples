#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "memory_option.h"



static memory_option_t *memory_option_create_internal(
    int *id,
    char *short_desc,
    double *monthly_price,
    char *monthly_price_display
    ) {
    memory_option_t *memory_option_local_var = malloc(sizeof(memory_option_t));
    if (!memory_option_local_var) {
        return NULL;
    }
    memset(memory_option_local_var, 0, sizeof(memory_option_t));
    memory_option_local_var->_library_owned = 1;
    memory_option_local_var->id = id;
    memory_option_local_var->short_desc = short_desc;
    memory_option_local_var->monthly_price = monthly_price;
    memory_option_local_var->monthly_price_display = monthly_price_display;
    return memory_option_local_var;
}

__attribute__((deprecated)) memory_option_t *memory_option_create(
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
    memory_option_t *result = memory_option_create_internal (
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

void memory_option_free(memory_option_t *memory_option) {
    if(NULL == memory_option){
        return ;
    }
    if(memory_option->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "memory_option_free");
        return ;
    }
    listEntry_t *listEntry;
    if (memory_option->id) {
        free(memory_option->id);
        memory_option->id = NULL;
    }
    if (memory_option->short_desc) {
        free(memory_option->short_desc);
        memory_option->short_desc = NULL;
    }
    if (memory_option->monthly_price) {
        free(memory_option->monthly_price);
        memory_option->monthly_price = NULL;
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
    if(cJSON_AddNumberToObject(item, "id", *memory_option->id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "monthly_price", *memory_option->monthly_price) == NULL) {
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

    // define the local variable for memory_option->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    // define the local variable for memory_option->monthly_price
    double *monthly_price_local_var = NULL;

    char *monthly_price_display_local_str = NULL;

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
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
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
    monthly_price_local_var = malloc(sizeof(double));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
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


    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (monthly_price_display && !cJSON_IsNull(monthly_price_display)) monthly_price_display_local_str = strdup(monthly_price_display->valuestring);

    memory_option_local_var = memory_option_create_internal (
        id_local_var,
        short_desc_local_str,
        monthly_price_local_var,
        monthly_price_display_local_str
        );

    if (!memory_option_local_var) {
        goto end;
    }

    return memory_option_local_var;
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
