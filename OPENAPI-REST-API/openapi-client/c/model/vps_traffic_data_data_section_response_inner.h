/*
 * vps_traffic_data_data_section_response_inner.h
 *
 * 
 */

#ifndef _vps_traffic_data_data_section_response_inner_H_
#define _vps_traffic_data_data_section_response_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_data_data_section_response_inner_t vps_traffic_data_data_section_response_inner_t;




typedef struct vps_traffic_data_data_section_response_inner_t {

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_data_data_section_response_inner_t;

__attribute__((deprecated)) vps_traffic_data_data_section_response_inner_t *vps_traffic_data_data_section_response_inner_create(
);

void vps_traffic_data_data_section_response_inner_free(vps_traffic_data_data_section_response_inner_t *vps_traffic_data_data_section_response_inner);

vps_traffic_data_data_section_response_inner_t *vps_traffic_data_data_section_response_inner_parseFromJSON(cJSON *vps_traffic_data_data_section_response_innerJSON);

cJSON *vps_traffic_data_data_section_response_inner_convertToJSON(vps_traffic_data_data_section_response_inner_t *vps_traffic_data_data_section_response_inner);

#endif /* _vps_traffic_data_data_section_response_inner_H_ */

