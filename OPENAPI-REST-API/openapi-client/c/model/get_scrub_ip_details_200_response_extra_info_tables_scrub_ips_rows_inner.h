/*
 * get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_H_
#define _get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t;




typedef struct get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_create(
    char *desc,
    char *value
);

void get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner);

get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_innerJSON);

cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner);

#endif /* _get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_H_ */

