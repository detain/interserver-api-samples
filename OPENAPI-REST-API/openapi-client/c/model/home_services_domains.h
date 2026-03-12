/*
 * home_services_domains.h
 *
 * 
 */

#ifndef _home_services_domains_H_
#define _home_services_domains_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_domains_t home_services_domains_t;

#include "home_services_domains_links.h"



typedef struct home_services_domains_t {
    struct home_services_domains_links_t *links; //model
    int count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_domains_t;

__attribute__((deprecated)) home_services_domains_t *home_services_domains_create(
    home_services_domains_links_t *links,
    int count
);

void home_services_domains_free(home_services_domains_t *home_services_domains);

home_services_domains_t *home_services_domains_parseFromJSON(cJSON *home_services_domainsJSON);

cJSON *home_services_domains_convertToJSON(home_services_domains_t *home_services_domains);

#endif /* _home_services_domains_H_ */

