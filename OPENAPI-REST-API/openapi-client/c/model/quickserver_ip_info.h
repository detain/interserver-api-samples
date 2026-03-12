/*
 * quickserver_ip_info.h
 *
 * IP address information table for a QuickServer service.
 */

#ifndef _quickserver_ip_info_H_
#define _quickserver_ip_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_ip_info_t quickserver_ip_info_t;

#include "quickserver_ip_table_row.h"



typedef struct quickserver_ip_info_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_ip_info_t;

__attribute__((deprecated)) quickserver_ip_info_t *quickserver_ip_info_create(
    char *title,
    list_t *rows
);

void quickserver_ip_info_free(quickserver_ip_info_t *quickserver_ip_info);

quickserver_ip_info_t *quickserver_ip_info_parseFromJSON(cJSON *quickserver_ip_infoJSON);

cJSON *quickserver_ip_info_convertToJSON(quickserver_ip_info_t *quickserver_ip_info);

#endif /* _quickserver_ip_info_H_ */

