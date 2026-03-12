/*
 * quickserver_order_version.h
 *
 * Version details.
 */

#ifndef _quickserver_order_version_H_
#define _quickserver_order_version_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_version_t quickserver_order_version_t;

#include "quickserver_order_version_centosstream8.h"



typedef struct quickserver_order_version_t {
    struct quickserver_order_version_centosstream8_t *centosstream_8; //model

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_version_t;

__attribute__((deprecated)) quickserver_order_version_t *quickserver_order_version_create(
    quickserver_order_version_centosstream8_t *centosstream_8
);

void quickserver_order_version_free(quickserver_order_version_t *quickserver_order_version);

quickserver_order_version_t *quickserver_order_version_parseFromJSON(cJSON *quickserver_order_versionJSON);

cJSON *quickserver_order_version_convertToJSON(quickserver_order_version_t *quickserver_order_version);

#endif /* _quickserver_order_version_H_ */

