/*
 * backup_order_post_response.h
 *
 * Backup Order Placement Response
 */

#ifndef _backup_order_post_response_H_
#define _backup_order_post_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_order_post_response_t backup_order_post_response_t;

#include "backup_order_post_response_cj_params.h"



typedef struct backup_order_post_response_t {
    int _continue; //boolean
    list_t *errors; //primitive container
    char *total_cost; // string
    char *iid; // string
    list_t *iids; //primitive container
    list_t *real_iids; //primitive container
    int service_id; //numeric
    char *invoice_description; // string
    struct backup_order_post_response_cj_params_t *cj_params; //model

    int _library_owned; // Is the library responsible for freeing this object?
} backup_order_post_response_t;

__attribute__((deprecated)) backup_order_post_response_t *backup_order_post_response_create(
    int _continue,
    list_t *errors,
    char *total_cost,
    char *iid,
    list_t *iids,
    list_t *real_iids,
    int service_id,
    char *invoice_description,
    backup_order_post_response_cj_params_t *cj_params
);

void backup_order_post_response_free(backup_order_post_response_t *backup_order_post_response);

backup_order_post_response_t *backup_order_post_response_parseFromJSON(cJSON *backup_order_post_responseJSON);

cJSON *backup_order_post_response_convertToJSON(backup_order_post_response_t *backup_order_post_response);

#endif /* _backup_order_post_response_H_ */

