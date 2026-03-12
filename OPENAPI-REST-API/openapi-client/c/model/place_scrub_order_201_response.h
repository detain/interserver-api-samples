/*
 * place_scrub_order_201_response.h
 *
 * 
 */

#ifndef _place_scrub_order_201_response_H_
#define _place_scrub_order_201_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct place_scrub_order_201_response_t place_scrub_order_201_response_t;

#include "place_scrub_order_201_response_order_details.h"



typedef struct place_scrub_order_201_response_t {
    int success; //boolean
    char *text; // string
    struct place_scrub_order_201_response_order_details_t *order_details; //model

    int _library_owned; // Is the library responsible for freeing this object?
} place_scrub_order_201_response_t;

__attribute__((deprecated)) place_scrub_order_201_response_t *place_scrub_order_201_response_create(
    int success,
    char *text,
    place_scrub_order_201_response_order_details_t *order_details
);

void place_scrub_order_201_response_free(place_scrub_order_201_response_t *place_scrub_order_201_response);

place_scrub_order_201_response_t *place_scrub_order_201_response_parseFromJSON(cJSON *place_scrub_order_201_responseJSON);

cJSON *place_scrub_order_201_response_convertToJSON(place_scrub_order_201_response_t *place_scrub_order_201_response);

#endif /* _place_scrub_order_201_response_H_ */

