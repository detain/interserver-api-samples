/*
 * cancel_backup_200_response.h
 *
 * 
 */

#ifndef _cancel_backup_200_response_H_
#define _cancel_backup_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cancel_backup_200_response_t cancel_backup_200_response_t;




typedef struct cancel_backup_200_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cancel_backup_200_response_t;

__attribute__((deprecated)) cancel_backup_200_response_t *cancel_backup_200_response_create(
    int success,
    char *text
);

void cancel_backup_200_response_free(cancel_backup_200_response_t *cancel_backup_200_response);

cancel_backup_200_response_t *cancel_backup_200_response_parseFromJSON(cJSON *cancel_backup_200_responseJSON);

cJSON *cancel_backup_200_response_convertToJSON(cancel_backup_200_response_t *cancel_backup_200_response);

#endif /* _cancel_backup_200_response_H_ */

