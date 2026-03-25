#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order.h"



static vps_order_t *vps_order_create_internal(
    double *vps_slice_ssd_ovz_cost,
    double *vps_slice_ovz_cost,
    double *vps_slice_ssd_virtuozzo_cost,
    double *vps_slice_virtuozzo_cost,
    double *vps_slice_hyperv_cost,
    double *vps_slice_vmware_cost,
    double *vps_slice_lxc_cost,
    double *vps_slice_xen_cost,
    double *vps_slice_kvm_l_cost,
    double *vps_slice_kvm_storage_cost,
    double *vps_ny_cost,
    double *vps_slice_kvm_w_cost,
    double *cpanel_cost,
    double *da_cost,
    char *ram_slice,
    char *hd_slice,
    char *hd_storage_slice,
    char *bw_slice,
    char *bw_type,
    double *bw_total,
    char *max_slices,
    vps_order_platform_packages_t *platform_packages,
    vps_order_platform_names_t *platform_names,
    vps_order_package_costs_t *package_costs,
    vps_order_location_stock_t *location_stock,
    vps_order_location_names_t *location_names,
    vps_order_os_names_t *os_names,
    vps_order_templates_t *templates,
    vps_order_service_types_t *service_types,
    char *currency,
    char *currency_symbol
    ) {
    vps_order_t *vps_order_local_var = malloc(sizeof(vps_order_t));
    if (!vps_order_local_var) {
        return NULL;
    }
    memset(vps_order_local_var, 0, sizeof(vps_order_t));
    vps_order_local_var->_library_owned = 1;
    vps_order_local_var->vps_slice_ssd_ovz_cost = vps_slice_ssd_ovz_cost;
    vps_order_local_var->vps_slice_ovz_cost = vps_slice_ovz_cost;
    vps_order_local_var->vps_slice_ssd_virtuozzo_cost = vps_slice_ssd_virtuozzo_cost;
    vps_order_local_var->vps_slice_virtuozzo_cost = vps_slice_virtuozzo_cost;
    vps_order_local_var->vps_slice_hyperv_cost = vps_slice_hyperv_cost;
    vps_order_local_var->vps_slice_vmware_cost = vps_slice_vmware_cost;
    vps_order_local_var->vps_slice_lxc_cost = vps_slice_lxc_cost;
    vps_order_local_var->vps_slice_xen_cost = vps_slice_xen_cost;
    vps_order_local_var->vps_slice_kvm_l_cost = vps_slice_kvm_l_cost;
    vps_order_local_var->vps_slice_kvm_storage_cost = vps_slice_kvm_storage_cost;
    vps_order_local_var->vps_ny_cost = vps_ny_cost;
    vps_order_local_var->vps_slice_kvm_w_cost = vps_slice_kvm_w_cost;
    vps_order_local_var->cpanel_cost = cpanel_cost;
    vps_order_local_var->da_cost = da_cost;
    vps_order_local_var->ram_slice = ram_slice;
    vps_order_local_var->hd_slice = hd_slice;
    vps_order_local_var->hd_storage_slice = hd_storage_slice;
    vps_order_local_var->bw_slice = bw_slice;
    vps_order_local_var->bw_type = bw_type;
    vps_order_local_var->bw_total = bw_total;
    vps_order_local_var->max_slices = max_slices;
    vps_order_local_var->platform_packages = platform_packages;
    vps_order_local_var->platform_names = platform_names;
    vps_order_local_var->package_costs = package_costs;
    vps_order_local_var->location_stock = location_stock;
    vps_order_local_var->location_names = location_names;
    vps_order_local_var->os_names = os_names;
    vps_order_local_var->templates = templates;
    vps_order_local_var->service_types = service_types;
    vps_order_local_var->currency = currency;
    vps_order_local_var->currency_symbol = currency_symbol;
    return vps_order_local_var;
}

__attribute__((deprecated)) vps_order_t *vps_order_create(
    double *vps_slice_ssd_ovz_cost,
    double *vps_slice_ovz_cost,
    double *vps_slice_ssd_virtuozzo_cost,
    double *vps_slice_virtuozzo_cost,
    double *vps_slice_hyperv_cost,
    double *vps_slice_vmware_cost,
    double *vps_slice_lxc_cost,
    double *vps_slice_xen_cost,
    double *vps_slice_kvm_l_cost,
    double *vps_slice_kvm_storage_cost,
    double *vps_ny_cost,
    double *vps_slice_kvm_w_cost,
    double *cpanel_cost,
    double *da_cost,
    char *ram_slice,
    char *hd_slice,
    char *hd_storage_slice,
    char *bw_slice,
    char *bw_type,
    double *bw_total,
    char *max_slices,
    vps_order_platform_packages_t *platform_packages,
    vps_order_platform_names_t *platform_names,
    vps_order_package_costs_t *package_costs,
    vps_order_location_stock_t *location_stock,
    vps_order_location_names_t *location_names,
    vps_order_os_names_t *os_names,
    vps_order_templates_t *templates,
    vps_order_service_types_t *service_types,
    char *currency,
    char *currency_symbol
    ) {
    double *vps_slice_ssd_ovz_cost_copy = NULL;
    if (vps_slice_ssd_ovz_cost) {
        vps_slice_ssd_ovz_cost_copy = malloc(sizeof(double));
        if (vps_slice_ssd_ovz_cost_copy) *vps_slice_ssd_ovz_cost_copy = *vps_slice_ssd_ovz_cost;
    }
    double *vps_slice_ovz_cost_copy = NULL;
    if (vps_slice_ovz_cost) {
        vps_slice_ovz_cost_copy = malloc(sizeof(double));
        if (vps_slice_ovz_cost_copy) *vps_slice_ovz_cost_copy = *vps_slice_ovz_cost;
    }
    double *vps_slice_ssd_virtuozzo_cost_copy = NULL;
    if (vps_slice_ssd_virtuozzo_cost) {
        vps_slice_ssd_virtuozzo_cost_copy = malloc(sizeof(double));
        if (vps_slice_ssd_virtuozzo_cost_copy) *vps_slice_ssd_virtuozzo_cost_copy = *vps_slice_ssd_virtuozzo_cost;
    }
    double *vps_slice_virtuozzo_cost_copy = NULL;
    if (vps_slice_virtuozzo_cost) {
        vps_slice_virtuozzo_cost_copy = malloc(sizeof(double));
        if (vps_slice_virtuozzo_cost_copy) *vps_slice_virtuozzo_cost_copy = *vps_slice_virtuozzo_cost;
    }
    double *vps_slice_hyperv_cost_copy = NULL;
    if (vps_slice_hyperv_cost) {
        vps_slice_hyperv_cost_copy = malloc(sizeof(double));
        if (vps_slice_hyperv_cost_copy) *vps_slice_hyperv_cost_copy = *vps_slice_hyperv_cost;
    }
    double *vps_slice_vmware_cost_copy = NULL;
    if (vps_slice_vmware_cost) {
        vps_slice_vmware_cost_copy = malloc(sizeof(double));
        if (vps_slice_vmware_cost_copy) *vps_slice_vmware_cost_copy = *vps_slice_vmware_cost;
    }
    double *vps_slice_lxc_cost_copy = NULL;
    if (vps_slice_lxc_cost) {
        vps_slice_lxc_cost_copy = malloc(sizeof(double));
        if (vps_slice_lxc_cost_copy) *vps_slice_lxc_cost_copy = *vps_slice_lxc_cost;
    }
    double *vps_slice_xen_cost_copy = NULL;
    if (vps_slice_xen_cost) {
        vps_slice_xen_cost_copy = malloc(sizeof(double));
        if (vps_slice_xen_cost_copy) *vps_slice_xen_cost_copy = *vps_slice_xen_cost;
    }
    double *vps_slice_kvm_l_cost_copy = NULL;
    if (vps_slice_kvm_l_cost) {
        vps_slice_kvm_l_cost_copy = malloc(sizeof(double));
        if (vps_slice_kvm_l_cost_copy) *vps_slice_kvm_l_cost_copy = *vps_slice_kvm_l_cost;
    }
    double *vps_slice_kvm_storage_cost_copy = NULL;
    if (vps_slice_kvm_storage_cost) {
        vps_slice_kvm_storage_cost_copy = malloc(sizeof(double));
        if (vps_slice_kvm_storage_cost_copy) *vps_slice_kvm_storage_cost_copy = *vps_slice_kvm_storage_cost;
    }
    double *vps_ny_cost_copy = NULL;
    if (vps_ny_cost) {
        vps_ny_cost_copy = malloc(sizeof(double));
        if (vps_ny_cost_copy) *vps_ny_cost_copy = *vps_ny_cost;
    }
    double *vps_slice_kvm_w_cost_copy = NULL;
    if (vps_slice_kvm_w_cost) {
        vps_slice_kvm_w_cost_copy = malloc(sizeof(double));
        if (vps_slice_kvm_w_cost_copy) *vps_slice_kvm_w_cost_copy = *vps_slice_kvm_w_cost;
    }
    double *cpanel_cost_copy = NULL;
    if (cpanel_cost) {
        cpanel_cost_copy = malloc(sizeof(double));
        if (cpanel_cost_copy) *cpanel_cost_copy = *cpanel_cost;
    }
    double *da_cost_copy = NULL;
    if (da_cost) {
        da_cost_copy = malloc(sizeof(double));
        if (da_cost_copy) *da_cost_copy = *da_cost;
    }
    double *bw_total_copy = NULL;
    if (bw_total) {
        bw_total_copy = malloc(sizeof(double));
        if (bw_total_copy) *bw_total_copy = *bw_total;
    }
    vps_order_t *result = vps_order_create_internal (
        vps_slice_ssd_ovz_cost_copy,
        vps_slice_ovz_cost_copy,
        vps_slice_ssd_virtuozzo_cost_copy,
        vps_slice_virtuozzo_cost_copy,
        vps_slice_hyperv_cost_copy,
        vps_slice_vmware_cost_copy,
        vps_slice_lxc_cost_copy,
        vps_slice_xen_cost_copy,
        vps_slice_kvm_l_cost_copy,
        vps_slice_kvm_storage_cost_copy,
        vps_ny_cost_copy,
        vps_slice_kvm_w_cost_copy,
        cpanel_cost_copy,
        da_cost_copy,
        ram_slice,
        hd_slice,
        hd_storage_slice,
        bw_slice,
        bw_type,
        bw_total_copy,
        max_slices,
        platform_packages,
        platform_names,
        package_costs,
        location_stock,
        location_names,
        os_names,
        templates,
        service_types,
        currency,
        currency_symbol
        );
    if (!result) {
        free(vps_slice_ssd_ovz_cost_copy);
        free(vps_slice_ovz_cost_copy);
        free(vps_slice_ssd_virtuozzo_cost_copy);
        free(vps_slice_virtuozzo_cost_copy);
        free(vps_slice_hyperv_cost_copy);
        free(vps_slice_vmware_cost_copy);
        free(vps_slice_lxc_cost_copy);
        free(vps_slice_xen_cost_copy);
        free(vps_slice_kvm_l_cost_copy);
        free(vps_slice_kvm_storage_cost_copy);
        free(vps_ny_cost_copy);
        free(vps_slice_kvm_w_cost_copy);
        free(cpanel_cost_copy);
        free(da_cost_copy);
        free(bw_total_copy);
    }
    return result;
}

void vps_order_free(vps_order_t *vps_order) {
    if(NULL == vps_order){
        return ;
    }
    if(vps_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order->vps_slice_ssd_ovz_cost) {
        free(vps_order->vps_slice_ssd_ovz_cost);
        vps_order->vps_slice_ssd_ovz_cost = NULL;
    }
    if (vps_order->vps_slice_ovz_cost) {
        free(vps_order->vps_slice_ovz_cost);
        vps_order->vps_slice_ovz_cost = NULL;
    }
    if (vps_order->vps_slice_ssd_virtuozzo_cost) {
        free(vps_order->vps_slice_ssd_virtuozzo_cost);
        vps_order->vps_slice_ssd_virtuozzo_cost = NULL;
    }
    if (vps_order->vps_slice_virtuozzo_cost) {
        free(vps_order->vps_slice_virtuozzo_cost);
        vps_order->vps_slice_virtuozzo_cost = NULL;
    }
    if (vps_order->vps_slice_hyperv_cost) {
        free(vps_order->vps_slice_hyperv_cost);
        vps_order->vps_slice_hyperv_cost = NULL;
    }
    if (vps_order->vps_slice_vmware_cost) {
        free(vps_order->vps_slice_vmware_cost);
        vps_order->vps_slice_vmware_cost = NULL;
    }
    if (vps_order->vps_slice_lxc_cost) {
        free(vps_order->vps_slice_lxc_cost);
        vps_order->vps_slice_lxc_cost = NULL;
    }
    if (vps_order->vps_slice_xen_cost) {
        free(vps_order->vps_slice_xen_cost);
        vps_order->vps_slice_xen_cost = NULL;
    }
    if (vps_order->vps_slice_kvm_l_cost) {
        free(vps_order->vps_slice_kvm_l_cost);
        vps_order->vps_slice_kvm_l_cost = NULL;
    }
    if (vps_order->vps_slice_kvm_storage_cost) {
        free(vps_order->vps_slice_kvm_storage_cost);
        vps_order->vps_slice_kvm_storage_cost = NULL;
    }
    if (vps_order->vps_ny_cost) {
        free(vps_order->vps_ny_cost);
        vps_order->vps_ny_cost = NULL;
    }
    if (vps_order->vps_slice_kvm_w_cost) {
        free(vps_order->vps_slice_kvm_w_cost);
        vps_order->vps_slice_kvm_w_cost = NULL;
    }
    if (vps_order->cpanel_cost) {
        free(vps_order->cpanel_cost);
        vps_order->cpanel_cost = NULL;
    }
    if (vps_order->da_cost) {
        free(vps_order->da_cost);
        vps_order->da_cost = NULL;
    }
    if (vps_order->ram_slice) {
        free(vps_order->ram_slice);
        vps_order->ram_slice = NULL;
    }
    if (vps_order->hd_slice) {
        free(vps_order->hd_slice);
        vps_order->hd_slice = NULL;
    }
    if (vps_order->hd_storage_slice) {
        free(vps_order->hd_storage_slice);
        vps_order->hd_storage_slice = NULL;
    }
    if (vps_order->bw_slice) {
        free(vps_order->bw_slice);
        vps_order->bw_slice = NULL;
    }
    if (vps_order->bw_type) {
        free(vps_order->bw_type);
        vps_order->bw_type = NULL;
    }
    if (vps_order->bw_total) {
        free(vps_order->bw_total);
        vps_order->bw_total = NULL;
    }
    if (vps_order->max_slices) {
        free(vps_order->max_slices);
        vps_order->max_slices = NULL;
    }
    if (vps_order->platform_packages) {
        vps_order_platform_packages_free(vps_order->platform_packages);
        vps_order->platform_packages = NULL;
    }
    if (vps_order->platform_names) {
        vps_order_platform_names_free(vps_order->platform_names);
        vps_order->platform_names = NULL;
    }
    if (vps_order->package_costs) {
        vps_order_package_costs_free(vps_order->package_costs);
        vps_order->package_costs = NULL;
    }
    if (vps_order->location_stock) {
        vps_order_location_stock_free(vps_order->location_stock);
        vps_order->location_stock = NULL;
    }
    if (vps_order->location_names) {
        vps_order_location_names_free(vps_order->location_names);
        vps_order->location_names = NULL;
    }
    if (vps_order->os_names) {
        vps_order_os_names_free(vps_order->os_names);
        vps_order->os_names = NULL;
    }
    if (vps_order->templates) {
        vps_order_templates_free(vps_order->templates);
        vps_order->templates = NULL;
    }
    if (vps_order->service_types) {
        vps_order_service_types_free(vps_order->service_types);
        vps_order->service_types = NULL;
    }
    if (vps_order->currency) {
        free(vps_order->currency);
        vps_order->currency = NULL;
    }
    if (vps_order->currency_symbol) {
        free(vps_order->currency_symbol);
        vps_order->currency_symbol = NULL;
    }
    free(vps_order);
}

cJSON *vps_order_convertToJSON(vps_order_t *vps_order) {
    cJSON *item = cJSON_CreateObject();

    // vps_order->vps_slice_ssd_ovz_cost
    if (!vps_order->vps_slice_ssd_ovz_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceSsdOvzCost", *vps_order->vps_slice_ssd_ovz_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_ovz_cost
    if (!vps_order->vps_slice_ovz_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceOvzCost", *vps_order->vps_slice_ovz_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_ssd_virtuozzo_cost
    if (!vps_order->vps_slice_ssd_virtuozzo_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceSsdVirtuozzoCost", *vps_order->vps_slice_ssd_virtuozzo_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_virtuozzo_cost
    if (!vps_order->vps_slice_virtuozzo_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceVirtuozzoCost", *vps_order->vps_slice_virtuozzo_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_hyperv_cost
    if (!vps_order->vps_slice_hyperv_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceHypervCost", *vps_order->vps_slice_hyperv_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_vmware_cost
    if (!vps_order->vps_slice_vmware_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceVmwareCost", *vps_order->vps_slice_vmware_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_lxc_cost
    if (!vps_order->vps_slice_lxc_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceLxcCost", *vps_order->vps_slice_lxc_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_xen_cost
    if (!vps_order->vps_slice_xen_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceXenCost", *vps_order->vps_slice_xen_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_kvm_l_cost
    if (!vps_order->vps_slice_kvm_l_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceKvmLCost", *vps_order->vps_slice_kvm_l_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_kvm_storage_cost
    if (!vps_order->vps_slice_kvm_storage_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceKvmStorageCost", *vps_order->vps_slice_kvm_storage_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_ny_cost
    if (!vps_order->vps_ny_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsNyCost", *vps_order->vps_ny_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->vps_slice_kvm_w_cost
    if (!vps_order->vps_slice_kvm_w_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vpsSliceKvmWCost", *vps_order->vps_slice_kvm_w_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->cpanel_cost
    if (!vps_order->cpanel_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "cpanelCost", *vps_order->cpanel_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->da_cost
    if (!vps_order->da_cost) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "daCost", *vps_order->da_cost) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->ram_slice
    if (!vps_order->ram_slice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ramSlice", vps_order->ram_slice) == NULL) {
    goto fail; //String
    }


    // vps_order->hd_slice
    if (!vps_order->hd_slice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hdSlice", vps_order->hd_slice) == NULL) {
    goto fail; //String
    }


    // vps_order->hd_storage_slice
    if (!vps_order->hd_storage_slice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hdStorageSlice", vps_order->hd_storage_slice) == NULL) {
    goto fail; //String
    }


    // vps_order->bw_slice
    if (!vps_order->bw_slice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bwSlice", vps_order->bw_slice) == NULL) {
    goto fail; //String
    }


    // vps_order->bw_type
    if (!vps_order->bw_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bwType", vps_order->bw_type) == NULL) {
    goto fail; //String
    }


    // vps_order->bw_total
    if (!vps_order->bw_total) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "bwTotal", *vps_order->bw_total) == NULL) {
    goto fail; //Numeric
    }


    // vps_order->max_slices
    if (!vps_order->max_slices) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "maxSlices", vps_order->max_slices) == NULL) {
    goto fail; //String
    }


    // vps_order->platform_packages
    if (!vps_order->platform_packages) {
        goto fail;
    }
    cJSON *platform_packages_local_JSON = vps_order_platform_packages_convertToJSON(vps_order->platform_packages);
    if(platform_packages_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "platformPackages", platform_packages_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->platform_names
    if (!vps_order->platform_names) {
        goto fail;
    }
    cJSON *platform_names_local_JSON = vps_order_platform_names_convertToJSON(vps_order->platform_names);
    if(platform_names_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "platformNames", platform_names_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->package_costs
    if (!vps_order->package_costs) {
        goto fail;
    }
    cJSON *package_costs_local_JSON = vps_order_package_costs_convertToJSON(vps_order->package_costs);
    if(package_costs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "packageCosts", package_costs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->location_stock
    if (!vps_order->location_stock) {
        goto fail;
    }
    cJSON *location_stock_local_JSON = vps_order_location_stock_convertToJSON(vps_order->location_stock);
    if(location_stock_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "locationStock", location_stock_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->location_names
    if (!vps_order->location_names) {
        goto fail;
    }
    cJSON *location_names_local_JSON = vps_order_location_names_convertToJSON(vps_order->location_names);
    if(location_names_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "locationNames", location_names_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->os_names
    if (!vps_order->os_names) {
        goto fail;
    }
    cJSON *os_names_local_JSON = vps_order_os_names_convertToJSON(vps_order->os_names);
    if(os_names_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "osNames", os_names_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->templates
    if (!vps_order->templates) {
        goto fail;
    }
    cJSON *templates_local_JSON = vps_order_templates_convertToJSON(vps_order->templates);
    if(templates_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "templates", templates_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->service_types
    if (!vps_order->service_types) {
        goto fail;
    }
    cJSON *service_types_local_JSON = vps_order_service_types_convertToJSON(vps_order->service_types);
    if(service_types_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceTypes", service_types_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_order->currency
    if (!vps_order->currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currency", vps_order->currency) == NULL) {
    goto fail; //String
    }


    // vps_order->currency_symbol
    if (!vps_order->currency_symbol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencySymbol", vps_order->currency_symbol) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_order_t *vps_order_parseFromJSON(cJSON *vps_orderJSON){

    vps_order_t *vps_order_local_var = NULL;

    // define the local variable for vps_order->vps_slice_ssd_ovz_cost
    double *vps_slice_ssd_ovz_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_ovz_cost
    double *vps_slice_ovz_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_ssd_virtuozzo_cost
    double *vps_slice_ssd_virtuozzo_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_virtuozzo_cost
    double *vps_slice_virtuozzo_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_hyperv_cost
    double *vps_slice_hyperv_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_vmware_cost
    double *vps_slice_vmware_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_lxc_cost
    double *vps_slice_lxc_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_xen_cost
    double *vps_slice_xen_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_kvm_l_cost
    double *vps_slice_kvm_l_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_kvm_storage_cost
    double *vps_slice_kvm_storage_cost_local_var = NULL;

    // define the local variable for vps_order->vps_ny_cost
    double *vps_ny_cost_local_var = NULL;

    // define the local variable for vps_order->vps_slice_kvm_w_cost
    double *vps_slice_kvm_w_cost_local_var = NULL;

    // define the local variable for vps_order->cpanel_cost
    double *cpanel_cost_local_var = NULL;

    // define the local variable for vps_order->da_cost
    double *da_cost_local_var = NULL;

    char *ram_slice_local_str = NULL;

    char *hd_slice_local_str = NULL;

    char *hd_storage_slice_local_str = NULL;

    char *bw_slice_local_str = NULL;

    char *bw_type_local_str = NULL;

    // define the local variable for vps_order->bw_total
    double *bw_total_local_var = NULL;

    char *max_slices_local_str = NULL;

    // define the local variable for vps_order->platform_packages
    vps_order_platform_packages_t *platform_packages_local_nonprim = NULL;

    // define the local variable for vps_order->platform_names
    vps_order_platform_names_t *platform_names_local_nonprim = NULL;

    // define the local variable for vps_order->package_costs
    vps_order_package_costs_t *package_costs_local_nonprim = NULL;

    // define the local variable for vps_order->location_stock
    vps_order_location_stock_t *location_stock_local_nonprim = NULL;

    // define the local variable for vps_order->location_names
    vps_order_location_names_t *location_names_local_nonprim = NULL;

    // define the local variable for vps_order->os_names
    vps_order_os_names_t *os_names_local_nonprim = NULL;

    // define the local variable for vps_order->templates
    vps_order_templates_t *templates_local_nonprim = NULL;

    // define the local variable for vps_order->service_types
    vps_order_service_types_t *service_types_local_nonprim = NULL;

    char *currency_local_str = NULL;

    char *currency_symbol_local_str = NULL;

    // vps_order->vps_slice_ssd_ovz_cost
    cJSON *vps_slice_ssd_ovz_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceSsdOvzCost");
    if (cJSON_IsNull(vps_slice_ssd_ovz_cost)) {
        vps_slice_ssd_ovz_cost = NULL;
    }
    if (!vps_slice_ssd_ovz_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_ssd_ovz_cost))
    {
    goto end; //Numeric
    }
    vps_slice_ssd_ovz_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_ssd_ovz_cost_local_var)
    {
        goto end;
    }
    *vps_slice_ssd_ovz_cost_local_var = vps_slice_ssd_ovz_cost->valuedouble;

    // vps_order->vps_slice_ovz_cost
    cJSON *vps_slice_ovz_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceOvzCost");
    if (cJSON_IsNull(vps_slice_ovz_cost)) {
        vps_slice_ovz_cost = NULL;
    }
    if (!vps_slice_ovz_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_ovz_cost))
    {
    goto end; //Numeric
    }
    vps_slice_ovz_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_ovz_cost_local_var)
    {
        goto end;
    }
    *vps_slice_ovz_cost_local_var = vps_slice_ovz_cost->valuedouble;

    // vps_order->vps_slice_ssd_virtuozzo_cost
    cJSON *vps_slice_ssd_virtuozzo_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceSsdVirtuozzoCost");
    if (cJSON_IsNull(vps_slice_ssd_virtuozzo_cost)) {
        vps_slice_ssd_virtuozzo_cost = NULL;
    }
    if (!vps_slice_ssd_virtuozzo_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_ssd_virtuozzo_cost))
    {
    goto end; //Numeric
    }
    vps_slice_ssd_virtuozzo_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_ssd_virtuozzo_cost_local_var)
    {
        goto end;
    }
    *vps_slice_ssd_virtuozzo_cost_local_var = vps_slice_ssd_virtuozzo_cost->valuedouble;

    // vps_order->vps_slice_virtuozzo_cost
    cJSON *vps_slice_virtuozzo_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceVirtuozzoCost");
    if (cJSON_IsNull(vps_slice_virtuozzo_cost)) {
        vps_slice_virtuozzo_cost = NULL;
    }
    if (!vps_slice_virtuozzo_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_virtuozzo_cost))
    {
    goto end; //Numeric
    }
    vps_slice_virtuozzo_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_virtuozzo_cost_local_var)
    {
        goto end;
    }
    *vps_slice_virtuozzo_cost_local_var = vps_slice_virtuozzo_cost->valuedouble;

    // vps_order->vps_slice_hyperv_cost
    cJSON *vps_slice_hyperv_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceHypervCost");
    if (cJSON_IsNull(vps_slice_hyperv_cost)) {
        vps_slice_hyperv_cost = NULL;
    }
    if (!vps_slice_hyperv_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_hyperv_cost))
    {
    goto end; //Numeric
    }
    vps_slice_hyperv_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_hyperv_cost_local_var)
    {
        goto end;
    }
    *vps_slice_hyperv_cost_local_var = vps_slice_hyperv_cost->valuedouble;

    // vps_order->vps_slice_vmware_cost
    cJSON *vps_slice_vmware_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceVmwareCost");
    if (cJSON_IsNull(vps_slice_vmware_cost)) {
        vps_slice_vmware_cost = NULL;
    }
    if (!vps_slice_vmware_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_vmware_cost))
    {
    goto end; //Numeric
    }
    vps_slice_vmware_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_vmware_cost_local_var)
    {
        goto end;
    }
    *vps_slice_vmware_cost_local_var = vps_slice_vmware_cost->valuedouble;

    // vps_order->vps_slice_lxc_cost
    cJSON *vps_slice_lxc_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceLxcCost");
    if (cJSON_IsNull(vps_slice_lxc_cost)) {
        vps_slice_lxc_cost = NULL;
    }
    if (!vps_slice_lxc_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_lxc_cost))
    {
    goto end; //Numeric
    }
    vps_slice_lxc_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_lxc_cost_local_var)
    {
        goto end;
    }
    *vps_slice_lxc_cost_local_var = vps_slice_lxc_cost->valuedouble;

    // vps_order->vps_slice_xen_cost
    cJSON *vps_slice_xen_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceXenCost");
    if (cJSON_IsNull(vps_slice_xen_cost)) {
        vps_slice_xen_cost = NULL;
    }
    if (!vps_slice_xen_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_xen_cost))
    {
    goto end; //Numeric
    }
    vps_slice_xen_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_xen_cost_local_var)
    {
        goto end;
    }
    *vps_slice_xen_cost_local_var = vps_slice_xen_cost->valuedouble;

    // vps_order->vps_slice_kvm_l_cost
    cJSON *vps_slice_kvm_l_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceKvmLCost");
    if (cJSON_IsNull(vps_slice_kvm_l_cost)) {
        vps_slice_kvm_l_cost = NULL;
    }
    if (!vps_slice_kvm_l_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_kvm_l_cost))
    {
    goto end; //Numeric
    }
    vps_slice_kvm_l_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_kvm_l_cost_local_var)
    {
        goto end;
    }
    *vps_slice_kvm_l_cost_local_var = vps_slice_kvm_l_cost->valuedouble;

    // vps_order->vps_slice_kvm_storage_cost
    cJSON *vps_slice_kvm_storage_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceKvmStorageCost");
    if (cJSON_IsNull(vps_slice_kvm_storage_cost)) {
        vps_slice_kvm_storage_cost = NULL;
    }
    if (!vps_slice_kvm_storage_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_kvm_storage_cost))
    {
    goto end; //Numeric
    }
    vps_slice_kvm_storage_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_kvm_storage_cost_local_var)
    {
        goto end;
    }
    *vps_slice_kvm_storage_cost_local_var = vps_slice_kvm_storage_cost->valuedouble;

    // vps_order->vps_ny_cost
    cJSON *vps_ny_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsNyCost");
    if (cJSON_IsNull(vps_ny_cost)) {
        vps_ny_cost = NULL;
    }
    if (!vps_ny_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_ny_cost))
    {
    goto end; //Numeric
    }
    vps_ny_cost_local_var = malloc(sizeof(double));
    if(!vps_ny_cost_local_var)
    {
        goto end;
    }
    *vps_ny_cost_local_var = vps_ny_cost->valuedouble;

    // vps_order->vps_slice_kvm_w_cost
    cJSON *vps_slice_kvm_w_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "vpsSliceKvmWCost");
    if (cJSON_IsNull(vps_slice_kvm_w_cost)) {
        vps_slice_kvm_w_cost = NULL;
    }
    if (!vps_slice_kvm_w_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps_slice_kvm_w_cost))
    {
    goto end; //Numeric
    }
    vps_slice_kvm_w_cost_local_var = malloc(sizeof(double));
    if(!vps_slice_kvm_w_cost_local_var)
    {
        goto end;
    }
    *vps_slice_kvm_w_cost_local_var = vps_slice_kvm_w_cost->valuedouble;

    // vps_order->cpanel_cost
    cJSON *cpanel_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "cpanelCost");
    if (cJSON_IsNull(cpanel_cost)) {
        cpanel_cost = NULL;
    }
    if (!cpanel_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(cpanel_cost))
    {
    goto end; //Numeric
    }
    cpanel_cost_local_var = malloc(sizeof(double));
    if(!cpanel_cost_local_var)
    {
        goto end;
    }
    *cpanel_cost_local_var = cpanel_cost->valuedouble;

    // vps_order->da_cost
    cJSON *da_cost = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "daCost");
    if (cJSON_IsNull(da_cost)) {
        da_cost = NULL;
    }
    if (!da_cost) {
        goto end;
    }

    
    if(!cJSON_IsNumber(da_cost))
    {
    goto end; //Numeric
    }
    da_cost_local_var = malloc(sizeof(double));
    if(!da_cost_local_var)
    {
        goto end;
    }
    *da_cost_local_var = da_cost->valuedouble;

    // vps_order->ram_slice
    cJSON *ram_slice = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "ramSlice");
    if (cJSON_IsNull(ram_slice)) {
        ram_slice = NULL;
    }
    if (!ram_slice) {
        goto end;
    }

    
    if(!cJSON_IsString(ram_slice))
    {
    goto end; //String
    }

    // vps_order->hd_slice
    cJSON *hd_slice = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "hdSlice");
    if (cJSON_IsNull(hd_slice)) {
        hd_slice = NULL;
    }
    if (!hd_slice) {
        goto end;
    }

    
    if(!cJSON_IsString(hd_slice))
    {
    goto end; //String
    }

    // vps_order->hd_storage_slice
    cJSON *hd_storage_slice = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "hdStorageSlice");
    if (cJSON_IsNull(hd_storage_slice)) {
        hd_storage_slice = NULL;
    }
    if (!hd_storage_slice) {
        goto end;
    }

    
    if(!cJSON_IsString(hd_storage_slice))
    {
    goto end; //String
    }

    // vps_order->bw_slice
    cJSON *bw_slice = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "bwSlice");
    if (cJSON_IsNull(bw_slice)) {
        bw_slice = NULL;
    }
    if (!bw_slice) {
        goto end;
    }

    
    if(!cJSON_IsString(bw_slice))
    {
    goto end; //String
    }

    // vps_order->bw_type
    cJSON *bw_type = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "bwType");
    if (cJSON_IsNull(bw_type)) {
        bw_type = NULL;
    }
    if (!bw_type) {
        goto end;
    }

    
    if(!cJSON_IsString(bw_type))
    {
    goto end; //String
    }

    // vps_order->bw_total
    cJSON *bw_total = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "bwTotal");
    if (cJSON_IsNull(bw_total)) {
        bw_total = NULL;
    }
    if (!bw_total) {
        goto end;
    }

    
    if(!cJSON_IsNumber(bw_total))
    {
    goto end; //Numeric
    }
    bw_total_local_var = malloc(sizeof(double));
    if(!bw_total_local_var)
    {
        goto end;
    }
    *bw_total_local_var = bw_total->valuedouble;

    // vps_order->max_slices
    cJSON *max_slices = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "maxSlices");
    if (cJSON_IsNull(max_slices)) {
        max_slices = NULL;
    }
    if (!max_slices) {
        goto end;
    }

    
    if(!cJSON_IsString(max_slices))
    {
    goto end; //String
    }

    // vps_order->platform_packages
    cJSON *platform_packages = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "platformPackages");
    if (cJSON_IsNull(platform_packages)) {
        platform_packages = NULL;
    }
    if (!platform_packages) {
        goto end;
    }

    
    platform_packages_local_nonprim = vps_order_platform_packages_parseFromJSON(platform_packages); //nonprimitive

    // vps_order->platform_names
    cJSON *platform_names = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "platformNames");
    if (cJSON_IsNull(platform_names)) {
        platform_names = NULL;
    }
    if (!platform_names) {
        goto end;
    }

    
    platform_names_local_nonprim = vps_order_platform_names_parseFromJSON(platform_names); //nonprimitive

    // vps_order->package_costs
    cJSON *package_costs = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "packageCosts");
    if (cJSON_IsNull(package_costs)) {
        package_costs = NULL;
    }
    if (!package_costs) {
        goto end;
    }

    
    package_costs_local_nonprim = vps_order_package_costs_parseFromJSON(package_costs); //nonprimitive

    // vps_order->location_stock
    cJSON *location_stock = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "locationStock");
    if (cJSON_IsNull(location_stock)) {
        location_stock = NULL;
    }
    if (!location_stock) {
        goto end;
    }

    
    location_stock_local_nonprim = vps_order_location_stock_parseFromJSON(location_stock); //nonprimitive

    // vps_order->location_names
    cJSON *location_names = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "locationNames");
    if (cJSON_IsNull(location_names)) {
        location_names = NULL;
    }
    if (!location_names) {
        goto end;
    }

    
    location_names_local_nonprim = vps_order_location_names_parseFromJSON(location_names); //nonprimitive

    // vps_order->os_names
    cJSON *os_names = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "osNames");
    if (cJSON_IsNull(os_names)) {
        os_names = NULL;
    }
    if (!os_names) {
        goto end;
    }

    
    os_names_local_nonprim = vps_order_os_names_parseFromJSON(os_names); //nonprimitive

    // vps_order->templates
    cJSON *templates = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "templates");
    if (cJSON_IsNull(templates)) {
        templates = NULL;
    }
    if (!templates) {
        goto end;
    }

    
    templates_local_nonprim = vps_order_templates_parseFromJSON(templates); //nonprimitive

    // vps_order->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (!service_types) {
        goto end;
    }

    
    service_types_local_nonprim = vps_order_service_types_parseFromJSON(service_types); //nonprimitive

    // vps_order->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // vps_order->currency_symbol
    cJSON *currency_symbol = cJSON_GetObjectItemCaseSensitive(vps_orderJSON, "currencySymbol");
    if (cJSON_IsNull(currency_symbol)) {
        currency_symbol = NULL;
    }
    if (!currency_symbol) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_symbol))
    {
    goto end; //String
    }


    if (ram_slice && !cJSON_IsNull(ram_slice)) ram_slice_local_str = strdup(ram_slice->valuestring);
    if (hd_slice && !cJSON_IsNull(hd_slice)) hd_slice_local_str = strdup(hd_slice->valuestring);
    if (hd_storage_slice && !cJSON_IsNull(hd_storage_slice)) hd_storage_slice_local_str = strdup(hd_storage_slice->valuestring);
    if (bw_slice && !cJSON_IsNull(bw_slice)) bw_slice_local_str = strdup(bw_slice->valuestring);
    if (bw_type && !cJSON_IsNull(bw_type)) bw_type_local_str = strdup(bw_type->valuestring);
    if (max_slices && !cJSON_IsNull(max_slices)) max_slices_local_str = strdup(max_slices->valuestring);
    if (currency && !cJSON_IsNull(currency)) currency_local_str = strdup(currency->valuestring);
    if (currency_symbol && !cJSON_IsNull(currency_symbol)) currency_symbol_local_str = strdup(currency_symbol->valuestring);

    vps_order_local_var = vps_order_create_internal (
        vps_slice_ssd_ovz_cost_local_var,
        vps_slice_ovz_cost_local_var,
        vps_slice_ssd_virtuozzo_cost_local_var,
        vps_slice_virtuozzo_cost_local_var,
        vps_slice_hyperv_cost_local_var,
        vps_slice_vmware_cost_local_var,
        vps_slice_lxc_cost_local_var,
        vps_slice_xen_cost_local_var,
        vps_slice_kvm_l_cost_local_var,
        vps_slice_kvm_storage_cost_local_var,
        vps_ny_cost_local_var,
        vps_slice_kvm_w_cost_local_var,
        cpanel_cost_local_var,
        da_cost_local_var,
        ram_slice_local_str,
        hd_slice_local_str,
        hd_storage_slice_local_str,
        bw_slice_local_str,
        bw_type_local_str,
        bw_total_local_var,
        max_slices_local_str,
        platform_packages_local_nonprim,
        platform_names_local_nonprim,
        package_costs_local_nonprim,
        location_stock_local_nonprim,
        location_names_local_nonprim,
        os_names_local_nonprim,
        templates_local_nonprim,
        service_types_local_nonprim,
        currency_local_str,
        currency_symbol_local_str
        );

    if (!vps_order_local_var) {
        goto end;
    }

    return vps_order_local_var;
end:
    if (vps_slice_ssd_ovz_cost_local_var) {
        free(vps_slice_ssd_ovz_cost_local_var);
        vps_slice_ssd_ovz_cost_local_var = NULL;
    }
    if (vps_slice_ovz_cost_local_var) {
        free(vps_slice_ovz_cost_local_var);
        vps_slice_ovz_cost_local_var = NULL;
    }
    if (vps_slice_ssd_virtuozzo_cost_local_var) {
        free(vps_slice_ssd_virtuozzo_cost_local_var);
        vps_slice_ssd_virtuozzo_cost_local_var = NULL;
    }
    if (vps_slice_virtuozzo_cost_local_var) {
        free(vps_slice_virtuozzo_cost_local_var);
        vps_slice_virtuozzo_cost_local_var = NULL;
    }
    if (vps_slice_hyperv_cost_local_var) {
        free(vps_slice_hyperv_cost_local_var);
        vps_slice_hyperv_cost_local_var = NULL;
    }
    if (vps_slice_vmware_cost_local_var) {
        free(vps_slice_vmware_cost_local_var);
        vps_slice_vmware_cost_local_var = NULL;
    }
    if (vps_slice_lxc_cost_local_var) {
        free(vps_slice_lxc_cost_local_var);
        vps_slice_lxc_cost_local_var = NULL;
    }
    if (vps_slice_xen_cost_local_var) {
        free(vps_slice_xen_cost_local_var);
        vps_slice_xen_cost_local_var = NULL;
    }
    if (vps_slice_kvm_l_cost_local_var) {
        free(vps_slice_kvm_l_cost_local_var);
        vps_slice_kvm_l_cost_local_var = NULL;
    }
    if (vps_slice_kvm_storage_cost_local_var) {
        free(vps_slice_kvm_storage_cost_local_var);
        vps_slice_kvm_storage_cost_local_var = NULL;
    }
    if (vps_ny_cost_local_var) {
        free(vps_ny_cost_local_var);
        vps_ny_cost_local_var = NULL;
    }
    if (vps_slice_kvm_w_cost_local_var) {
        free(vps_slice_kvm_w_cost_local_var);
        vps_slice_kvm_w_cost_local_var = NULL;
    }
    if (cpanel_cost_local_var) {
        free(cpanel_cost_local_var);
        cpanel_cost_local_var = NULL;
    }
    if (da_cost_local_var) {
        free(da_cost_local_var);
        da_cost_local_var = NULL;
    }
    if (ram_slice_local_str) {
        free(ram_slice_local_str);
        ram_slice_local_str = NULL;
    }
    if (hd_slice_local_str) {
        free(hd_slice_local_str);
        hd_slice_local_str = NULL;
    }
    if (hd_storage_slice_local_str) {
        free(hd_storage_slice_local_str);
        hd_storage_slice_local_str = NULL;
    }
    if (bw_slice_local_str) {
        free(bw_slice_local_str);
        bw_slice_local_str = NULL;
    }
    if (bw_type_local_str) {
        free(bw_type_local_str);
        bw_type_local_str = NULL;
    }
    if (bw_total_local_var) {
        free(bw_total_local_var);
        bw_total_local_var = NULL;
    }
    if (max_slices_local_str) {
        free(max_slices_local_str);
        max_slices_local_str = NULL;
    }
    if (platform_packages_local_nonprim) {
        vps_order_platform_packages_free(platform_packages_local_nonprim);
        platform_packages_local_nonprim = NULL;
    }
    if (platform_names_local_nonprim) {
        vps_order_platform_names_free(platform_names_local_nonprim);
        platform_names_local_nonprim = NULL;
    }
    if (package_costs_local_nonprim) {
        vps_order_package_costs_free(package_costs_local_nonprim);
        package_costs_local_nonprim = NULL;
    }
    if (location_stock_local_nonprim) {
        vps_order_location_stock_free(location_stock_local_nonprim);
        location_stock_local_nonprim = NULL;
    }
    if (location_names_local_nonprim) {
        vps_order_location_names_free(location_names_local_nonprim);
        location_names_local_nonprim = NULL;
    }
    if (os_names_local_nonprim) {
        vps_order_os_names_free(os_names_local_nonprim);
        os_names_local_nonprim = NULL;
    }
    if (templates_local_nonprim) {
        vps_order_templates_free(templates_local_nonprim);
        templates_local_nonprim = NULL;
    }
    if (service_types_local_nonprim) {
        vps_order_service_types_free(service_types_local_nonprim);
        service_types_local_nonprim = NULL;
    }
    if (currency_local_str) {
        free(currency_local_str);
        currency_local_str = NULL;
    }
    if (currency_symbol_local_str) {
        free(currency_symbol_local_str);
        currency_symbol_local_str = NULL;
    }
    return NULL;

}
