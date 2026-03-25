/*
 * home_services_vps.h
 *
 * 
 */

#ifndef _home_services_vps_H_
#define _home_services_vps_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_vps_t home_services_vps_t;

#include "home_services_vps_links.h"



typedef struct home_services_vps_t {
    struct home_services_vps_links_t *links; //model
    int *count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_vps_t;

__attribute__((deprecated)) home_services_vps_t *home_services_vps_create(
    home_services_vps_links_t *links,
    int *count
);

void home_services_vps_free(home_services_vps_t *home_services_vps);

home_services_vps_t *home_services_vps_parseFromJSON(cJSON *home_services_vpsJSON);

cJSON *home_services_vps_convertToJSON(home_services_vps_t *home_services_vps);

#endif /* _home_services_vps_H_ */

