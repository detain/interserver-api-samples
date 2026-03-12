/*
 * vps_order_location_stock_1.h
 *
 * 
 */

#ifndef _vps_order_location_stock_1_H_
#define _vps_order_location_stock_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_location_stock_1_t vps_order_location_stock_1_t;




typedef struct vps_order_location_stock_1_t {
    int kvm; //boolean
    int kvmstorage; //boolean
    int hyperv; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_location_stock_1_t;

__attribute__((deprecated)) vps_order_location_stock_1_t *vps_order_location_stock_1_create(
    int kvm,
    int kvmstorage,
    int hyperv
);

void vps_order_location_stock_1_free(vps_order_location_stock_1_t *vps_order_location_stock_1);

vps_order_location_stock_1_t *vps_order_location_stock_1_parseFromJSON(cJSON *vps_order_location_stock_1JSON);

cJSON *vps_order_location_stock_1_convertToJSON(vps_order_location_stock_1_t *vps_order_location_stock_1);

#endif /* _vps_order_location_stock_1_H_ */

