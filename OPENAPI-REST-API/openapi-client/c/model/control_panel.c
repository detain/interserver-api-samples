#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "control_panel.h"



static control_panel_t *control_panel_create_internal(
    int id,
    char *short_desc,
    double monthly_price
    ) {
    control_panel_t *control_panel_local_var = malloc(sizeof(control_panel_t));
    if (!control_panel_local_var) {
        return NULL;
    }
    control_panel_local_var->id = id;
    control_panel_local_var->short_desc = short_desc;
    control_panel_local_var->monthly_price = monthly_price;

    control_panel_local_var->_library_owned = 1;
    return control_panel_local_var;
}

__attribute__((deprecated)) control_panel_t *control_panel_create(
    int id,
    char *short_desc,
    double monthly_price
    ) {
    return control_panel_create_internal (
        id,
        short_desc,
        monthly_price
        );
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
    if (control_panel->short_desc) {
        free(control_panel->short_desc);
        control_panel->short_desc = NULL;
    }
    free(control_panel);
}

cJSON *control_panel_convertToJSON(control_panel_t *control_panel) {
    cJSON *item = cJSON_CreateObject();

    // control_panel->id
    if(control_panel->id) {
    if(cJSON_AddNumberToObject(item, "id", control_panel->id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "monthly_price", control_panel->monthly_price) == NULL) {
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
    }


    control_panel_local_var = control_panel_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0
        );

    return control_panel_local_var;
end:
    return NULL;

}
