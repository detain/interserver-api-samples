#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_plesk_license.h"



static vps_plesk_license_t *vps_plesk_license_create_internal(
    int id,
    char *name,
    char *sub_name,
    int cost
    ) {
    vps_plesk_license_t *vps_plesk_license_local_var = malloc(sizeof(vps_plesk_license_t));
    if (!vps_plesk_license_local_var) {
        return NULL;
    }
    vps_plesk_license_local_var->id = id;
    vps_plesk_license_local_var->name = name;
    vps_plesk_license_local_var->sub_name = sub_name;
    vps_plesk_license_local_var->cost = cost;

    vps_plesk_license_local_var->_library_owned = 1;
    return vps_plesk_license_local_var;
}

__attribute__((deprecated)) vps_plesk_license_t *vps_plesk_license_create(
    int id,
    char *name,
    char *sub_name,
    int cost
    ) {
    return vps_plesk_license_create_internal (
        id,
        name,
        sub_name,
        cost
        );
}

void vps_plesk_license_free(vps_plesk_license_t *vps_plesk_license) {
    if(NULL == vps_plesk_license){
        return ;
    }
    if(vps_plesk_license->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_plesk_license_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_plesk_license->name) {
        free(vps_plesk_license->name);
        vps_plesk_license->name = NULL;
    }
    if (vps_plesk_license->sub_name) {
        free(vps_plesk_license->sub_name);
        vps_plesk_license->sub_name = NULL;
    }
    free(vps_plesk_license);
}

cJSON *vps_plesk_license_convertToJSON(vps_plesk_license_t *vps_plesk_license) {
    cJSON *item = cJSON_CreateObject();

    // vps_plesk_license->id
    if(vps_plesk_license->id) {
    if(cJSON_AddNumberToObject(item, "id", vps_plesk_license->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_plesk_license->name
    if(vps_plesk_license->name) {
    if(cJSON_AddStringToObject(item, "name", vps_plesk_license->name) == NULL) {
    goto fail; //String
    }
    }


    // vps_plesk_license->sub_name
    if(vps_plesk_license->sub_name) {
    if(cJSON_AddStringToObject(item, "sub_name", vps_plesk_license->sub_name) == NULL) {
    goto fail; //String
    }
    }


    // vps_plesk_license->cost
    if(vps_plesk_license->cost) {
    if(cJSON_AddNumberToObject(item, "cost", vps_plesk_license->cost) == NULL) {
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

vps_plesk_license_t *vps_plesk_license_parseFromJSON(cJSON *vps_plesk_licenseJSON){

    vps_plesk_license_t *vps_plesk_license_local_var = NULL;

    // vps_plesk_license->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(vps_plesk_licenseJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // vps_plesk_license->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_plesk_licenseJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // vps_plesk_license->sub_name
    cJSON *sub_name = cJSON_GetObjectItemCaseSensitive(vps_plesk_licenseJSON, "sub_name");
    if (cJSON_IsNull(sub_name)) {
        sub_name = NULL;
    }
    if (sub_name) { 
    if(!cJSON_IsString(sub_name) && !cJSON_IsNull(sub_name))
    {
    goto end; //String
    }
    }

    // vps_plesk_license->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(vps_plesk_licenseJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    }


    vps_plesk_license_local_var = vps_plesk_license_create_internal (
        id ? id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        sub_name && !cJSON_IsNull(sub_name) ? strdup(sub_name->valuestring) : NULL,
        cost ? cost->valuedouble : 0
        );

    return vps_plesk_license_local_var;
end:
    return NULL;

}
