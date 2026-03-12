/*
 * buy_it_now_list.h
 *
 * Marketplace buy it now servers list
 */

#ifndef _buy_it_now_list_H_
#define _buy_it_now_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buy_it_now_list_t buy_it_now_list_t;

#include "buy_it_now_row.h"



typedef struct buy_it_now_list_t {

    int _library_owned; // Is the library responsible for freeing this object?
} buy_it_now_list_t;

__attribute__((deprecated)) buy_it_now_list_t *buy_it_now_list_create(
);

void buy_it_now_list_free(buy_it_now_list_t *buy_it_now_list);

buy_it_now_list_t *buy_it_now_list_parseFromJSON(cJSON *buy_it_now_listJSON);

cJSON *buy_it_now_list_convertToJSON(buy_it_now_list_t *buy_it_now_list);

#endif /* _buy_it_now_list_H_ */

