/*
 * vps_order_location_stock.h
 *
 * Location Stock
 */

#ifndef _vps_order_location_stock_H_
#define _vps_order_location_stock_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_location_stock_t vps_order_location_stock_t;

#include "vps_order_location_stock_1.h"



typedef struct vps_order_location_stock_t {
    struct vps_order_location_stock_1_t *_1; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_location_stock_t;

__attribute__((deprecated)) vps_order_location_stock_t *vps_order_location_stock_create(
    vps_order_location_stock_1_t *_1
);

void vps_order_location_stock_free(vps_order_location_stock_t *vps_order_location_stock);

vps_order_location_stock_t *vps_order_location_stock_parseFromJSON(cJSON *vps_order_location_stockJSON);

cJSON *vps_order_location_stock_convertToJSON(vps_order_location_stock_t *vps_order_location_stock);

#endif /* _vps_order_location_stock_H_ */

