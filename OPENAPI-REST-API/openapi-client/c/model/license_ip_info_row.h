/*
 * license_ip_info_row.h
 *
 * A single row in the license IP information table.
 */

#ifndef _license_ip_info_row_H_
#define _license_ip_info_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_ip_info_row_t license_ip_info_row_t;




typedef struct license_ip_info_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} license_ip_info_row_t;

__attribute__((deprecated)) license_ip_info_row_t *license_ip_info_row_create(
    char *desc,
    char *value
);

void license_ip_info_row_free(license_ip_info_row_t *license_ip_info_row);

license_ip_info_row_t *license_ip_info_row_parseFromJSON(cJSON *license_ip_info_rowJSON);

cJSON *license_ip_info_row_convertToJSON(license_ip_info_row_t *license_ip_info_row);

#endif /* _license_ip_info_row_H_ */

