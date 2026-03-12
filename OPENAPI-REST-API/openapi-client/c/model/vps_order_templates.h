/*
 * vps_order_templates.h
 *
 * Templates
 */

#ifndef _vps_order_templates_H_
#define _vps_order_templates_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_templates_t vps_order_templates_t;

#include "vps_order_templates_hyperv.h"



typedef struct vps_order_templates_t {
    struct vps_order_templates_hyperv_t *hyperv; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_templates_t;

__attribute__((deprecated)) vps_order_templates_t *vps_order_templates_create(
    vps_order_templates_hyperv_t *hyperv
);

void vps_order_templates_free(vps_order_templates_t *vps_order_templates);

vps_order_templates_t *vps_order_templates_parseFromJSON(cJSON *vps_order_templatesJSON);

cJSON *vps_order_templates_convertToJSON(vps_order_templates_t *vps_order_templates);

#endif /* _vps_order_templates_H_ */

