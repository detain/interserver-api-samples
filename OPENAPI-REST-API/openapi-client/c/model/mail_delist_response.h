/*
 * mail_delist_response.h
 *
 * Blocklist status information for a mail service.
 */

#ifndef _mail_delist_response_H_
#define _mail_delist_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_delist_response_t mail_delist_response_t;

#include "object.h"



typedef struct mail_delist_response_t {
    int id; //numeric
    list_t *local; //nonprimitive container
    list_t *mbtrap; //nonprimitive container
    list_t *subject; //nonprimitive container
    list_t *manual; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_delist_response_t;

__attribute__((deprecated)) mail_delist_response_t *mail_delist_response_create(
    int id,
    list_t *local,
    list_t *mbtrap,
    list_t *subject,
    list_t *manual
);

void mail_delist_response_free(mail_delist_response_t *mail_delist_response);

mail_delist_response_t *mail_delist_response_parseFromJSON(cJSON *mail_delist_responseJSON);

cJSON *mail_delist_response_convertToJSON(mail_delist_response_t *mail_delist_response);

#endif /* _mail_delist_response_H_ */

