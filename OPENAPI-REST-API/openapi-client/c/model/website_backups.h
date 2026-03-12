/*
 * website_backups.h
 *
 * List of available backups for a webhosting service with their names and sizes.
 */

#ifndef _website_backups_H_
#define _website_backups_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_backups_t website_backups_t;

#include "website_backups_inner.h"



typedef struct website_backups_t {

    int _library_owned; // Is the library responsible for freeing this object?
} website_backups_t;

__attribute__((deprecated)) website_backups_t *website_backups_create(
);

void website_backups_free(website_backups_t *website_backups);

website_backups_t *website_backups_parseFromJSON(cJSON *website_backupsJSON);

cJSON *website_backups_convertToJSON(website_backups_t *website_backups);

#endif /* _website_backups_H_ */

