/*
 * queue_response.h
 *
 * Response after sending an action queue to a service.
 */

#ifndef _queue_response_H_
#define _queue_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct queue_response_t queue_response_t;




typedef struct queue_response_t {
    char *text; // string
    int *queue_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} queue_response_t;

__attribute__((deprecated)) queue_response_t *queue_response_create(
    char *text,
    int *queue_id
);

void queue_response_free(queue_response_t *queue_response);

queue_response_t *queue_response_parseFromJSON(cJSON *queue_responseJSON);

cJSON *queue_response_convertToJSON(queue_response_t *queue_response);

#endif /* _queue_response_H_ */

