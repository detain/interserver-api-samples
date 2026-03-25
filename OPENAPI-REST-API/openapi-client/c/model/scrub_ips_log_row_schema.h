/*
 * scrub_ips_log_row_schema.h
 *
 * 
 */

#ifndef _scrub_ips_log_row_schema_H_
#define _scrub_ips_log_row_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scrub_ips_log_row_schema_t scrub_ips_log_row_schema_t;




typedef struct scrub_ips_log_row_schema_t {
    char *date; // string
    char *filter; // string
    char *blocked_ip; // string
    char *target_ip; // string
    double *target_port; //numeric
    char *protocol; // string
    double *byte_count; //numeric
    char *xdp_action; // string

    int _library_owned; // Is the library responsible for freeing this object?
} scrub_ips_log_row_schema_t;

__attribute__((deprecated)) scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_create(
    char *date,
    char *filter,
    char *blocked_ip,
    char *target_ip,
    double *target_port,
    char *protocol,
    double *byte_count,
    char *xdp_action
);

void scrub_ips_log_row_schema_free(scrub_ips_log_row_schema_t *scrub_ips_log_row_schema);

scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_parseFromJSON(cJSON *scrub_ips_log_row_schemaJSON);

cJSON *scrub_ips_log_row_schema_convertToJSON(scrub_ips_log_row_schema_t *scrub_ips_log_row_schema);

#endif /* _scrub_ips_log_row_schema_H_ */

