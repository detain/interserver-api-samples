#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_platform_names.h"



static vps_order_platform_names_t *vps_order_platform_names_create_internal(
    char *kvm,
    char *kvmstorage,
    char *hyperv
    ) {
    vps_order_platform_names_t *vps_order_platform_names_local_var = malloc(sizeof(vps_order_platform_names_t));
    if (!vps_order_platform_names_local_var) {
        return NULL;
    }
    vps_order_platform_names_local_var->kvm = kvm;
    vps_order_platform_names_local_var->kvmstorage = kvmstorage;
    vps_order_platform_names_local_var->hyperv = hyperv;

    vps_order_platform_names_local_var->_library_owned = 1;
    return vps_order_platform_names_local_var;
}

__attribute__((deprecated)) vps_order_platform_names_t *vps_order_platform_names_create(
    char *kvm,
    char *kvmstorage,
    char *hyperv
    ) {
    return vps_order_platform_names_create_internal (
        kvm,
        kvmstorage,
        hyperv
        );
}

void vps_order_platform_names_free(vps_order_platform_names_t *vps_order_platform_names) {
    if(NULL == vps_order_platform_names){
        return ;
    }
    if(vps_order_platform_names->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_platform_names_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_platform_names->kvm) {
        free(vps_order_platform_names->kvm);
        vps_order_platform_names->kvm = NULL;
    }
    if (vps_order_platform_names->kvmstorage) {
        free(vps_order_platform_names->kvmstorage);
        vps_order_platform_names->kvmstorage = NULL;
    }
    if (vps_order_platform_names->hyperv) {
        free(vps_order_platform_names->hyperv);
        vps_order_platform_names->hyperv = NULL;
    }
    free(vps_order_platform_names);
}

cJSON *vps_order_platform_names_convertToJSON(vps_order_platform_names_t *vps_order_platform_names) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_platform_names->kvm
    if(vps_order_platform_names->kvm) {
    if(cJSON_AddStringToObject(item, "kvm", vps_order_platform_names->kvm) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_platform_names->kvmstorage
    if(vps_order_platform_names->kvmstorage) {
    if(cJSON_AddStringToObject(item, "kvmstorage", vps_order_platform_names->kvmstorage) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_platform_names->hyperv
    if(vps_order_platform_names->hyperv) {
    if(cJSON_AddStringToObject(item, "hyperv", vps_order_platform_names->hyperv) == NULL) {
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

vps_order_platform_names_t *vps_order_platform_names_parseFromJSON(cJSON *vps_order_platform_namesJSON){

    vps_order_platform_names_t *vps_order_platform_names_local_var = NULL;

    // vps_order_platform_names->kvm
    cJSON *kvm = cJSON_GetObjectItemCaseSensitive(vps_order_platform_namesJSON, "kvm");
    if (cJSON_IsNull(kvm)) {
        kvm = NULL;
    }
    if (kvm) { 
    if(!cJSON_IsString(kvm) && !cJSON_IsNull(kvm))
    {
    goto end; //String
    }
    }

    // vps_order_platform_names->kvmstorage
    cJSON *kvmstorage = cJSON_GetObjectItemCaseSensitive(vps_order_platform_namesJSON, "kvmstorage");
    if (cJSON_IsNull(kvmstorage)) {
        kvmstorage = NULL;
    }
    if (kvmstorage) { 
    if(!cJSON_IsString(kvmstorage) && !cJSON_IsNull(kvmstorage))
    {
    goto end; //String
    }
    }

    // vps_order_platform_names->hyperv
    cJSON *hyperv = cJSON_GetObjectItemCaseSensitive(vps_order_platform_namesJSON, "hyperv");
    if (cJSON_IsNull(hyperv)) {
        hyperv = NULL;
    }
    if (hyperv) { 
    if(!cJSON_IsString(hyperv) && !cJSON_IsNull(hyperv))
    {
    goto end; //String
    }
    }


    vps_order_platform_names_local_var = vps_order_platform_names_create_internal (
        kvm && !cJSON_IsNull(kvm) ? strdup(kvm->valuestring) : NULL,
        kvmstorage && !cJSON_IsNull(kvmstorage) ? strdup(kvmstorage->valuestring) : NULL,
        hyperv && !cJSON_IsNull(hyperv) ? strdup(hyperv->valuestring) : NULL
        );

    return vps_order_platform_names_local_var;
end:
    return NULL;

}
