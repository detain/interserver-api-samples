/*
 * vps_order_put_response.h
 *
 * Response from VPS order validation request
 */

#ifndef _vps_order_put_response_H_
#define _vps_order_put_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_put_response_t vps_order_put_response_t;

#include "any_type.h"



typedef struct vps_order_put_response_t {
    int *_continue; //boolean
    list_t *errors; //nonprimitive container
    int *coupon_code; //numeric
    int *service_cost; //numeric
    int *slice_cost; //numeric
    int *service_type; //numeric
    int *repeat_slice_cost; //numeric
    int *original_slice_cost; //numeric
    int *original_cost; //numeric
    int *repeat_service_cost; //numeric
    int *monthly_service_cost; //numeric
    char *custid; // string
    char *os; // string
    char *slices; // string
    char *platform; // string
    char *controlpanel; // string
    int *period; //numeric
    int *location; //numeric
    char *version; // string
    char *hostname; // string
    char *coupon; // string
    char *rootpass; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_put_response_t;

__attribute__((deprecated)) vps_order_put_response_t *vps_order_put_response_create(
    int *_continue,
    list_t *errors,
    int *coupon_code,
    int *service_cost,
    int *slice_cost,
    int *service_type,
    int *repeat_slice_cost,
    int *original_slice_cost,
    int *original_cost,
    int *repeat_service_cost,
    int *monthly_service_cost,
    char *custid,
    char *os,
    char *slices,
    char *platform,
    char *controlpanel,
    int *period,
    int *location,
    char *version,
    char *hostname,
    char *coupon,
    char *rootpass
);

void vps_order_put_response_free(vps_order_put_response_t *vps_order_put_response);

vps_order_put_response_t *vps_order_put_response_parseFromJSON(cJSON *vps_order_put_responseJSON);

cJSON *vps_order_put_response_convertToJSON(vps_order_put_response_t *vps_order_put_response);

#endif /* _vps_order_put_response_H_ */

