/*
 * disable_scrub_500_response.h
 *
 * 
 */

#ifndef _disable_scrub_500_response_H_
#define _disable_scrub_500_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disable_scrub_500_response_t disable_scrub_500_response_t;




typedef struct disable_scrub_500_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} disable_scrub_500_response_t;

__attribute__((deprecated)) disable_scrub_500_response_t *disable_scrub_500_response_create(
    int success,
    char *text
);

void disable_scrub_500_response_free(disable_scrub_500_response_t *disable_scrub_500_response);

disable_scrub_500_response_t *disable_scrub_500_response_parseFromJSON(cJSON *disable_scrub_500_responseJSON);

cJSON *disable_scrub_500_response_convertToJSON(disable_scrub_500_response_t *disable_scrub_500_response);

#endif /* _disable_scrub_500_response_H_ */

