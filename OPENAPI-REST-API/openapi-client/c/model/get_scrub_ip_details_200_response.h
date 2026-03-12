/*
 * get_scrub_ip_details_200_response.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_H_
#define _get_scrub_ip_details_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_t get_scrub_ip_details_200_response_t;

#include "get_scrub_ip_details_200_response_billing_details.h"
#include "get_scrub_ip_details_200_response_client_links_inner.h"
#include "get_scrub_ip_details_200_response_extra_info_tables.h"
#include "get_scrub_ip_details_200_response_filter_firewall.h"
#include "get_scrub_ip_details_200_response_service_info.h"



typedef struct get_scrub_ip_details_200_response_t {
    struct get_scrub_ip_details_200_response_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct get_scrub_ip_details_200_response_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    char *package; // string
    struct get_scrub_ip_details_200_response_extra_info_tables_t *extra_info_tables; //model
    struct get_scrub_ip_details_200_response_filter_firewall_t *filter_firewall; //model

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_create(
    get_scrub_ip_details_200_response_service_info_t *service_info,
    list_t *client_links,
    get_scrub_ip_details_200_response_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    get_scrub_ip_details_200_response_extra_info_tables_t *extra_info_tables,
    get_scrub_ip_details_200_response_filter_firewall_t *filter_firewall
);

void get_scrub_ip_details_200_response_free(get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response);

get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_parseFromJSON(cJSON *get_scrub_ip_details_200_responseJSON);

cJSON *get_scrub_ip_details_200_response_convertToJSON(get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response);

#endif /* _get_scrub_ip_details_200_response_H_ */

