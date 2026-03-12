/*
 * home_details_modules_backups.h
 *
 * Dashboard module configuration for backup storage services.
 */

#ifndef _home_details_modules_backups_H_
#define _home_details_modules_backups_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_details_modules_backups_t home_details_modules_backups_t;




typedef struct home_details_modules_backups_t {
    char *icon; // string
    char *view_link; // string
    char *heading; // string
    char *buy_link; // string
    char *list_link; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_details_modules_backups_t;

__attribute__((deprecated)) home_details_modules_backups_t *home_details_modules_backups_create(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
);

void home_details_modules_backups_free(home_details_modules_backups_t *home_details_modules_backups);

home_details_modules_backups_t *home_details_modules_backups_parseFromJSON(cJSON *home_details_modules_backupsJSON);

cJSON *home_details_modules_backups_convertToJSON(home_details_modules_backups_t *home_details_modules_backups);

#endif /* _home_details_modules_backups_H_ */

