/*
 * vps_traffic_history_response.h
 *
 * VPS Traffic Data History Section
 */

#ifndef _vps_traffic_history_response_H_
#define _vps_traffic_history_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_history_response_t vps_traffic_history_response_t;

#include "vps_traffic_history_section_response.h"



typedef struct vps_traffic_history_response_t {
    struct vps_traffic_history_section_response_t *hour; //model
    struct vps_traffic_history_section_response_t *day; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_history_response_t;

__attribute__((deprecated)) vps_traffic_history_response_t *vps_traffic_history_response_create(
    vps_traffic_history_section_response_t *hour,
    vps_traffic_history_section_response_t *day
);

void vps_traffic_history_response_free(vps_traffic_history_response_t *vps_traffic_history_response);

vps_traffic_history_response_t *vps_traffic_history_response_parseFromJSON(cJSON *vps_traffic_history_responseJSON);

cJSON *vps_traffic_history_response_convertToJSON(vps_traffic_history_response_t *vps_traffic_history_response);

#endif /* _vps_traffic_history_response_H_ */

