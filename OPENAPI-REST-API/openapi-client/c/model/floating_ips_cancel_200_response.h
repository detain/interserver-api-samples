/*
 * floating_ips_cancel_200_response.h
 *
 * 
 */

#ifndef _floating_ips_cancel_200_response_H_
#define _floating_ips_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct floating_ips_cancel_200_response_t floating_ips_cancel_200_response_t;




typedef struct floating_ips_cancel_200_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} floating_ips_cancel_200_response_t;

__attribute__((deprecated)) floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_create(
    int success,
    char *text
);

void floating_ips_cancel_200_response_free(floating_ips_cancel_200_response_t *floating_ips_cancel_200_response);

floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_parseFromJSON(cJSON *floating_ips_cancel_200_responseJSON);

cJSON *floating_ips_cancel_200_response_convertToJSON(floating_ips_cancel_200_response_t *floating_ips_cancel_200_response);

#endif /* _floating_ips_cancel_200_response_H_ */

