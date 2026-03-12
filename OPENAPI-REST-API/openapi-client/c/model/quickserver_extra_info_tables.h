/*
 * quickserver_extra_info_tables.h
 *
 * 
 */

#ifndef _quickserver_extra_info_tables_H_
#define _quickserver_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_extra_info_tables_t quickserver_extra_info_tables_t;

#include "quickserver_addons.h"
#include "quickserver_ip_info.h"



typedef struct quickserver_extra_info_tables_t {
    struct quickserver_ip_info_t *ip_info; //model
    struct quickserver_addons_t *addons; //model

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_extra_info_tables_t;

__attribute__((deprecated)) quickserver_extra_info_tables_t *quickserver_extra_info_tables_create(
    quickserver_ip_info_t *ip_info,
    quickserver_addons_t *addons
);

void quickserver_extra_info_tables_free(quickserver_extra_info_tables_t *quickserver_extra_info_tables);

quickserver_extra_info_tables_t *quickserver_extra_info_tables_parseFromJSON(cJSON *quickserver_extra_info_tablesJSON);

cJSON *quickserver_extra_info_tables_convertToJSON(quickserver_extra_info_tables_t *quickserver_extra_info_tables);

#endif /* _quickserver_extra_info_tables_H_ */

