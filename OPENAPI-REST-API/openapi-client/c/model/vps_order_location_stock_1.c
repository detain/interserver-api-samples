#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_location_stock_1.h"



static vps_order_location_stock_1_t *vps_order_location_stock_1_create_internal(
    int kvm,
    int kvmstorage,
    int hyperv
    ) {
    vps_order_location_stock_1_t *vps_order_location_stock_1_local_var = malloc(sizeof(vps_order_location_stock_1_t));
    if (!vps_order_location_stock_1_local_var) {
        return NULL;
    }
    vps_order_location_stock_1_local_var->kvm = kvm;
    vps_order_location_stock_1_local_var->kvmstorage = kvmstorage;
    vps_order_location_stock_1_local_var->hyperv = hyperv;

    vps_order_location_stock_1_local_var->_library_owned = 1;
    return vps_order_location_stock_1_local_var;
}

__attribute__((deprecated)) vps_order_location_stock_1_t *vps_order_location_stock_1_create(
    int kvm,
    int kvmstorage,
    int hyperv
    ) {
    return vps_order_location_stock_1_create_internal (
        kvm,
        kvmstorage,
        hyperv
        );
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
    free(vps_order_location_stock_1);
}

cJSON *vps_order_location_stock_1_convertToJSON(vps_order_location_stock_1_t *vps_order_location_stock_1) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_location_stock_1->kvm
    if(vps_order_location_stock_1->kvm) {
    if(cJSON_AddBoolToObject(item, "kvm", vps_order_location_stock_1->kvm) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_order_location_stock_1->kvmstorage
    if(vps_order_location_stock_1->kvmstorage) {
    if(cJSON_AddBoolToObject(item, "kvmstorage", vps_order_location_stock_1->kvmstorage) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_order_location_stock_1->hyperv
    if(vps_order_location_stock_1->hyperv) {
    if(cJSON_AddBoolToObject(item, "hyperv", vps_order_location_stock_1->hyperv) == NULL) {
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
    }


    vps_order_location_stock_1_local_var = vps_order_location_stock_1_create_internal (
        kvm ? kvm->valueint : 0,
        kvmstorage ? kvmstorage->valueint : 0,
        hyperv ? hyperv->valueint : 0
        );

    return vps_order_location_stock_1_local_var;
end:
    return NULL;

}
