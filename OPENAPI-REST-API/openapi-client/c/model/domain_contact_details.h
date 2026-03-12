/*
 * domain_contact_details.h
 *
 * Contact details used for domain registrant/admin/technical/billing records.
 */

#ifndef _domain_contact_details_H_
#define _domain_contact_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_contact_details_t domain_contact_details_t;




typedef struct domain_contact_details_t {
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
} domain_contact_details_t;

__attribute__((deprecated)) domain_contact_details_t *domain_contact_details_create(
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

void domain_contact_details_free(domain_contact_details_t *domain_contact_details);

domain_contact_details_t *domain_contact_details_parseFromJSON(cJSON *domain_contact_detailsJSON);

cJSON *domain_contact_details_convertToJSON(domain_contact_details_t *domain_contact_details);

#endif /* _domain_contact_details_H_ */

