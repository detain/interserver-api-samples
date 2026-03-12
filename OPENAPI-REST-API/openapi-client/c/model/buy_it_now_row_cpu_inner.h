/*
 * buy_it_now_row_cpu_inner.h
 *
 * 
 */

#ifndef _buy_it_now_row_cpu_inner_H_
#define _buy_it_now_row_cpu_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buy_it_now_row_cpu_inner_t buy_it_now_row_cpu_inner_t;

#include "buy_it_now_row_cpu_inner_one_of.h"



typedef struct buy_it_now_row_cpu_inner_t {
    char *img; // string
    char *type; // string
    char *speed; // string
    char *num_cpus; // string
    char *num_cores; // string

    int _library_owned; // Is the library responsible for freeing this object?
} buy_it_now_row_cpu_inner_t;

__attribute__((deprecated)) buy_it_now_row_cpu_inner_t *buy_it_now_row_cpu_inner_create(
    char *img,
    char *type,
    char *speed,
    char *num_cpus,
    char *num_cores
);

void buy_it_now_row_cpu_inner_free(buy_it_now_row_cpu_inner_t *buy_it_now_row_cpu_inner);

buy_it_now_row_cpu_inner_t *buy_it_now_row_cpu_inner_parseFromJSON(cJSON *buy_it_now_row_cpu_innerJSON);

cJSON *buy_it_now_row_cpu_inner_convertToJSON(buy_it_now_row_cpu_inner_t *buy_it_now_row_cpu_inner);

#endif /* _buy_it_now_row_cpu_inner_H_ */

