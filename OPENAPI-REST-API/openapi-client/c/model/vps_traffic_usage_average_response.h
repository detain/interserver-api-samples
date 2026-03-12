/*
 * vps_traffic_usage_average_response.h
 *
 * VPS Traffic Usage Average Section
 */

#ifndef _vps_traffic_usage_average_response_H_
#define _vps_traffic_usage_average_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_usage_average_response_t vps_traffic_usage_average_response_t;

#include "vps_traffic_usage_average_section_response.h"



typedef struct vps_traffic_usage_average_response_t {
    struct vps_traffic_usage_average_section_response_t *in; //model
    struct vps_traffic_usage_average_section_response_t *out; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_usage_average_response_t;

__attribute__((deprecated)) vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_create(
    vps_traffic_usage_average_section_response_t *in,
    vps_traffic_usage_average_section_response_t *out
);

void vps_traffic_usage_average_response_free(vps_traffic_usage_average_response_t *vps_traffic_usage_average_response);

vps_traffic_usage_average_response_t *vps_traffic_usage_average_response_parseFromJSON(cJSON *vps_traffic_usage_average_responseJSON);

cJSON *vps_traffic_usage_average_response_convertToJSON(vps_traffic_usage_average_response_t *vps_traffic_usage_average_response);

#endif /* _vps_traffic_usage_average_response_H_ */

