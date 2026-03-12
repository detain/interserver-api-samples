/*
 * backup_login_response.h
 *
 * Login session response for backup storage.
 */

#ifndef _backup_login_response_H_
#define _backup_login_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_login_response_t backup_login_response_t;




typedef struct backup_login_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_login_response_t;

__attribute__((deprecated)) backup_login_response_t *backup_login_response_create(
    int success,
    char *text
);

void backup_login_response_free(backup_login_response_t *backup_login_response);

backup_login_response_t *backup_login_response_parseFromJSON(cJSON *backup_login_responseJSON);

cJSON *backup_login_response_convertToJSON(backup_login_response_t *backup_login_response);

#endif /* _backup_login_response_H_ */

