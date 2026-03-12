/*
 * quickserver_order.h
 *
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 */

#ifndef _quickserver_order_H_
#define _quickserver_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_t quickserver_order_t;

#include "quickserver_order_distro_sel.h"
#include "quickserver_order_server_details.h"
#include "quickserver_order_templates.h"
#include "quickserver_order_version.h"



typedef struct quickserver_order_t {
    char *qs_id; // string
    struct quickserver_order_server_details_t *server_details; //model
    struct quickserver_order_templates_t *templates; //model
    struct quickserver_order_version_t *version; //model
    struct quickserver_order_distro_sel_t *distro_sel; //model

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_t;

__attribute__((deprecated)) quickserver_order_t *quickserver_order_create(
    char *qs_id,
    quickserver_order_server_details_t *server_details,
    quickserver_order_templates_t *templates,
    quickserver_order_version_t *version,
    quickserver_order_distro_sel_t *distro_sel
);

void quickserver_order_free(quickserver_order_t *quickserver_order);

quickserver_order_t *quickserver_order_parseFromJSON(cJSON *quickserver_orderJSON);

cJSON *quickserver_order_convertToJSON(quickserver_order_t *quickserver_order);

#endif /* _quickserver_order_H_ */

