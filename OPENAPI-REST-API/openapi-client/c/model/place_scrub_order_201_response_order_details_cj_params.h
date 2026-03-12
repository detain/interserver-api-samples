/*
 * place_scrub_order_201_response_order_details_cj_params.h
 *
 * 
 */

#ifndef _place_scrub_order_201_response_order_details_cj_params_H_
#define _place_scrub_order_201_response_order_details_cj_params_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct place_scrub_order_201_response_order_details_cj_params_t place_scrub_order_201_response_order_details_cj_params_t;




typedef struct place_scrub_order_201_response_order_details_cj_params_t {
    int container_tag_id; //numeric
    int cid; //numeric
    char *oid; // string
    int type; //numeric
    char *item1; // string
    int amt1; //numeric
    int qty1; //numeric
    char *currency; // string

    int _library_owned; // Is the library responsible for freeing this object?
} place_scrub_order_201_response_order_details_cj_params_t;

__attribute__((deprecated)) place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_create(
    int container_tag_id,
    int cid,
    char *oid,
    int type,
    char *item1,
    int amt1,
    int qty1,
    char *currency
);

void place_scrub_order_201_response_order_details_cj_params_free(place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params);

place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_parseFromJSON(cJSON *place_scrub_order_201_response_order_details_cj_paramsJSON);

cJSON *place_scrub_order_201_response_order_details_cj_params_convertToJSON(place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params);

#endif /* _place_scrub_order_201_response_order_details_cj_params_H_ */

