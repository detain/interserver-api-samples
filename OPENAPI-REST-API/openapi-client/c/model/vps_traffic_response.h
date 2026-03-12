/*
 * vps_traffic_response.h
 *
 * VPS Traffic Information
 */

#ifndef _vps_traffic_response_H_
#define _vps_traffic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_traffic_response_t vps_traffic_response_t;

#include "vps_traffic_data_section_response.h"
#include "vps_traffic_history_response.h"
#include "vps_traffic_totals_resposne.h"
#include "vps_traffic_usage_response.h"



typedef struct vps_traffic_response_t {
    char *name; // string
    char *target; // string
    int interval; //numeric
    struct vps_traffic_history_response_t *history; //model
    char *last; //date time
    list_t *times; //primitive container
    struct vps_traffic_totals_resposne_t *totals; //model
    struct vps_traffic_usage_response_t *usage; //model
    list_t *data; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vps_traffic_response_t;

__attribute__((deprecated)) vps_traffic_response_t *vps_traffic_response_create(
    char *name,
    char *target,
    int interval,
    vps_traffic_history_response_t *history,
    char *last,
    list_t *times,
    vps_traffic_totals_resposne_t *totals,
    vps_traffic_usage_response_t *usage,
    list_t *data
);

void vps_traffic_response_free(vps_traffic_response_t *vps_traffic_response);

vps_traffic_response_t *vps_traffic_response_parseFromJSON(cJSON *vps_traffic_responseJSON);

cJSON *vps_traffic_response_convertToJSON(vps_traffic_response_t *vps_traffic_response);

#endif /* _vps_traffic_response_H_ */

