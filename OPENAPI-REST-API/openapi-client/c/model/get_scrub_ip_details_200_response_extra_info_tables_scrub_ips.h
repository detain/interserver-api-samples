/*
 * get_scrub_ip_details_200_response_extra_info_tables_scrub_ips.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_H_
#define _get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t;

#include "get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner.h"



typedef struct get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create(
    char *title,
    list_t *rows
);

void get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips);

get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_parseFromJSON(cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ipsJSON);

cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips);

#endif /* _get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_H_ */

