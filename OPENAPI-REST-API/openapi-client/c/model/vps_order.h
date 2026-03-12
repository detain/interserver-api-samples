/*
 * vps_order.h
 *
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 */

#ifndef _vps_order_H_
#define _vps_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_t vps_order_t;

#include "vps_order_location_names.h"
#include "vps_order_location_stock.h"
#include "vps_order_os_names.h"
#include "vps_order_package_costs.h"
#include "vps_order_platform_names.h"
#include "vps_order_platform_packages.h"
#include "vps_order_service_types.h"
#include "vps_order_templates.h"



typedef struct vps_order_t {
    double vps_slice_ssd_ovz_cost; //numeric
    double vps_slice_ovz_cost; //numeric
    double vps_slice_ssd_virtuozzo_cost; //numeric
    double vps_slice_virtuozzo_cost; //numeric
    double vps_slice_hyperv_cost; //numeric
    double vps_slice_vmware_cost; //numeric
    double vps_slice_lxc_cost; //numeric
    double vps_slice_xen_cost; //numeric
    double vps_slice_kvm_l_cost; //numeric
    double vps_slice_kvm_storage_cost; //numeric
    double vps_ny_cost; //numeric
    double vps_slice_kvm_w_cost; //numeric
    double cpanel_cost; //numeric
    double da_cost; //numeric
    char *ram_slice; // string
    char *hd_slice; // string
    char *hd_storage_slice; // string
    char *bw_slice; // string
    char *bw_type; // string
    double bw_total; //numeric
    char *max_slices; // string
    struct vps_order_platform_packages_t *platform_packages; //model
    struct vps_order_platform_names_t *platform_names; //model
    struct vps_order_package_costs_t *package_costs; //model
    struct vps_order_location_stock_t *location_stock; //model
    struct vps_order_location_names_t *location_names; //model
    struct vps_order_os_names_t *os_names; //model
    struct vps_order_templates_t *templates; //model
    struct vps_order_service_types_t *service_types; //model
    char *currency; // string
    char *currency_symbol; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_t;

__attribute__((deprecated)) vps_order_t *vps_order_create(
    double vps_slice_ssd_ovz_cost,
    double vps_slice_ovz_cost,
    double vps_slice_ssd_virtuozzo_cost,
    double vps_slice_virtuozzo_cost,
    double vps_slice_hyperv_cost,
    double vps_slice_vmware_cost,
    double vps_slice_lxc_cost,
    double vps_slice_xen_cost,
    double vps_slice_kvm_l_cost,
    double vps_slice_kvm_storage_cost,
    double vps_ny_cost,
    double vps_slice_kvm_w_cost,
    double cpanel_cost,
    double da_cost,
    char *ram_slice,
    char *hd_slice,
    char *hd_storage_slice,
    char *bw_slice,
    char *bw_type,
    double bw_total,
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
);

void vps_order_free(vps_order_t *vps_order);

vps_order_t *vps_order_parseFromJSON(cJSON *vps_orderJSON);

cJSON *vps_order_convertToJSON(vps_order_t *vps_order);

#endif /* _vps_order_H_ */

