/*
 * vps_traffic_totals_resposne.h
 *
 * VPS Traffic Totals Section
 */

#ifndef _vps_traffic_totals_resposne_H_
#define _vps_traffic_totals_resposne_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_totals_resposne_t vps_traffic_totals_resposne_t;

#include "vps_traffic_totals_section_response.h"



typedef struct vps_traffic_totals_resposne_t {
    struct vps_traffic_totals_section_response_t *day; //model
    struct vps_traffic_totals_section_response_t *month; //model
    struct vps_traffic_totals_section_response_t *year; //model
    struct vps_traffic_totals_section_response_t *all; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_totals_resposne_t;

__attribute__((deprecated)) vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_create(
    vps_traffic_totals_section_response_t *day,
    vps_traffic_totals_section_response_t *month,
    vps_traffic_totals_section_response_t *year,
    vps_traffic_totals_section_response_t *all
);

void vps_traffic_totals_resposne_free(vps_traffic_totals_resposne_t *vps_traffic_totals_resposne);

vps_traffic_totals_resposne_t *vps_traffic_totals_resposne_parseFromJSON(cJSON *vps_traffic_totals_resposneJSON);

cJSON *vps_traffic_totals_resposne_convertToJSON(vps_traffic_totals_resposne_t *vps_traffic_totals_resposne);

#endif /* _vps_traffic_totals_resposne_H_ */

