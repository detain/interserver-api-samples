/*
 * buy_it_now_row.h
 *
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 */

#ifndef _buy_it_now_row_H_
#define _buy_it_now_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buy_it_now_row_t buy_it_now_row_t;

#include "buy_it_now_row_cpu_inner.h"



typedef struct buy_it_now_row_t {
    char *server_id; // string
    list_t *cpu; //nonprimitive container
    char *memory; // string
    list_t* disk; //map
    char *bandwidth; // string
    char *ips; // string
    char *location; // string
    int *price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} buy_it_now_row_t;

__attribute__((deprecated)) buy_it_now_row_t *buy_it_now_row_create(
    char *server_id,
    list_t *cpu,
    char *memory,
    list_t* disk,
    char *bandwidth,
    char *ips,
    char *location,
    int *price
);

void buy_it_now_row_free(buy_it_now_row_t *buy_it_now_row);

buy_it_now_row_t *buy_it_now_row_parseFromJSON(cJSON *buy_it_now_rowJSON);

cJSON *buy_it_now_row_convertToJSON(buy_it_now_row_t *buy_it_now_row);

#endif /* _buy_it_now_row_H_ */

