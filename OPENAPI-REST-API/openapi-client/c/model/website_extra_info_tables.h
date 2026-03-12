/*
 * website_extra_info_tables.h
 *
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 */

#ifndef _website_extra_info_tables_H_
#define _website_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_extra_info_tables_t website_extra_info_tables_t;

#include "website_table.h"



typedef struct website_extra_info_tables_t {
    struct website_table_t *links; //model
    struct website_table_t *preview; //model
    struct website_table_t *dns; //model

    int _library_owned; // Is the library responsible for freeing this object?
} website_extra_info_tables_t;

__attribute__((deprecated)) website_extra_info_tables_t *website_extra_info_tables_create(
    website_table_t *links,
    website_table_t *preview,
    website_table_t *dns
);

void website_extra_info_tables_free(website_extra_info_tables_t *website_extra_info_tables);

website_extra_info_tables_t *website_extra_info_tables_parseFromJSON(cJSON *website_extra_info_tablesJSON);

cJSON *website_extra_info_tables_convertToJSON(website_extra_info_tables_t *website_extra_info_tables);

#endif /* _website_extra_info_tables_H_ */

