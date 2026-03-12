/*
 * server_extra_info_tables.h
 *
 * 
 */

#ifndef _server_extra_info_tables_H_
#define _server_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_extra_info_tables_t server_extra_info_tables_t;

#include "server_assets.h"



typedef struct server_extra_info_tables_t {
    struct server_assets_t *assets; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_extra_info_tables_t;

__attribute__((deprecated)) server_extra_info_tables_t *server_extra_info_tables_create(
    server_assets_t *assets
);

void server_extra_info_tables_free(server_extra_info_tables_t *server_extra_info_tables);

server_extra_info_tables_t *server_extra_info_tables_parseFromJSON(cJSON *server_extra_info_tablesJSON);

cJSON *server_extra_info_tables_convertToJSON(server_extra_info_tables_t *server_extra_info_tables);

#endif /* _server_extra_info_tables_H_ */

