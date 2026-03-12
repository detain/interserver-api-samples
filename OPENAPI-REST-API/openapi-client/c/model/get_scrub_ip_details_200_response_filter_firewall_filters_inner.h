/*
 * get_scrub_ip_details_200_response_filter_firewall_filters_inner.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_filter_firewall_filters_inner_H_
#define _get_scrub_ip_details_200_response_filter_firewall_filters_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_filter_firewall_filters_inner_t get_scrub_ip_details_200_response_filter_firewall_filters_inner_t;




typedef struct get_scrub_ip_details_200_response_filter_firewall_filters_inner_t {
    char *daddr; // string
    char *dest; // string
    char *filter_name; // string
    char *destination_ip; // string
    char *filter; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_filter_firewall_filters_inner_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_create(
    char *daddr,
    char *dest,
    char *filter_name,
    char *destination_ip,
    char *filter
);

void get_scrub_ip_details_200_response_filter_firewall_filters_inner_free(get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner);

get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON);

cJSON *get_scrub_ip_details_200_response_filter_firewall_filters_inner_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner);

#endif /* _get_scrub_ip_details_200_response_filter_firewall_filters_inner_H_ */

