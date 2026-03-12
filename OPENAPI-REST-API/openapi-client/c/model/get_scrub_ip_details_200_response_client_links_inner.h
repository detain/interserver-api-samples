/*
 * get_scrub_ip_details_200_response_client_links_inner.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_client_links_inner_H_
#define _get_scrub_ip_details_200_response_client_links_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_client_links_inner_t get_scrub_ip_details_200_response_client_links_inner_t;




typedef struct get_scrub_ip_details_200_response_client_links_inner_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string
    char *other_attr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_client_links_inner_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
);

void get_scrub_ip_details_200_response_client_links_inner_free(get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner);

get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_client_links_innerJSON);

cJSON *get_scrub_ip_details_200_response_client_links_inner_convertToJSON(get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner);

#endif /* _get_scrub_ip_details_200_response_client_links_inner_H_ */

