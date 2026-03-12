/*
 * license_ip_info.h
 *
 * IP address information table for a software license service.
 */

#ifndef _license_ip_info_H_
#define _license_ip_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_ip_info_t license_ip_info_t;

#include "license_ip_info_row.h"



typedef struct license_ip_info_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} license_ip_info_t;

__attribute__((deprecated)) license_ip_info_t *license_ip_info_create(
    char *title,
    list_t *rows
);

void license_ip_info_free(license_ip_info_t *license_ip_info);

license_ip_info_t *license_ip_info_parseFromJSON(cJSON *license_ip_infoJSON);

cJSON *license_ip_info_convertToJSON(license_ip_info_t *license_ip_info);

#endif /* _license_ip_info_H_ */

