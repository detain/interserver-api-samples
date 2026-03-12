/*
 * domain_admin_contact.h
 *
 * Administrative contact information for a domain registration.
 */

#ifndef _domain_admin_contact_H_
#define _domain_admin_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_admin_contact_t domain_admin_contact_t;




typedef struct domain_admin_contact_t {
    char *status; // string
    char *state; // string
    char *org_name; // string
    char *country; // string
    char *postal_code; // string
    char *email; // string
    char *fax; // string
    char *address2; // string
    char *address3; // string
    char *address1; // string
    char *city; // string
    char *phone; // string
    char *first_name; // string
    char *last_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_admin_contact_t;

__attribute__((deprecated)) domain_admin_contact_t *domain_admin_contact_create(
    char *status,
    char *state,
    char *org_name,
    char *country,
    char *postal_code,
    char *email,
    char *fax,
    char *address2,
    char *address3,
    char *address1,
    char *city,
    char *phone,
    char *first_name,
    char *last_name
);

void domain_admin_contact_free(domain_admin_contact_t *domain_admin_contact);

domain_admin_contact_t *domain_admin_contact_parseFromJSON(cJSON *domain_admin_contactJSON);

cJSON *domain_admin_contact_convertToJSON(domain_admin_contact_t *domain_admin_contact);

#endif /* _domain_admin_contact_H_ */

