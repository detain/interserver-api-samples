/*
 * vps.h
 *
 * 
 */

#ifndef _vps_H_
#define _vps_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_t vps_t;

#include "any_type.h"
#include "vps_billing_details.h"
#include "vps_client_link.h"
#include "vps_cp_data.h"
#include "vps_da_data.h"
#include "vps_extra_info_tables.h"
#include "vps_plesk12_data.h"
#include "vps_service_addons.h"
#include "vps_service_extra.h"
#include "vps_service_info.h"
#include "vps_service_master.h"



typedef struct vps_t {
    struct vps_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct vps_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    struct vps_service_master_t *service_master; //model
    char *package; // string
    struct vps_service_extra_t *service_extra; //model
    struct vps_extra_info_tables_t *extra_info_tables; //model
    char *module; // string
    char *token; // string
    int da_link; //numeric
    int sr_link; //numeric
    struct vps_cp_data_t *cp_data; //model
    struct vps_da_data_t *da_data; //model
    struct vps_plesk12_data_t *plesk12_data; //model
    struct vps_service_addons_t *service_addons; //model
    char *os_template; // string
    any_type_t *cpu_graph_data; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} vps_t;

__attribute__((deprecated)) vps_t *vps_create(
    vps_service_info_t *service_info,
    list_t *client_links,
    vps_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    vps_service_master_t *service_master,
    char *package,
    vps_service_extra_t *service_extra,
    vps_extra_info_tables_t *extra_info_tables,
    char *module,
    char *token,
    int da_link,
    int sr_link,
    vps_cp_data_t *cp_data,
    vps_da_data_t *da_data,
    vps_plesk12_data_t *plesk12_data,
    vps_service_addons_t *service_addons,
    char *os_template,
    any_type_t *cpu_graph_data
);

void vps_free(vps_t *vps);

vps_t *vps_parseFromJSON(cJSON *vpsJSON);

cJSON *vps_convertToJSON(vps_t *vps);

#endif /* _vps_H_ */

