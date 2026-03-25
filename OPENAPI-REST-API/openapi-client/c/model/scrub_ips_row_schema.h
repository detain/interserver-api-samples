/*
 * scrub_ips_row_schema.h
 *
 * 
 */

#ifndef _scrub_ips_row_schema_H_
#define _scrub_ips_row_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scrub_ips_row_schema_t scrub_ips_row_schema_t;




typedef struct scrub_ips_row_schema_t {
    int *scrub_ip_id; //numeric
    double *repeat_invoices_cost; //numeric
    char *scrub_ip_ip; // string
    char *scrub_ip_status; // string
    char *services_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} scrub_ips_row_schema_t;

__attribute__((deprecated)) scrub_ips_row_schema_t *scrub_ips_row_schema_create(
    int *scrub_ip_id,
    double *repeat_invoices_cost,
    char *scrub_ip_ip,
    char *scrub_ip_status,
    char *services_name
);

void scrub_ips_row_schema_free(scrub_ips_row_schema_t *scrub_ips_row_schema);

scrub_ips_row_schema_t *scrub_ips_row_schema_parseFromJSON(cJSON *scrub_ips_row_schemaJSON);

cJSON *scrub_ips_row_schema_convertToJSON(scrub_ips_row_schema_t *scrub_ips_row_schema);

#endif /* _scrub_ips_row_schema_H_ */

