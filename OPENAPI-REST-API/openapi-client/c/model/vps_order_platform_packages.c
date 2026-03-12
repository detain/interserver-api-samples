#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_platform_packages.h"



static vps_order_platform_packages_t *vps_order_platform_packages_create_internal(
    double kvm,
    double kvmstorage,
    double hyperv
    ) {
    vps_order_platform_packages_t *vps_order_platform_packages_local_var = malloc(sizeof(vps_order_platform_packages_t));
    if (!vps_order_platform_packages_local_var) {
        return NULL;
    }
    vps_order_platform_packages_local_var->kvm = kvm;
    vps_order_platform_packages_local_var->kvmstorage = kvmstorage;
    vps_order_platform_packages_local_var->hyperv = hyperv;

    vps_order_platform_packages_local_var->_library_owned = 1;
    return vps_order_platform_packages_local_var;
}

__attribute__((deprecated)) vps_order_platform_packages_t *vps_order_platform_packages_create(
    double kvm,
    double kvmstorage,
    double hyperv
    ) {
    return vps_order_platform_packages_create_internal (
        kvm,
        kvmstorage,
        hyperv
        );
}

void vps_order_platform_packages_free(vps_order_platform_packages_t *vps_order_platform_packages) {
    if(NULL == vps_order_platform_packages){
        return ;
    }
    if(vps_order_platform_packages->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_platform_packages_free");
        return ;
    }
    listEntry_t *listEntry;
    free(vps_order_platform_packages);
}

cJSON *vps_order_platform_packages_convertToJSON(vps_order_platform_packages_t *vps_order_platform_packages) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_platform_packages->kvm
    if(vps_order_platform_packages->kvm) {
    if(cJSON_AddNumberToObject(item, "kvm", vps_order_platform_packages->kvm) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_platform_packages->kvmstorage
    if(vps_order_platform_packages->kvmstorage) {
    if(cJSON_AddNumberToObject(item, "kvmstorage", vps_order_platform_packages->kvmstorage) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_platform_packages->hyperv
    if(vps_order_platform_packages->hyperv) {
    if(cJSON_AddNumberToObject(item, "hyperv", vps_order_platform_packages->hyperv) == NULL) {
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

vps_order_platform_packages_t *vps_order_platform_packages_parseFromJSON(cJSON *vps_order_platform_packagesJSON){

    vps_order_platform_packages_t *vps_order_platform_packages_local_var = NULL;

    // vps_order_platform_packages->kvm
    cJSON *kvm = cJSON_GetObjectItemCaseSensitive(vps_order_platform_packagesJSON, "kvm");
    if (cJSON_IsNull(kvm)) {
        kvm = NULL;
    }
    if (kvm) { 
    if(!cJSON_IsNumber(kvm))
    {
    goto end; //Numeric
    }
    }

    // vps_order_platform_packages->kvmstorage
    cJSON *kvmstorage = cJSON_GetObjectItemCaseSensitive(vps_order_platform_packagesJSON, "kvmstorage");
    if (cJSON_IsNull(kvmstorage)) {
        kvmstorage = NULL;
    }
    if (kvmstorage) { 
    if(!cJSON_IsNumber(kvmstorage))
    {
    goto end; //Numeric
    }
    }

    // vps_order_platform_packages->hyperv
    cJSON *hyperv = cJSON_GetObjectItemCaseSensitive(vps_order_platform_packagesJSON, "hyperv");
    if (cJSON_IsNull(hyperv)) {
        hyperv = NULL;
    }
    if (hyperv) { 
    if(!cJSON_IsNumber(hyperv))
    {
    goto end; //Numeric
    }
    }


    vps_order_platform_packages_local_var = vps_order_platform_packages_create_internal (
        kvm ? kvm->valuedouble : 0,
        kvmstorage ? kvmstorage->valuedouble : 0,
        hyperv ? hyperv->valuedouble : 0
        );

    return vps_order_platform_packages_local_var;
end:
    return NULL;

}
