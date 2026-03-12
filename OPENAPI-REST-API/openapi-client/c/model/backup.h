/*
 * backup.h
 *
 * Full detail view of a backup service including billing, service info, and configuration.
 */

#ifndef _backup_H_
#define _backup_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_t backup_t;

#include "backup_billing_details.h"
#include "backup_client_link.h"
#include "backup_extra_info_tables.h"
#include "backup_service_info.h"
#include "backup_service_master.h"



typedef struct backup_t {
    struct backup_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct backup_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    struct backup_service_master_t *service_master; //model
    char *package; // string
    char *service_extra; // string
    struct backup_extra_info_tables_t *extra_info_tables; //model

    int _library_owned; // Is the library responsible for freeing this object?
} backup_t;

__attribute__((deprecated)) backup_t *backup_create(
    backup_service_info_t *service_info,
    list_t *client_links,
    backup_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    backup_service_master_t *service_master,
    char *package,
    char *service_extra,
    backup_extra_info_tables_t *extra_info_tables
);

void backup_free(backup_t *backup);

backup_t *backup_parseFromJSON(cJSON *backupJSON);

cJSON *backup_convertToJSON(backup_t *backup);

#endif /* _backup_H_ */

