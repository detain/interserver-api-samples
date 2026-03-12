/*
 * domain_row.h
 *
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 */

#ifndef _domain_row_H_
#define _domain_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_row_t domain_row_t;




typedef struct domain_row_t {
    char *domain_id; // string
    char *domain_hostname; // string
    char *domain_expire_date; // string
    char *cost; // string
    char *domain_status; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_row_t;

__attribute__((deprecated)) domain_row_t *domain_row_create(
    char *domain_id,
    char *domain_hostname,
    char *domain_expire_date,
    char *cost,
    char *domain_status
);

void domain_row_free(domain_row_t *domain_row);

domain_row_t *domain_row_parseFromJSON(cJSON *domain_rowJSON);

cJSON *domain_row_convertToJSON(domain_row_t *domain_row);

#endif /* _domain_row_H_ */

