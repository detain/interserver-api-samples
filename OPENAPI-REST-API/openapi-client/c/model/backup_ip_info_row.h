/*
 * backup_ip_info_row.h
 *
 * A single row in the backup IP information table.
 */

#ifndef _backup_ip_info_row_H_
#define _backup_ip_info_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_ip_info_row_t backup_ip_info_row_t;




typedef struct backup_ip_info_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_ip_info_row_t;

__attribute__((deprecated)) backup_ip_info_row_t *backup_ip_info_row_create(
    char *desc,
    char *value
);

void backup_ip_info_row_free(backup_ip_info_row_t *backup_ip_info_row);

backup_ip_info_row_t *backup_ip_info_row_parseFromJSON(cJSON *backup_ip_info_rowJSON);

cJSON *backup_ip_info_row_convertToJSON(backup_ip_info_row_t *backup_ip_info_row);

#endif /* _backup_ip_info_row_H_ */

