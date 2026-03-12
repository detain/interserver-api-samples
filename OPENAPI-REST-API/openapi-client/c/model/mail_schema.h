/*
 * mail_schema.h
 *
 * 
 */

#ifndef _mail_schema_H_
#define _mail_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_schema_t mail_schema_t;

#include "mail_billing_details.h"
#include "mail_client_link.h"
#include "mail_schema_extra_info_tables.h"
#include "mail_service_info.h"
#include "mail_service_type.h"



typedef struct mail_schema_t {
    struct mail_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct mail_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    char *package; // string
    struct mail_schema_extra_info_tables_t *extra_info_tables; //model
    struct mail_service_type_t *service_type; //model
    char *usage_count; // string
    list_t *service_extra; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_schema_t;

__attribute__((deprecated)) mail_schema_t *mail_schema_create(
    mail_service_info_t *service_info,
    list_t *client_links,
    mail_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    mail_schema_extra_info_tables_t *extra_info_tables,
    mail_service_type_t *service_type,
    char *usage_count,
    list_t *service_extra
);

void mail_schema_free(mail_schema_t *mail_schema);

mail_schema_t *mail_schema_parseFromJSON(cJSON *mail_schemaJSON);

cJSON *mail_schema_convertToJSON(mail_schema_t *mail_schema);

#endif /* _mail_schema_H_ */

