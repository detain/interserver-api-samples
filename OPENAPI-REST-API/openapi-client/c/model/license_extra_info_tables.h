/*
 * license_extra_info_tables.h
 *
 * 
 */

#ifndef _license_extra_info_tables_H_
#define _license_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_extra_info_tables_t license_extra_info_tables_t;

#include "license_ip_info.h"



typedef struct license_extra_info_tables_t {
    struct license_ip_info_t *ip_info; //model

    int _library_owned; // Is the library responsible for freeing this object?
} license_extra_info_tables_t;

__attribute__((deprecated)) license_extra_info_tables_t *license_extra_info_tables_create(
    license_ip_info_t *ip_info
);

void license_extra_info_tables_free(license_extra_info_tables_t *license_extra_info_tables);

license_extra_info_tables_t *license_extra_info_tables_parseFromJSON(cJSON *license_extra_info_tablesJSON);

cJSON *license_extra_info_tables_convertToJSON(license_extra_info_tables_t *license_extra_info_tables);

#endif /* _license_extra_info_tables_H_ */

