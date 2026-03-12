/*
 * backup_order_post_response_cj_params.h
 *
 * 
 */

#ifndef _backup_order_post_response_cj_params_H_
#define _backup_order_post_response_cj_params_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_order_post_response_cj_params_t backup_order_post_response_cj_params_t;




typedef struct backup_order_post_response_cj_params_t {
    char *container_tag_id; // string
    char *cid; // string
    char *oid; // string
    char *type; // string
    char *item1; // string
    char *amt1; // string
    int qty1; //numeric
    char *currency; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_order_post_response_cj_params_t;

__attribute__((deprecated)) backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_create(
    char *container_tag_id,
    char *cid,
    char *oid,
    char *type,
    char *item1,
    char *amt1,
    int qty1,
    char *currency
);

void backup_order_post_response_cj_params_free(backup_order_post_response_cj_params_t *backup_order_post_response_cj_params);

backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_parseFromJSON(cJSON *backup_order_post_response_cj_paramsJSON);

cJSON *backup_order_post_response_cj_params_convertToJSON(backup_order_post_response_cj_params_t *backup_order_post_response_cj_params);

#endif /* _backup_order_post_response_cj_params_H_ */

