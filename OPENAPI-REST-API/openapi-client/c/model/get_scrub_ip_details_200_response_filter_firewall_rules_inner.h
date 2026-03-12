/*
 * get_scrub_ip_details_200_response_filter_firewall_rules_inner.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_filter_firewall_rules_inner_H_
#define _get_scrub_ip_details_200_response_filter_firewall_rules_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_filter_firewall_rules_inner_t get_scrub_ip_details_200_response_filter_firewall_rules_inner_t;




typedef struct get_scrub_ip_details_200_response_filter_firewall_rules_inner_t {
    char *id; // string
    char *source_ip; // string
    char *destination_ip; // string
    char *protocol_id; // string
    char *source_port; // string
    char *destination_port; // string
    char *xdp_action; // string
    char *global_drop; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_filter_firewall_rules_inner_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_create(
    char *id,
    char *source_ip,
    char *destination_ip,
    char *protocol_id,
    char *source_port,
    char *destination_port,
    char *xdp_action,
    char *global_drop
);

void get_scrub_ip_details_200_response_filter_firewall_rules_inner_free(get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner);

get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON);

cJSON *get_scrub_ip_details_200_response_filter_firewall_rules_inner_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner);

#endif /* _get_scrub_ip_details_200_response_filter_firewall_rules_inner_H_ */

