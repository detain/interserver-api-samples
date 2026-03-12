/*
 * email_address.h
 *
 * an email address
 */

#ifndef _email_address_H_
#define _email_address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_address_t email_address_t;




typedef struct email_address_t {
    char *email; // string

    int _library_owned; // Is the library responsible for freeing this object?
} email_address_t;

__attribute__((deprecated)) email_address_t *email_address_create(
    char *email
);

void email_address_free(email_address_t *email_address);

email_address_t *email_address_parseFromJSON(cJSON *email_addressJSON);

cJSON *email_address_convertToJSON(email_address_t *email_address);

#endif /* _email_address_H_ */

