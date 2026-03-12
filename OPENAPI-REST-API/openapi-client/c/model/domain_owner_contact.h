/*
 * domain_owner_contact.h
 *
 * Contact details for the registered domain owner.
 */

#ifndef _domain_owner_contact_H_
#define _domain_owner_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_owner_contact_t domain_owner_contact_t;




typedef struct domain_owner_contact_t {
    char *postal_code; // string
    char *org_name; // string
    char *country; // string
    char *status; // string
    char *state; // string
    char *first_name; // string
    char *last_name; // string
    char *address3; // string
    char *fax; // string
    char *address2; // string
    char *email; // string
    char *city; // string
    char *phone; // string
    char *address1; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_owner_contact_t;

__attribute__((deprecated)) domain_owner_contact_t *domain_owner_contact_create(
    char *postal_code,
    char *org_name,
    char *country,
    char *status,
    char *state,
    char *first_name,
    char *last_name,
    char *address3,
    char *fax,
    char *address2,
    char *email,
    char *city,
    char *phone,
    char *address1
);

void domain_owner_contact_free(domain_owner_contact_t *domain_owner_contact);

domain_owner_contact_t *domain_owner_contact_parseFromJSON(cJSON *domain_owner_contactJSON);

cJSON *domain_owner_contact_convertToJSON(domain_owner_contact_t *domain_owner_contact);

#endif /* _domain_owner_contact_H_ */

