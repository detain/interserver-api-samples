/*
 * domain_prov_process_pending.h
 *
 * Provisioning status data for a pending domain order.
 */

#ifndef _domain_prov_process_pending_H_
#define _domain_prov_process_pending_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_prov_process_pending_t domain_prov_process_pending_t;

#include "domain_prov_process_pending_attributes.h"



typedef struct domain_prov_process_pending_t {
    char *_ops_version; // string
    char *response_text; // string
    char *protocol; // string
    char *response_code; // string
    char *action; // string
    char *object; // string
    char *is_success; // string
    struct domain_prov_process_pending_attributes_t *attributes; //model

    int _library_owned; // Is the library responsible for freeing this object?
} domain_prov_process_pending_t;

__attribute__((deprecated)) domain_prov_process_pending_t *domain_prov_process_pending_create(
    char *_ops_version,
    char *response_text,
    char *protocol,
    char *response_code,
    char *action,
    char *object,
    char *is_success,
    domain_prov_process_pending_attributes_t *attributes
);

void domain_prov_process_pending_free(domain_prov_process_pending_t *domain_prov_process_pending);

domain_prov_process_pending_t *domain_prov_process_pending_parseFromJSON(cJSON *domain_prov_process_pendingJSON);

cJSON *domain_prov_process_pending_convertToJSON(domain_prov_process_pending_t *domain_prov_process_pending);

#endif /* _domain_prov_process_pending_H_ */

