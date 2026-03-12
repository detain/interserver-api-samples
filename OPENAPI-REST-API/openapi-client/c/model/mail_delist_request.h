/*
 * mail_delist_request.h
 *
 * Payload for removing a sender from mail blocklists.
 */

#ifndef _mail_delist_request_H_
#define _mail_delist_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_delist_request_t mail_delist_request_t;




typedef struct mail_delist_request_t {
    char *unblock; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_delist_request_t;

__attribute__((deprecated)) mail_delist_request_t *mail_delist_request_create(
    char *unblock
);

void mail_delist_request_free(mail_delist_request_t *mail_delist_request);

mail_delist_request_t *mail_delist_request_parseFromJSON(cJSON *mail_delist_requestJSON);

cJSON *mail_delist_request_convertToJSON(mail_delist_request_t *mail_delist_request);

#endif /* _mail_delist_request_H_ */

