/*
 * vps_traffic_data_section_response.h
 *
 * VPS Traffic Data Section Response
 */

#ifndef _vps_traffic_data_section_response_H_
#define _vps_traffic_data_section_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_data_section_response_t vps_traffic_data_section_response_t;

#include "vps_traffic_data_data_section_response.h"



typedef struct vps_traffic_data_section_response_t {
    char *name; // string
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_data_section_response_t;

__attribute__((deprecated)) vps_traffic_data_section_response_t *vps_traffic_data_section_response_create(
    char *name,
    list_t *data
);

void vps_traffic_data_section_response_free(vps_traffic_data_section_response_t *vps_traffic_data_section_response);

vps_traffic_data_section_response_t *vps_traffic_data_section_response_parseFromJSON(cJSON *vps_traffic_data_section_responseJSON);

cJSON *vps_traffic_data_section_response_convertToJSON(vps_traffic_data_section_response_t *vps_traffic_data_section_response);

#endif /* _vps_traffic_data_section_response_H_ */

