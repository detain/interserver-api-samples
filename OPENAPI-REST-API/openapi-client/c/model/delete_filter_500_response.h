/*
 * delete_filter_500_response.h
 *
 * 
 */

#ifndef _delete_filter_500_response_H_
#define _delete_filter_500_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct delete_filter_500_response_t delete_filter_500_response_t;




typedef struct delete_filter_500_response_t {
    int *success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} delete_filter_500_response_t;

__attribute__((deprecated)) delete_filter_500_response_t *delete_filter_500_response_create(
    int *success,
    char *text
);

void delete_filter_500_response_free(delete_filter_500_response_t *delete_filter_500_response);

delete_filter_500_response_t *delete_filter_500_response_parseFromJSON(cJSON *delete_filter_500_responseJSON);

cJSON *delete_filter_500_response_convertToJSON(delete_filter_500_response_t *delete_filter_500_response);

#endif /* _delete_filter_500_response_H_ */

