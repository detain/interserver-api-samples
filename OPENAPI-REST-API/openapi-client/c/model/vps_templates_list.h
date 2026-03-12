/*
 * vps_templates_list.h
 *
 * A listing of the OS Templates available for use.
 */

#ifndef _vps_templates_list_H_
#define _vps_templates_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_templates_list_t vps_templates_list_t;

#include "vps_template_row.h"



typedef struct vps_templates_list_t {
    list_t *templates; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vps_templates_list_t;

__attribute__((deprecated)) vps_templates_list_t *vps_templates_list_create(
    list_t *templates
);

void vps_templates_list_free(vps_templates_list_t *vps_templates_list);

vps_templates_list_t *vps_templates_list_parseFromJSON(cJSON *vps_templates_listJSON);

cJSON *vps_templates_list_convertToJSON(vps_templates_list_t *vps_templates_list);

#endif /* _vps_templates_list_H_ */

