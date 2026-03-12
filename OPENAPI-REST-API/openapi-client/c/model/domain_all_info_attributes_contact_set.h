/*
 * domain_all_info_attributes_contact_set.h
 *
 * 
 */

#ifndef _domain_all_info_attributes_contact_set_H_
#define _domain_all_info_attributes_contact_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_all_info_attributes_contact_set_t domain_all_info_attributes_contact_set_t;

#include "domain_admin_contact.h"
#include "domain_owner_contact.h"
#include "domain_tech_contact.h"



typedef struct domain_all_info_attributes_contact_set_t {
    struct domain_owner_contact_t *owner; //model
    struct domain_admin_contact_t *admin; //model
    struct domain_tech_contact_t *tech; //model

    int _library_owned; // Is the library responsible for freeing this object?
} domain_all_info_attributes_contact_set_t;

__attribute__((deprecated)) domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_create(
    domain_owner_contact_t *owner,
    domain_admin_contact_t *admin,
    domain_tech_contact_t *tech
);

void domain_all_info_attributes_contact_set_free(domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set);

domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_parseFromJSON(cJSON *domain_all_info_attributes_contact_setJSON);

cJSON *domain_all_info_attributes_contact_set_convertToJSON(domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set);

#endif /* _domain_all_info_attributes_contact_set_H_ */

