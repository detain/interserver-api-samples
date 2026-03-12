/*
 * backups_order_service_types.h
 *
 * 
 */

#ifndef _backups_order_service_types_H_
#define _backups_order_service_types_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backups_order_service_types_t backups_order_service_types_t;




typedef struct backups_order_service_types_t {
    struct backups_order_service_types_t *_11006; //model

    int _library_owned; // Is the library responsible for freeing this object?
} backups_order_service_types_t;

__attribute__((deprecated)) backups_order_service_types_t *backups_order_service_types_create(
    backups_order_service_types_t *_11006
);

void backups_order_service_types_free(backups_order_service_types_t *backups_order_service_types);

backups_order_service_types_t *backups_order_service_types_parseFromJSON(cJSON *backups_order_service_typesJSON);

cJSON *backups_order_service_types_convertToJSON(backups_order_service_types_t *backups_order_service_types);

#endif /* _backups_order_service_types_H_ */

