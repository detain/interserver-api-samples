/*
 * quickserver_order_version_centosstream8.h
 *
 * 
 */

#ifndef _quickserver_order_version_centosstream8_H_
#define _quickserver_order_version_centosstream8_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_version_centosstream8_t quickserver_order_version_centosstream8_t;




typedef struct quickserver_order_version_centosstream8_t {
    char *centosstream_8; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_version_centosstream8_t;

__attribute__((deprecated)) quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_create(
    char *centosstream_8
);

void quickserver_order_version_centosstream8_free(quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8);

quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_parseFromJSON(cJSON *quickserver_order_version_centosstream8JSON);

cJSON *quickserver_order_version_centosstream8_convertToJSON(quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8);

#endif /* _quickserver_order_version_centosstream8_H_ */

