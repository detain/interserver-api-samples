/*
 * domain_prov_process_pending_attributes.h
 *
 * 
 */

#ifndef _domain_prov_process_pending_attributes_H_
#define _domain_prov_process_pending_attributes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_prov_process_pending_attributes_t domain_prov_process_pending_attributes_t;




typedef struct domain_prov_process_pending_attributes_t {
    char *id; // string
    char *order_id; // string
    char *registration_expiration_date; // string
    char *f_auto_renew; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_prov_process_pending_attributes_t;

__attribute__((deprecated)) domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_create(
    char *id,
    char *order_id,
    char *registration_expiration_date,
    char *f_auto_renew
);

void domain_prov_process_pending_attributes_free(domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes);

domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_parseFromJSON(cJSON *domain_prov_process_pending_attributesJSON);

cJSON *domain_prov_process_pending_attributes_convertToJSON(domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes);

#endif /* _domain_prov_process_pending_attributes_H_ */

