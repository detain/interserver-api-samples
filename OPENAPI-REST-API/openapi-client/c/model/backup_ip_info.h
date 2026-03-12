/*
 * backup_ip_info.h
 *
 * IP address information table for a backup service.
 */

#ifndef _backup_ip_info_H_
#define _backup_ip_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_ip_info_t backup_ip_info_t;

#include "backup_ip_info_row.h"



typedef struct backup_ip_info_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} backup_ip_info_t;

__attribute__((deprecated)) backup_ip_info_t *backup_ip_info_create(
    char *title,
    list_t *rows
);

void backup_ip_info_free(backup_ip_info_t *backup_ip_info);

backup_ip_info_t *backup_ip_info_parseFromJSON(cJSON *backup_ip_infoJSON);

cJSON *backup_ip_info_convertToJSON(backup_ip_info_t *backup_ip_info);

#endif /* _backup_ip_info_H_ */

