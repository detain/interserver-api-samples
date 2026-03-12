/*
 * home_services_backups.h
 *
 * 
 */

#ifndef _home_services_backups_H_
#define _home_services_backups_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_backups_t home_services_backups_t;




typedef struct home_services_backups_t {
    list_t *links; //primitive container
    int count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_backups_t;

__attribute__((deprecated)) home_services_backups_t *home_services_backups_create(
    list_t *links,
    int count
);

void home_services_backups_free(home_services_backups_t *home_services_backups);

home_services_backups_t *home_services_backups_parseFromJSON(cJSON *home_services_backupsJSON);

cJSON *home_services_backups_convertToJSON(home_services_backups_t *home_services_backups);

#endif /* _home_services_backups_H_ */

