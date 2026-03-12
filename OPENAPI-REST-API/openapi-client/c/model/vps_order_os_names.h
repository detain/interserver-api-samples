/*
 * vps_order_os_names.h
 *
 * OS Names
 */

#ifndef _vps_order_os_names_H_
#define _vps_order_os_names_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_os_names_t vps_order_os_names_t;




typedef struct vps_order_os_names_t {
    char *opensuse; // string
    char *ubuntu; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_os_names_t;

__attribute__((deprecated)) vps_order_os_names_t *vps_order_os_names_create(
    char *opensuse,
    char *ubuntu
);

void vps_order_os_names_free(vps_order_os_names_t *vps_order_os_names);

vps_order_os_names_t *vps_order_os_names_parseFromJSON(cJSON *vps_order_os_namesJSON);

cJSON *vps_order_os_names_convertToJSON(vps_order_os_names_t *vps_order_os_names);

#endif /* _vps_order_os_names_H_ */

