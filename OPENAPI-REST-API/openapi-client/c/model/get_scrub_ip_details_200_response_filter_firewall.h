/*
 * get_scrub_ip_details_200_response_filter_firewall.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_filter_firewall_H_
#define _get_scrub_ip_details_200_response_filter_firewall_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_filter_firewall_t get_scrub_ip_details_200_response_filter_firewall_t;

#include "get_scrub_ip_details_200_response_filter_firewall_filters_inner.h"
#include "get_scrub_ip_details_200_response_filter_firewall_rules_inner.h"



typedef struct get_scrub_ip_details_200_response_filter_firewall_t {
    list_t *rules; //nonprimitive container
    list_t *filters; //nonprimitive container
    int scrub_enabled; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_filter_firewall_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_create(
    list_t *rules,
    list_t *filters,
    int scrub_enabled
);

void get_scrub_ip_details_200_response_filter_firewall_free(get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall);

get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_parseFromJSON(cJSON *get_scrub_ip_details_200_response_filter_firewallJSON);

cJSON *get_scrub_ip_details_200_response_filter_firewall_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall);

#endif /* _get_scrub_ip_details_200_response_filter_firewall_H_ */

