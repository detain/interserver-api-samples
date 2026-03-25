#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_location_stock_1.h"



static vps_order_location_stock_1_t *vps_order_location_stock_1_create_internal(
    int *kvm,
    int *kvmstorage,
    int *hyperv
    ) {
    vps_order_location_stock_1_t *vps_order_location_stock_1_local_var = malloc(sizeof(vps_order_location_stock_1_t));
    if (!vps_order_location_stock_1_local_var) {
        return NULL;
    }
    memset(vps_order_location_stock_1_local_var, 0, sizeof(vps_order_location_stock_1_t));
    vps_order_location_stock_1_local_var->_library_owned = 1;
    vps_order_location_stock_1_local_var->kvm = kvm;
    vps_order_location_stock_1_local_var->kvmstorage = kvmstorage;
    vps_order_location_stock_1_local_var->hyperv = hyperv;
    return vps_order_location_stock_1_local_var;
}

__attribute__((deprecated)) vps_order_location_stock_1_t *vps_order_location_stock_1_create(
    int *kvm,
    int *kvmstorage,
    int *hyperv
    ) {
    int *kvm_copy = NULL;
    if (kvm) {
        kvm_copy = malloc(sizeof(int));
        if (kvm_copy) *kvm_copy = *kvm;
    }
    int *kvmstorage_copy = NULL;
    if (kvmstorage) {
        kvmstorage_copy = malloc(sizeof(int));
        if (kvmstorage_copy) *kvmstorage_copy = *kvmstorage;
    }
    int *hyperv_copy = NULL;
    if (hyperv) {
        hyperv_copy = malloc(sizeof(int));
        if (hyperv_copy) *hyperv_copy = *hyperv;
    }
    vps_order_location_stock_1_t *result = vps_order_location_stock_1_create_internal (
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

void vps_order_location_stock_1_free(vps_order_location_stock_1_t *vps_order_location_stock_1) {
    if(NULL == vps_order_location_stock_1){
        return ;
    }
    if(vps_order_location_stock_1->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_location_stock_1_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_location_stock_1->kvm) {
        free(vps_order_location_stock_1->kvm);
        vps_order_location_stock_1->kvm = NULL;
    }
    if (vps_order_location_stock_1->kvmstorage) {
        free(vps_order_location_stock_1->kvmstorage);
        vps_order_location_stock_1->kvmstorage = NULL;
    }
    if (vps_order_location_stock_1->hyperv) {
        free(vps_order_location_stock_1->hyperv);
        vps_order_location_stock_1->hyperv = NULL;
    }
    free(vps_order_location_stock_1);
}

cJSON *vps_order_location_stock_1_convertToJSON(vps_order_location_stock_1_t *vps_order_location_stock_1) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_location_stock_1->kvm
    if(vps_order_location_stock_1->kvm) {
    if(cJSON_AddBoolToObject(item, "kvm", *vps_order_location_stock_1->kvm) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_order_location_stock_1->kvmstorage
    if(vps_order_location_stock_1->kvmstorage) {
    if(cJSON_AddBoolToObject(item, "kvmstorage", *vps_order_location_stock_1->kvmstorage) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_order_location_stock_1->hyperv
    if(vps_order_location_stock_1->hyperv) {
    if(cJSON_AddBoolToObject(item, "hyperv", *vps_order_location_stock_1->hyperv) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_order_location_stock_1_t *vps_order_location_stock_1_parseFromJSON(cJSON *vps_order_location_stock_1JSON){

    vps_order_location_stock_1_t *vps_order_location_stock_1_local_var = NULL;

    // define the local variable for vps_order_location_stock_1->kvm
    int *kvm_local_var = NULL;

    // define the local variable for vps_order_location_stock_1->kvmstorage
    int *kvmstorage_local_var = NULL;

    // define the local variable for vps_order_location_stock_1->hyperv
    int *hyperv_local_var = NULL;

    // vps_order_location_stock_1->kvm
    cJSON *kvm = cJSON_GetObjectItemCaseSensitive(vps_order_location_stock_1JSON, "kvm");
    if (cJSON_IsNull(kvm)) {
        kvm = NULL;
    }
    if (kvm) { 
    if(!cJSON_IsBool(kvm))
    {
    goto end; //Bool
    }
    kvm_local_var = malloc(sizeof(int));
    if(!kvm_local_var)
    {
        goto end;
    }
    *kvm_local_var = kvm->valueint;
    }

    // vps_order_location_stock_1->kvmstorage
    cJSON *kvmstorage = cJSON_GetObjectItemCaseSensitive(vps_order_location_stock_1JSON, "kvmstorage");
    if (cJSON_IsNull(kvmstorage)) {
        kvmstorage = NULL;
    }
    if (kvmstorage) { 
    if(!cJSON_IsBool(kvmstorage))
    {
    goto end; //Bool
    }
    kvmstorage_local_var = malloc(sizeof(int));
    if(!kvmstorage_local_var)
    {
        goto end;
    }
    *kvmstorage_local_var = kvmstorage->valueint;
    }

    // vps_order_location_stock_1->hyperv
    cJSON *hyperv = cJSON_GetObjectItemCaseSensitive(vps_order_location_stock_1JSON, "hyperv");
    if (cJSON_IsNull(hyperv)) {
        hyperv = NULL;
    }
    if (hyperv) { 
    if(!cJSON_IsBool(hyperv))
    {
    goto end; //Bool
    }
    hyperv_local_var = malloc(sizeof(int));
    if(!hyperv_local_var)
    {
        goto end;
    }
    *hyperv_local_var = hyperv->valueint;
    }



    vps_order_location_stock_1_local_var = vps_order_location_stock_1_create_internal (
        kvm_local_var,
        kvmstorage_local_var,
        hyperv_local_var
        );

    if (!vps_order_location_stock_1_local_var) {
        goto end;
    }

    return vps_order_location_stock_1_local_var;
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
