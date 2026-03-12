/*
 * buy_it_now_row_cpu_inner_one_of.h
 *
 * 
 */

#ifndef _buy_it_now_row_cpu_inner_one_of_H_
#define _buy_it_now_row_cpu_inner_one_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buy_it_now_row_cpu_inner_one_of_t buy_it_now_row_cpu_inner_one_of_t;




typedef struct buy_it_now_row_cpu_inner_one_of_t {
    char *img; // string
    char *type; // string
    char *speed; // string
    char *num_cpus; // string
    char *num_cores; // string

    int _library_owned; // Is the library responsible for freeing this object?
} buy_it_now_row_cpu_inner_one_of_t;

__attribute__((deprecated)) buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_create(
    char *img,
    char *type,
    char *speed,
    char *num_cpus,
    char *num_cores
);

void buy_it_now_row_cpu_inner_one_of_free(buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of);

buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of_parseFromJSON(cJSON *buy_it_now_row_cpu_inner_one_ofJSON);

cJSON *buy_it_now_row_cpu_inner_one_of_convertToJSON(buy_it_now_row_cpu_inner_one_of_t *buy_it_now_row_cpu_inner_one_of);

#endif /* _buy_it_now_row_cpu_inner_one_of_H_ */

