/*
 * domain_all_info.h
 *
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 */

#ifndef _domain_all_info_H_
#define _domain_all_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_all_info_t domain_all_info_t;

#include "domain_all_info_attributes.h"



typedef struct domain_all_info_t {
    char *_ops_version; // string
    struct domain_all_info_attributes_t *attributes; //model
    char *object; // string
    char *protocol; // string
    char *response_text; // string
    char *response_code; // string
    char *action; // string
    char *is_success; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_all_info_t;

__attribute__((deprecated)) domain_all_info_t *domain_all_info_create(
    char *_ops_version,
    domain_all_info_attributes_t *attributes,
    char *object,
    char *protocol,
    char *response_text,
    char *response_code,
    char *action,
    char *is_success
);

void domain_all_info_free(domain_all_info_t *domain_all_info);

domain_all_info_t *domain_all_info_parseFromJSON(cJSON *domain_all_infoJSON);

cJSON *domain_all_info_convertToJSON(domain_all_info_t *domain_all_info);

#endif /* _domain_all_info_H_ */

