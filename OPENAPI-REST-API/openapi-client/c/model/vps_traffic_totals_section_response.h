/*
 * vps_traffic_totals_section_response.h
 *
 * VPS Traffic Totals Secttions Data
 */

#ifndef _vps_traffic_totals_section_response_H_
#define _vps_traffic_totals_section_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_totals_section_response_t vps_traffic_totals_section_response_t;




typedef struct vps_traffic_totals_section_response_t {
    long in; //numeric
    long out; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_totals_section_response_t;

__attribute__((deprecated)) vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_create(
    long in,
    long out
);

void vps_traffic_totals_section_response_free(vps_traffic_totals_section_response_t *vps_traffic_totals_section_response);

vps_traffic_totals_section_response_t *vps_traffic_totals_section_response_parseFromJSON(cJSON *vps_traffic_totals_section_responseJSON);

cJSON *vps_traffic_totals_section_response_convertToJSON(vps_traffic_totals_section_response_t *vps_traffic_totals_section_response);

#endif /* _vps_traffic_totals_section_response_H_ */

