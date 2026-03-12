/*
 * hard_drive.h
 *
 * A hard drive option available for a dedicated server configuration.
 */

#ifndef _hard_drive_H_
#define _hard_drive_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct hard_drive_t hard_drive_t;




typedef struct hard_drive_t {
    int id; //numeric
    char *short_desc; // string
    char *size; // string
    char *drive_type; // string
    double monthly_price; //numeric
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} hard_drive_t;

__attribute__((deprecated)) hard_drive_t *hard_drive_create(
    int id,
    char *short_desc,
    char *size,
    char *drive_type,
    double monthly_price,
    char *monthly_price_display
);

void hard_drive_free(hard_drive_t *hard_drive);

hard_drive_t *hard_drive_parseFromJSON(cJSON *hard_driveJSON);

cJSON *hard_drive_convertToJSON(hard_drive_t *hard_drive);

#endif /* _hard_drive_H_ */

