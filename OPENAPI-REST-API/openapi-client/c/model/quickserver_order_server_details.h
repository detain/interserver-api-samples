/*
 * quickserver_order_server_details.h
 *
 * Server details.
 */

#ifndef _quickserver_order_server_details_H_
#define _quickserver_order_server_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_server_details_t quickserver_order_server_details_t;

#include "quickserver_order_server_details381.h"



typedef struct quickserver_order_server_details_t {
    struct quickserver_order_server_details381_t *_381; //model

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_server_details_t;

__attribute__((deprecated)) quickserver_order_server_details_t *quickserver_order_server_details_create(
    quickserver_order_server_details381_t *_381
);

void quickserver_order_server_details_free(quickserver_order_server_details_t *quickserver_order_server_details);

quickserver_order_server_details_t *quickserver_order_server_details_parseFromJSON(cJSON *quickserver_order_server_detailsJSON);

cJSON *quickserver_order_server_details_convertToJSON(quickserver_order_server_details_t *quickserver_order_server_details);

#endif /* _quickserver_order_server_details_H_ */

