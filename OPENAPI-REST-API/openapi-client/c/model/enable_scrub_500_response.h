/*
 * enable_scrub_500_response.h
 *
 * 
 */

#ifndef _enable_scrub_500_response_H_
#define _enable_scrub_500_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enable_scrub_500_response_t enable_scrub_500_response_t;




typedef struct enable_scrub_500_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} enable_scrub_500_response_t;

__attribute__((deprecated)) enable_scrub_500_response_t *enable_scrub_500_response_create(
    int success,
    char *text
);

void enable_scrub_500_response_free(enable_scrub_500_response_t *enable_scrub_500_response);

enable_scrub_500_response_t *enable_scrub_500_response_parseFromJSON(cJSON *enable_scrub_500_responseJSON);

cJSON *enable_scrub_500_response_convertToJSON(enable_scrub_500_response_t *enable_scrub_500_response);

#endif /* _enable_scrub_500_response_H_ */

