/*
 * backup_order_put_request.h
 *
 * Parameters to submit to validate your backup order
 */

#ifndef _backup_order_put_request_H_
#define _backup_order_put_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_order_put_request_t backup_order_put_request_t;




typedef struct backup_order_put_request_t {
    int *validate_only; //boolean
    int *service_type; //numeric
    char *coupon; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_order_put_request_t;

__attribute__((deprecated)) backup_order_put_request_t *backup_order_put_request_create(
    int *validate_only,
    int *service_type,
    char *coupon
);

void backup_order_put_request_free(backup_order_put_request_t *backup_order_put_request);

backup_order_put_request_t *backup_order_put_request_parseFromJSON(cJSON *backup_order_put_requestJSON);

cJSON *backup_order_put_request_convertToJSON(backup_order_put_request_t *backup_order_put_request);

#endif /* _backup_order_put_request_H_ */

