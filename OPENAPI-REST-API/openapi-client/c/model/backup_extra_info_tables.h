/*
 * backup_extra_info_tables.h
 *
 * Supplementary information tables for a backup service (IP info, etc.).
 */

#ifndef _backup_extra_info_tables_H_
#define _backup_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_extra_info_tables_t backup_extra_info_tables_t;

#include "backup_ip_info.h"



typedef struct backup_extra_info_tables_t {
    struct backup_ip_info_t *ip_info; //model

    int _library_owned; // Is the library responsible for freeing this object?
} backup_extra_info_tables_t;

__attribute__((deprecated)) backup_extra_info_tables_t *backup_extra_info_tables_create(
    backup_ip_info_t *ip_info
);

void backup_extra_info_tables_free(backup_extra_info_tables_t *backup_extra_info_tables);

backup_extra_info_tables_t *backup_extra_info_tables_parseFromJSON(cJSON *backup_extra_info_tablesJSON);

cJSON *backup_extra_info_tables_convertToJSON(backup_extra_info_tables_t *backup_extra_info_tables);

#endif /* _backup_extra_info_tables_H_ */

