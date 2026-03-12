/*
 * vps_traffic_usage_response.h
 *
 * VPS Traffic Usage Section
 */

#ifndef _vps_traffic_usage_response_H_
#define _vps_traffic_usage_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_usage_response_t vps_traffic_usage_response_t;

#include "vps_traffic_totals_section_response.h"
#include "vps_traffic_usage_average_response.h"



typedef struct vps_traffic_usage_response_t {
    struct vps_traffic_totals_section_response_t *current; //model
    struct vps_traffic_totals_section_response_t *peak; //model
    struct vps_traffic_usage_average_response_t *average; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_usage_response_t;

__attribute__((deprecated)) vps_traffic_usage_response_t *vps_traffic_usage_response_create(
    vps_traffic_totals_section_response_t *current,
    vps_traffic_totals_section_response_t *peak,
    vps_traffic_usage_average_response_t *average
);

void vps_traffic_usage_response_free(vps_traffic_usage_response_t *vps_traffic_usage_response);

vps_traffic_usage_response_t *vps_traffic_usage_response_parseFromJSON(cJSON *vps_traffic_usage_responseJSON);

cJSON *vps_traffic_usage_response_convertToJSON(vps_traffic_usage_response_t *vps_traffic_usage_response);

#endif /* _vps_traffic_usage_response_H_ */

