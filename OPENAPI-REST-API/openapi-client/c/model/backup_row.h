/*
 * backup_row.h
 *
 * A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
 */

#ifndef _backup_row_H_
#define _backup_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_row_t backup_row_t;




typedef struct backup_row_t {
    char *backup_id; // string
    char *backup_name; // string
    char *backup_cost; // string
    char *backup_username; // string
    char *backup_status; // string
    char *services_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_row_t;

__attribute__((deprecated)) backup_row_t *backup_row_create(
    char *backup_id,
    char *backup_name,
    char *backup_cost,
    char *backup_username,
    char *backup_status,
    char *services_name
);

void backup_row_free(backup_row_t *backup_row);

backup_row_t *backup_row_parseFromJSON(cJSON *backup_rowJSON);

cJSON *backup_row_convertToJSON(backup_row_t *backup_row);

#endif /* _backup_row_H_ */

