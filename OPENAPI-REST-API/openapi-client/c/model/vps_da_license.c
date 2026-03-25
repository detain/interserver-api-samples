#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_da_license.h"



static vps_da_license_t *vps_da_license_create_internal(
    char *name,
    char *sub_name,
    int *cost,
    char *img_disabled,
    char *img_active
    ) {
    vps_da_license_t *vps_da_license_local_var = malloc(sizeof(vps_da_license_t));
    if (!vps_da_license_local_var) {
        return NULL;
    }
    memset(vps_da_license_local_var, 0, sizeof(vps_da_license_t));
    vps_da_license_local_var->_library_owned = 1;
    vps_da_license_local_var->name = name;
    vps_da_license_local_var->sub_name = sub_name;
    vps_da_license_local_var->cost = cost;
    vps_da_license_local_var->img_disabled = img_disabled;
    vps_da_license_local_var->img_active = img_active;
    return vps_da_license_local_var;
}

__attribute__((deprecated)) vps_da_license_t *vps_da_license_create(
    char *name,
    char *sub_name,
    int *cost,
    char *img_disabled,
    char *img_active
    ) {
    int *cost_copy = NULL;
    if (cost) {
        cost_copy = malloc(sizeof(int));
        if (cost_copy) *cost_copy = *cost;
    }
    vps_da_license_t *result = vps_da_license_create_internal (
        name,
        sub_name,
        cost_copy,
        img_disabled,
        img_active
        );
    if (!result) {
        free(cost_copy);
    }
    return result;
}

void vps_da_license_free(vps_da_license_t *vps_da_license) {
    if(NULL == vps_da_license){
        return ;
    }
    if(vps_da_license->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_da_license_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_da_license->name) {
        free(vps_da_license->name);
        vps_da_license->name = NULL;
    }
    if (vps_da_license->sub_name) {
        free(vps_da_license->sub_name);
        vps_da_license->sub_name = NULL;
    }
    if (vps_da_license->cost) {
        free(vps_da_license->cost);
        vps_da_license->cost = NULL;
    }
    if (vps_da_license->img_disabled) {
        free(vps_da_license->img_disabled);
        vps_da_license->img_disabled = NULL;
    }
    if (vps_da_license->img_active) {
        free(vps_da_license->img_active);
        vps_da_license->img_active = NULL;
    }
    free(vps_da_license);
}

cJSON *vps_da_license_convertToJSON(vps_da_license_t *vps_da_license) {
    cJSON *item = cJSON_CreateObject();

    // vps_da_license->name
    if(vps_da_license->name) {
    if(cJSON_AddStringToObject(item, "name", vps_da_license->name) == NULL) {
    goto fail; //String
    }
    }


    // vps_da_license->sub_name
    if(vps_da_license->sub_name) {
    if(cJSON_AddStringToObject(item, "sub_name", vps_da_license->sub_name) == NULL) {
    goto fail; //String
    }
    }


    // vps_da_license->cost
    if(vps_da_license->cost) {
    if(cJSON_AddNumberToObject(item, "cost", *vps_da_license->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_da_license->img_disabled
    if(vps_da_license->img_disabled) {
    if(cJSON_AddStringToObject(item, "img_disabled", vps_da_license->img_disabled) == NULL) {
    goto fail; //String
    }
    }


    // vps_da_license->img_active
    if(vps_da_license->img_active) {
    if(cJSON_AddStringToObject(item, "img_active", vps_da_license->img_active) == NULL) {
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

vps_da_license_t *vps_da_license_parseFromJSON(cJSON *vps_da_licenseJSON){

    vps_da_license_t *vps_da_license_local_var = NULL;

    char *name_local_str = NULL;

    char *sub_name_local_str = NULL;

    // define the local variable for vps_da_license->cost
    int *cost_local_var = NULL;

    char *img_disabled_local_str = NULL;

    char *img_active_local_str = NULL;

    // vps_da_license->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_da_licenseJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // vps_da_license->sub_name
    cJSON *sub_name = cJSON_GetObjectItemCaseSensitive(vps_da_licenseJSON, "sub_name");
    if (cJSON_IsNull(sub_name)) {
        sub_name = NULL;
    }
    if (sub_name) { 
    if(!cJSON_IsString(sub_name) && !cJSON_IsNull(sub_name))
    {
    goto end; //String
    }
    }

    // vps_da_license->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(vps_da_licenseJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    cost_local_var = malloc(sizeof(int));
    if(!cost_local_var)
    {
        goto end;
    }
    *cost_local_var = cost->valuedouble;
    }

    // vps_da_license->img_disabled
    cJSON *img_disabled = cJSON_GetObjectItemCaseSensitive(vps_da_licenseJSON, "img_disabled");
    if (cJSON_IsNull(img_disabled)) {
        img_disabled = NULL;
    }
    if (img_disabled) { 
    if(!cJSON_IsString(img_disabled) && !cJSON_IsNull(img_disabled))
    {
    goto end; //String
    }
    }

    // vps_da_license->img_active
    cJSON *img_active = cJSON_GetObjectItemCaseSensitive(vps_da_licenseJSON, "img_active");
    if (cJSON_IsNull(img_active)) {
        img_active = NULL;
    }
    if (img_active) { 
    if(!cJSON_IsString(img_active) && !cJSON_IsNull(img_active))
    {
    goto end; //String
    }
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (sub_name && !cJSON_IsNull(sub_name)) sub_name_local_str = strdup(sub_name->valuestring);
    if (img_disabled && !cJSON_IsNull(img_disabled)) img_disabled_local_str = strdup(img_disabled->valuestring);
    if (img_active && !cJSON_IsNull(img_active)) img_active_local_str = strdup(img_active->valuestring);

    vps_da_license_local_var = vps_da_license_create_internal (
        name_local_str,
        sub_name_local_str,
        cost_local_var,
        img_disabled_local_str,
        img_active_local_str
        );

    if (!vps_da_license_local_var) {
        goto end;
    }

    return vps_da_license_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (sub_name_local_str) {
        free(sub_name_local_str);
        sub_name_local_str = NULL;
    }
    if (cost_local_var) {
        free(cost_local_var);
        cost_local_var = NULL;
    }
    if (img_disabled_local_str) {
        free(img_disabled_local_str);
        img_disabled_local_str = NULL;
    }
    if (img_active_local_str) {
        free(img_active_local_str);
        img_active_local_str = NULL;
    }
    return NULL;

}
