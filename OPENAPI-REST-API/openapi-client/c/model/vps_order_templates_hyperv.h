/*
 * vps_order_templates_hyperv.h
 *
 * 
 */

#ifndef _vps_order_templates_hyperv_H_
#define _vps_order_templates_hyperv_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_templates_hyperv_t vps_order_templates_hyperv_t;

#include "vps_order_templates_hyperv_windows.h"



typedef struct vps_order_templates_hyperv_t {
    struct vps_order_templates_hyperv_windows_t *windows; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_templates_hyperv_t;

__attribute__((deprecated)) vps_order_templates_hyperv_t *vps_order_templates_hyperv_create(
    vps_order_templates_hyperv_windows_t *windows
);

void vps_order_templates_hyperv_free(vps_order_templates_hyperv_t *vps_order_templates_hyperv);

vps_order_templates_hyperv_t *vps_order_templates_hyperv_parseFromJSON(cJSON *vps_order_templates_hypervJSON);

cJSON *vps_order_templates_hyperv_convertToJSON(vps_order_templates_hyperv_t *vps_order_templates_hyperv);

#endif /* _vps_order_templates_hyperv_H_ */

