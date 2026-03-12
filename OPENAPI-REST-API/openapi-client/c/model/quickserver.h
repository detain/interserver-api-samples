/*
 * quickserver.h
 *
 * 
 */

#ifndef _quickserver_H_
#define _quickserver_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_t quickserver_t;

#include "quickserver_billing_details.h"
#include "quickserver_client_link.h"
#include "quickserver_extra_info_tables.h"
#include "quickserver_service_extra.h"
#include "quickserver_service_info.h"
#include "quickserver_service_master.h"



typedef struct quickserver_t {
    struct quickserver_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct quickserver_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    struct quickserver_service_master_t *service_master; //model
    char *package; // string
    char *os_template; // string
    struct quickserver_service_extra_t *service_extra; //model
    struct quickserver_extra_info_tables_t *extra_info_tables; //model
    char *cpu_graph_data; // string
    char *bandwidth_xaxis; // string
    char *bandwidth_yaxis; // string
    char *module; // string
    char *token; // string
    char *service_disk_used; // string
    char *service_disk_total; // string
    double disk_percentage; //numeric
    char *memory; // string
    char *hdd; // string
    list_t *service_overview_extra; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_t;

__attribute__((deprecated)) quickserver_t *quickserver_create(
    quickserver_service_info_t *service_info,
    list_t *client_links,
    quickserver_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    quickserver_service_master_t *service_master,
    char *package,
    char *os_template,
    quickserver_service_extra_t *service_extra,
    quickserver_extra_info_tables_t *extra_info_tables,
    char *cpu_graph_data,
    char *bandwidth_xaxis,
    char *bandwidth_yaxis,
    char *module,
    char *token,
    char *service_disk_used,
    char *service_disk_total,
    double disk_percentage,
    char *memory,
    char *hdd,
    list_t *service_overview_extra
);

void quickserver_free(quickserver_t *quickserver);

quickserver_t *quickserver_parseFromJSON(cJSON *quickserverJSON);

cJSON *quickserver_convertToJSON(quickserver_t *quickserver);

#endif /* _quickserver_H_ */

