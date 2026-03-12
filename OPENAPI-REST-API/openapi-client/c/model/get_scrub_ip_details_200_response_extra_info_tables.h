/*
 * get_scrub_ip_details_200_response_extra_info_tables.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_extra_info_tables_H_
#define _get_scrub_ip_details_200_response_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_extra_info_tables_t get_scrub_ip_details_200_response_extra_info_tables_t;

#include "get_scrub_ip_details_200_response_extra_info_tables_scrub_ips.h"



typedef struct get_scrub_ip_details_200_response_extra_info_tables_t {
    struct get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *scrub_ips; //model

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_extra_info_tables_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_create(
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *scrub_ips
);

void get_scrub_ip_details_200_response_extra_info_tables_free(get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables);

get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_parseFromJSON(cJSON *get_scrub_ip_details_200_response_extra_info_tablesJSON);

cJSON *get_scrub_ip_details_200_response_extra_info_tables_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables);

#endif /* _get_scrub_ip_details_200_response_extra_info_tables_H_ */

