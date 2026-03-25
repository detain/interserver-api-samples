#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "control_panel.h"



static control_panel_t *control_panel_create_internal(
    int *id,
    char *short_desc,
    double *monthly_price
    ) {
    control_panel_t *control_panel_local_var = malloc(sizeof(control_panel_t));
    if (!control_panel_local_var) {
        return NULL;
    }
    memset(control_panel_local_var, 0, sizeof(control_panel_t));
    control_panel_local_var->_library_owned = 1;
    control_panel_local_var->id = id;
    control_panel_local_var->short_desc = short_desc;
    control_panel_local_var->monthly_price = monthly_price;
    return control_panel_local_var;
}

__attribute__((deprecated)) control_panel_t *control_panel_create(
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
    control_panel_t *result = control_panel_create_internal (
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

void control_panel_free(control_panel_t *control_panel) {
    if(NULL == control_panel){
        return ;
    }
    if(control_panel->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "control_panel_free");
        return ;
    }
    listEntry_t *listEntry;
    if (control_panel->id) {
        free(control_panel->id);
        control_panel->id = NULL;
    }
    if (control_panel->short_desc) {
        free(control_panel->short_desc);
        control_panel->short_desc = NULL;
    }
    if (control_panel->monthly_price) {
        free(control_panel->monthly_price);
        control_panel->monthly_price = NULL;
    }
    free(control_panel);
}

cJSON *control_panel_convertToJSON(control_panel_t *control_panel) {
    cJSON *item = cJSON_CreateObject();

    // control_panel->id
    if(control_panel->id) {
    if(cJSON_AddNumberToObject(item, "id", *control_panel->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // control_panel->short_desc
    if(control_panel->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", control_panel->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // control_panel->monthly_price
    if(control_panel->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", *control_panel->monthly_price) == NULL) {
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

control_panel_t *control_panel_parseFromJSON(cJSON *control_panelJSON){

    control_panel_t *control_panel_local_var = NULL;

    // define the local variable for control_panel->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    // define the local variable for control_panel->monthly_price
    double *monthly_price_local_var = NULL;

    // control_panel->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(control_panelJSON, "id");
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

    // control_panel->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(control_panelJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // control_panel->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(control_panelJSON, "monthly_price");
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

    control_panel_local_var = control_panel_create_internal (
        id_local_var,
        short_desc_local_str,
        monthly_price_local_var
        );

    if (!control_panel_local_var) {
        goto end;
    }

    return control_panel_local_var;
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
