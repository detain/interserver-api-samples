/*
 * domain_tech_contact.h
 *
 * Technical contact information for a domain registration.
 */

#ifndef _domain_tech_contact_H_
#define _domain_tech_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_tech_contact_t domain_tech_contact_t;




typedef struct domain_tech_contact_t {
    char *state; // string
    char *status; // string
    char *org_name; // string
    char *country; // string
    char *postal_code; // string
    char *fax; // string
    char *email; // string
    char *address2; // string
    char *address3; // string
    char *address1; // string
    char *city; // string
    char *phone; // string
    char *first_name; // string
    char *last_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_tech_contact_t;

__attribute__((deprecated)) domain_tech_contact_t *domain_tech_contact_create(
    char *state,
    char *status,
    char *org_name,
    char *country,
    char *postal_code,
    char *fax,
    char *email,
    char *address2,
    char *address3,
    char *address1,
    char *city,
    char *phone,
    char *first_name,
    char *last_name
);

void domain_tech_contact_free(domain_tech_contact_t *domain_tech_contact);

domain_tech_contact_t *domain_tech_contact_parseFromJSON(cJSON *domain_tech_contactJSON);

cJSON *domain_tech_contact_convertToJSON(domain_tech_contact_t *domain_tech_contact);

#endif /* _domain_tech_contact_H_ */

