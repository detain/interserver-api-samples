/*
 * server_order_form_values.h
 *
 * Form values for the server order.
 */

#ifndef _server_order_form_values_H_
#define _server_order_form_values_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_form_values_t server_order_form_values_t;




typedef struct server_order_form_values_t {
    int memory; //numeric
    char *bandwidth; // string
    char *ips; // string
    char *os; // string
    int cp; //numeric
    char *raid; // string
    char *hd; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_form_values_t;

__attribute__((deprecated)) server_order_form_values_t *server_order_form_values_create(
    int memory,
    char *bandwidth,
    char *ips,
    char *os,
    int cp,
    char *raid,
    char *hd
);

void server_order_form_values_free(server_order_form_values_t *server_order_form_values);

server_order_form_values_t *server_order_form_values_parseFromJSON(cJSON *server_order_form_valuesJSON);

cJSON *server_order_form_values_convertToJSON(server_order_form_values_t *server_order_form_values);

#endif /* _server_order_form_values_H_ */

