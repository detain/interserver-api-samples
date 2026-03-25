/*
 * quickserver_order_server_details381.h
 *
 * 
 */

#ifndef _quickserver_order_server_details381_H_
#define _quickserver_order_server_details381_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_server_details381_t quickserver_order_server_details381_t;




typedef struct quickserver_order_server_details381_t {
    char *cpu; // string
    char *ram; // string
    char *hd; // string
    int *cores; //numeric
    char *cost; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_server_details381_t;

__attribute__((deprecated)) quickserver_order_server_details381_t *quickserver_order_server_details381_create(
    char *cpu,
    char *ram,
    char *hd,
    int *cores,
    char *cost
);

void quickserver_order_server_details381_free(quickserver_order_server_details381_t *quickserver_order_server_details381);

quickserver_order_server_details381_t *quickserver_order_server_details381_parseFromJSON(cJSON *quickserver_order_server_details381JSON);

cJSON *quickserver_order_server_details381_convertToJSON(quickserver_order_server_details381_t *quickserver_order_server_details381);

#endif /* _quickserver_order_server_details381_H_ */

