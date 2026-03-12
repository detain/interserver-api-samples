/*
 * domain_all_info_attributes.h
 *
 * 
 */

#ifndef _domain_all_info_attributes_H_
#define _domain_all_info_attributes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_all_info_attributes_t domain_all_info_attributes_t;

#include "domain_all_info_attributes_contact_set.h"
#include "domain_name_server.h"



typedef struct domain_all_info_attributes_t {
    struct domain_all_info_attributes_contact_set_t *contact_set; //model
    char *registry_createdate; // string
    char *registry_expiredate; // string
    char *tld_data; // string
    char *let_expire; // string
    char *auto_renew; // string
    char *sponsoring_rsp; // string
    char *gdpr_consent_status; // string
    list_t *nameserver_list; //nonprimitive container
    char *registry_updatedate; // string
    char *affiliate_id; // string
    char *expiredate; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_all_info_attributes_t;

__attribute__((deprecated)) domain_all_info_attributes_t *domain_all_info_attributes_create(
    domain_all_info_attributes_contact_set_t *contact_set,
    char *registry_createdate,
    char *registry_expiredate,
    char *tld_data,
    char *let_expire,
    char *auto_renew,
    char *sponsoring_rsp,
    char *gdpr_consent_status,
    list_t *nameserver_list,
    char *registry_updatedate,
    char *affiliate_id,
    char *expiredate
);

void domain_all_info_attributes_free(domain_all_info_attributes_t *domain_all_info_attributes);

domain_all_info_attributes_t *domain_all_info_attributes_parseFromJSON(cJSON *domain_all_info_attributesJSON);

cJSON *domain_all_info_attributes_convertToJSON(domain_all_info_attributes_t *domain_all_info_attributes);

#endif /* _domain_all_info_attributes_H_ */

