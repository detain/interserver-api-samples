/*
 * restore_request.h
 *
 * Request data to trigger a restore from backup.
 */

#ifndef _restore_request_H_
#define _restore_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct restore_request_t restore_request_t;




typedef struct restore_request_t {
    char *backup; // string
    char *password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} restore_request_t;

__attribute__((deprecated)) restore_request_t *restore_request_create(
    char *backup,
    char *password
);

void restore_request_free(restore_request_t *restore_request);

restore_request_t *restore_request_parseFromJSON(cJSON *restore_requestJSON);

cJSON *restore_request_convertToJSON(restore_request_t *restore_request);

#endif /* _restore_request_H_ */

