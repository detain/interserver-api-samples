#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_platform_packages.h"



static vps_order_platform_packages_t *vps_order_platform_packages_create_internal(
    double *kvm,
    double *kvmstorage,
    double *hyperv
    ) {
    vps_order_platform_packages_t *vps_order_platform_packages_local_var = malloc(sizeof(vps_order_platform_packages_t));
    if (!vps_order_platform_packages_local_var) {
        return NULL;
    }
    memset(vps_order_platform_packages_local_var, 0, sizeof(vps_order_platform_packages_t));
    vps_order_platform_packages_local_var->_library_owned = 1;
    vps_order_platform_packages_local_var->kvm = kvm;
    vps_order_platform_packages_local_var->kvmstorage = kvmstorage;
    vps_order_platform_packages_local_var->hyperv = hyperv;
    return vps_order_platform_packages_local_var;
}

__attribute__((deprecated)) vps_order_platform_packages_t *vps_order_platform_packages_create(
    double *kvm,
    double *kvmstorage,
    double *hyperv
    ) {
    double *kvm_copy = NULL;
    if (kvm) {
        kvm_copy = malloc(sizeof(double));
        if (kvm_copy) *kvm_copy = *kvm;
    }
    double *kvmstorage_copy = NULL;
    if (kvmstorage) {
        kvmstorage_copy = malloc(sizeof(double));
        if (kvmstorage_copy) *kvmstorage_copy = *kvmstorage;
    }
    double *hyperv_copy = NULL;
    if (hyperv) {
        hyperv_copy = malloc(sizeof(double));
        if (hyperv_copy) *hyperv_copy = *hyperv;
    }
    vps_order_platform_packages_t *result = vps_order_platform_packages_create_internal (
        kvm_copy,
        kvmstorage_copy,
        hyperv_copy
        );
    if (!result) {
        free(kvm_copy);
        free(kvmstorage_copy);
        free(hyperv_copy);
    }
    return result;
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
    if (vps_order_platform_packages->kvm) {
        free(vps_order_platform_packages->kvm);
        vps_order_platform_packages->kvm = NULL;
    }
    if (vps_order_platform_packages->kvmstorage) {
        free(vps_order_platform_packages->kvmstorage);
        vps_order_platform_packages->kvmstorage = NULL;
    }
    if (vps_order_platform_packages->hyperv) {
        free(vps_order_platform_packages->hyperv);
        vps_order_platform_packages->hyperv = NULL;
    }
    free(vps_order_platform_packages);
}

cJSON *vps_order_platform_packages_convertToJSON(vps_order_platform_packages_t *vps_order_platform_packages) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_platform_packages->kvm
    if(vps_order_platform_packages->kvm) {
    if(cJSON_AddNumberToObject(item, "kvm", *vps_order_platform_packages->kvm) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_platform_packages->kvmstorage
    if(vps_order_platform_packages->kvmstorage) {
    if(cJSON_AddNumberToObject(item, "kvmstorage", *vps_order_platform_packages->kvmstorage) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_platform_packages->hyperv
    if(vps_order_platform_packages->hyperv) {
    if(cJSON_AddNumberToObject(item, "hyperv", *vps_order_platform_packages->hyperv) == NULL) {
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

    // define the local variable for vps_order_platform_packages->kvm
    double *kvm_local_var = NULL;

    // define the local variable for vps_order_platform_packages->kvmstorage
    double *kvmstorage_local_var = NULL;

    // define the local variable for vps_order_platform_packages->hyperv
    double *hyperv_local_var = NULL;

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
    kvm_local_var = malloc(sizeof(double));
    if(!kvm_local_var)
    {
        goto end;
    }
    *kvm_local_var = kvm->valuedouble;
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
    kvmstorage_local_var = malloc(sizeof(double));
    if(!kvmstorage_local_var)
    {
        goto end;
    }
    *kvmstorage_local_var = kvmstorage->valuedouble;
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
    hyperv_local_var = malloc(sizeof(double));
    if(!hyperv_local_var)
    {
        goto end;
    }
    *hyperv_local_var = hyperv->valuedouble;
    }



    vps_order_platform_packages_local_var = vps_order_platform_packages_create_internal (
        kvm_local_var,
        kvmstorage_local_var,
        hyperv_local_var
        );

    if (!vps_order_platform_packages_local_var) {
        goto end;
    }

    return vps_order_platform_packages_local_var;
end:
    if (kvm_local_var) {
        free(kvm_local_var);
        kvm_local_var = NULL;
    }
    if (kvmstorage_local_var) {
        free(kvmstorage_local_var);
        kvmstorage_local_var = NULL;
    }
    if (hyperv_local_var) {
        free(hyperv_local_var);
        hyperv_local_var = NULL;
    }
    return NULL;

}
