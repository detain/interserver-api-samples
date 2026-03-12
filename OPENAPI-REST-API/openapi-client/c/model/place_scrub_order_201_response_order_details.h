/*
 * place_scrub_order_201_response_order_details.h
 *
 * 
 */

#ifndef _place_scrub_order_201_response_order_details_H_
#define _place_scrub_order_201_response_order_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct place_scrub_order_201_response_order_details_t place_scrub_order_201_response_order_details_t;

#include "place_scrub_order_201_response_order_details_cj_params.h"



typedef struct place_scrub_order_201_response_order_details_t {
    int total_cost; //numeric
    int service_id; //numeric
    int invoice_id; //numeric
    char *invoice_description; // string
    struct place_scrub_order_201_response_order_details_cj_params_t *cj_params; //model

    int _library_owned; // Is the library responsible for freeing this object?
} place_scrub_order_201_response_order_details_t;

__attribute__((deprecated)) place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_create(
    int total_cost,
    int service_id,
    int invoice_id,
    char *invoice_description,
    place_scrub_order_201_response_order_details_cj_params_t *cj_params
);

void place_scrub_order_201_response_order_details_free(place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details);

place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_parseFromJSON(cJSON *place_scrub_order_201_response_order_detailsJSON);

cJSON *place_scrub_order_201_response_order_details_convertToJSON(place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details);

#endif /* _place_scrub_order_201_response_order_details_H_ */

