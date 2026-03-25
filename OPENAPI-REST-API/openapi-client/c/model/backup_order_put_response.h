/*
 * backup_order_put_response.h
 *
 * Backup Order validation response
 */

#ifndef _backup_order_put_response_H_
#define _backup_order_put_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_order_put_response_t backup_order_put_response_t;




typedef struct backup_order_put_response_t {
    int *_continue; //boolean
    list_t *errors; //primitive container
    int *service_type; //numeric
    char *service_cost; // string
    char *original_cost; // string
    char *repeat_service_cost; // string
    char *hostname; // string
    char *password; // string
    char *coupon; // string
    int *coupon_code; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} backup_order_put_response_t;

__attribute__((deprecated)) backup_order_put_response_t *backup_order_put_response_create(
    int *_continue,
    list_t *errors,
    int *service_type,
    char *service_cost,
    char *original_cost,
    char *repeat_service_cost,
    char *hostname,
    char *password,
    char *coupon,
    int *coupon_code
);

void backup_order_put_response_free(backup_order_put_response_t *backup_order_put_response);

backup_order_put_response_t *backup_order_put_response_parseFromJSON(cJSON *backup_order_put_responseJSON);

cJSON *backup_order_put_response_convertToJSON(backup_order_put_response_t *backup_order_put_response);

#endif /* _backup_order_put_response_H_ */

