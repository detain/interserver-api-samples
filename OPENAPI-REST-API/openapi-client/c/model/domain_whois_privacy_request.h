/*
 * domain_whois_privacy_request.h
 *
 * Request payload for enabling or disabling Whois privacy.
 */

#ifndef _domain_whois_privacy_request_H_
#define _domain_whois_privacy_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_whois_privacy_request_t domain_whois_privacy_request_t;




typedef struct domain_whois_privacy_request_t {
    char *func; // string
    char *csrf_token; // string
    char *domain_firstname; // string
    char *domain_lastname; // string
    char *domain_email; // string
    char *domain_address; // string
    char *domain_address2; // string
    char *domain_address3; // string
    char *domain_city; // string
    char *domain_state; // string
    char *domain_zip; // string
    char *domain_country; // string
    char *domain_phone; // string
    char *domain_fax; // string
    char *domain_company; // string
    char *domain_extra; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_whois_privacy_request_t;

__attribute__((deprecated)) domain_whois_privacy_request_t *domain_whois_privacy_request_create(
    char *func,
    char *csrf_token,
    char *domain_firstname,
    char *domain_lastname,
    char *domain_email,
    char *domain_address,
    char *domain_address2,
    char *domain_address3,
    char *domain_city,
    char *domain_state,
    char *domain_zip,
    char *domain_country,
    char *domain_phone,
    char *domain_fax,
    char *domain_company,
    char *domain_extra
);

void domain_whois_privacy_request_free(domain_whois_privacy_request_t *domain_whois_privacy_request);

domain_whois_privacy_request_t *domain_whois_privacy_request_parseFromJSON(cJSON *domain_whois_privacy_requestJSON);

cJSON *domain_whois_privacy_request_convertToJSON(domain_whois_privacy_request_t *domain_whois_privacy_request);

#endif /* _domain_whois_privacy_request_H_ */

