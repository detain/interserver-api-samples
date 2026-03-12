/*
 * vps_order_templates_hyperv_windows.h
 *
 * 
 */

#ifndef _vps_order_templates_hyperv_windows_H_
#define _vps_order_templates_hyperv_windows_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_templates_hyperv_windows_t vps_order_templates_hyperv_windows_t;




typedef struct vps_order_templates_hyperv_windows_t {
    char *windows2019_standard; // string
    char *windows2022; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_templates_hyperv_windows_t;

__attribute__((deprecated)) vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_create(
    char *windows2019_standard,
    char *windows2022
);

void vps_order_templates_hyperv_windows_free(vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows);

vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_parseFromJSON(cJSON *vps_order_templates_hyperv_windowsJSON);

cJSON *vps_order_templates_hyperv_windows_convertToJSON(vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows);

#endif /* _vps_order_templates_hyperv_windows_H_ */

