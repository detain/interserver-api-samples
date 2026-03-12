/*
 * affiliate_banner_row.h
 *
 * An affiliate banner image details.
 */

#ifndef _affiliate_banner_row_H_
#define _affiliate_banner_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct affiliate_banner_row_t affiliate_banner_row_t;




typedef struct affiliate_banner_row_t {
    char *image; // string
    char *width; // string
    char *height; // string

    int _library_owned; // Is the library responsible for freeing this object?
} affiliate_banner_row_t;

__attribute__((deprecated)) affiliate_banner_row_t *affiliate_banner_row_create(
    char *image,
    char *width,
    char *height
);

void affiliate_banner_row_free(affiliate_banner_row_t *affiliate_banner_row);

affiliate_banner_row_t *affiliate_banner_row_parseFromJSON(cJSON *affiliate_banner_rowJSON);

cJSON *affiliate_banner_row_convertToJSON(affiliate_banner_row_t *affiliate_banner_row);

#endif /* _affiliate_banner_row_H_ */

