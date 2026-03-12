/*
 * config_ids.h
 *
 * Internal configuration IDs mapped from the selected form values for a server order.
 */

#ifndef _config_ids_H_
#define _config_ids_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct config_ids_t config_ids_t;




typedef struct config_ids_t {
    int memory; //numeric
    int hd; //numeric
    int bandwidth; //numeric
    int ips; //numeric
    int os; //numeric
    int cp; //numeric
    int raid; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} config_ids_t;

__attribute__((deprecated)) config_ids_t *config_ids_create(
    int memory,
    int hd,
    int bandwidth,
    int ips,
    int os,
    int cp,
    int raid
);

void config_ids_free(config_ids_t *config_ids);

config_ids_t *config_ids_parseFromJSON(cJSON *config_idsJSON);

cJSON *config_ids_convertToJSON(config_ids_t *config_ids);

#endif /* _config_ids_H_ */

