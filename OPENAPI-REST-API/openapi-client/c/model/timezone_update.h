/*
 * timezone_update.h
 *
 * The request to update the time zone of a vps.
 */

#ifndef _timezone_update_H_
#define _timezone_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_update_t timezone_update_t;




typedef struct timezone_update_t {
    char *timezone; // string

    int _library_owned; // Is the library responsible for freeing this object?
} timezone_update_t;

__attribute__((deprecated)) timezone_update_t *timezone_update_create(
    char *timezone
);

void timezone_update_free(timezone_update_t *timezone_update);

timezone_update_t *timezone_update_parseFromJSON(cJSON *timezone_updateJSON);

cJSON *timezone_update_convertToJSON(timezone_update_t *timezone_update);

#endif /* _timezone_update_H_ */

