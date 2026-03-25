#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_plesk12_data.h"



static vps_plesk12_data_t *vps_plesk12_data_create_internal(
    vps_plesk_license_t *admin,
    vps_plesk_license_t *pro,
    vps_plesk_license_t *host
    ) {
    vps_plesk12_data_t *vps_plesk12_data_local_var = malloc(sizeof(vps_plesk12_data_t));
    if (!vps_plesk12_data_local_var) {
        return NULL;
    }
    memset(vps_plesk12_data_local_var, 0, sizeof(vps_plesk12_data_t));
    vps_plesk12_data_local_var->_library_owned = 1;
    vps_plesk12_data_local_var->admin = admin;
    vps_plesk12_data_local_var->pro = pro;
    vps_plesk12_data_local_var->host = host;
    return vps_plesk12_data_local_var;
}

__attribute__((deprecated)) vps_plesk12_data_t *vps_plesk12_data_create(
    vps_plesk_license_t *admin,
    vps_plesk_license_t *pro,
    vps_plesk_license_t *host
    ) {
    vps_plesk12_data_t *result = vps_plesk12_data_create_internal (
        admin,
        pro,
        host
        );
    if (!result) {
    }
    return result;
}

void vps_plesk12_data_free(vps_plesk12_data_t *vps_plesk12_data) {
    if(NULL == vps_plesk12_data){
        return ;
    }
    if(vps_plesk12_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_plesk12_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_plesk12_data->admin) {
        vps_plesk_license_free(vps_plesk12_data->admin);
        vps_plesk12_data->admin = NULL;
    }
    if (vps_plesk12_data->pro) {
        vps_plesk_license_free(vps_plesk12_data->pro);
        vps_plesk12_data->pro = NULL;
    }
    if (vps_plesk12_data->host) {
        vps_plesk_license_free(vps_plesk12_data->host);
        vps_plesk12_data->host = NULL;
    }
    free(vps_plesk12_data);
}

cJSON *vps_plesk12_data_convertToJSON(vps_plesk12_data_t *vps_plesk12_data) {
    cJSON *item = cJSON_CreateObject();

    // vps_plesk12_data->admin
    if(vps_plesk12_data->admin) {
    cJSON *admin_local_JSON = vps_plesk_license_convertToJSON(vps_plesk12_data->admin);
    if(admin_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "admin", admin_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // vps_plesk12_data->pro
    if(vps_plesk12_data->pro) {
    cJSON *pro_local_JSON = vps_plesk_license_convertToJSON(vps_plesk12_data->pro);
    if(pro_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pro", pro_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // vps_plesk12_data->host
    if(vps_plesk12_data->host) {
    cJSON *host_local_JSON = vps_plesk_license_convertToJSON(vps_plesk12_data->host);
    if(host_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "host", host_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_plesk12_data_t *vps_plesk12_data_parseFromJSON(cJSON *vps_plesk12_dataJSON){

    vps_plesk12_data_t *vps_plesk12_data_local_var = NULL;

    // define the local variable for vps_plesk12_data->admin
    vps_plesk_license_t *admin_local_nonprim = NULL;

    // define the local variable for vps_plesk12_data->pro
    vps_plesk_license_t *pro_local_nonprim = NULL;

    // define the local variable for vps_plesk12_data->host
    vps_plesk_license_t *host_local_nonprim = NULL;

    // vps_plesk12_data->admin
    cJSON *admin = cJSON_GetObjectItemCaseSensitive(vps_plesk12_dataJSON, "admin");
    if (cJSON_IsNull(admin)) {
        admin = NULL;
    }
    if (admin) { 
    admin_local_nonprim = vps_plesk_license_parseFromJSON(admin); //nonprimitive
    }

    // vps_plesk12_data->pro
    cJSON *pro = cJSON_GetObjectItemCaseSensitive(vps_plesk12_dataJSON, "pro");
    if (cJSON_IsNull(pro)) {
        pro = NULL;
    }
    if (pro) { 
    pro_local_nonprim = vps_plesk_license_parseFromJSON(pro); //nonprimitive
    }

    // vps_plesk12_data->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(vps_plesk12_dataJSON, "host");
    if (cJSON_IsNull(host)) {
        host = NULL;
    }
    if (host) { 
    host_local_nonprim = vps_plesk_license_parseFromJSON(host); //nonprimitive
    }



    vps_plesk12_data_local_var = vps_plesk12_data_create_internal (
        admin ? admin_local_nonprim : NULL,
        pro ? pro_local_nonprim : NULL,
        host ? host_local_nonprim : NULL
        );

    if (!vps_plesk12_data_local_var) {
        goto end;
    }

    return vps_plesk12_data_local_var;
end:
    if (admin_local_nonprim) {
        vps_plesk_license_free(admin_local_nonprim);
        admin_local_nonprim = NULL;
    }
    if (pro_local_nonprim) {
        vps_plesk_license_free(pro_local_nonprim);
        pro_local_nonprim = NULL;
    }
    if (host_local_nonprim) {
        vps_plesk_license_free(host_local_nonprim);
        host_local_nonprim = NULL;
    }
    return NULL;

}
