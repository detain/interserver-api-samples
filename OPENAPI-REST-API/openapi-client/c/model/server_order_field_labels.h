/*
 * server_order_field_labels.h
 *
 * Field labels for the server order.
 */

#ifndef _server_order_field_labels_H_
#define _server_order_field_labels_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_field_labels_t server_order_field_labels_t;

#include "server_order_field_label.h"



typedef struct server_order_field_labels_t {
    struct server_order_field_label_t *bandwidth; //model
    struct server_order_field_label_t *ips; //model
    struct server_order_field_label_t *os; //model
    struct server_order_field_label_t *cp; //model
    struct server_order_field_label_t *raid; //model
    struct server_order_field_label_t *memory; //model
    struct server_order_field_label_t *hd; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_field_labels_t;

__attribute__((deprecated)) server_order_field_labels_t *server_order_field_labels_create(
    server_order_field_label_t *bandwidth,
    server_order_field_label_t *ips,
    server_order_field_label_t *os,
    server_order_field_label_t *cp,
    server_order_field_label_t *raid,
    server_order_field_label_t *memory,
    server_order_field_label_t *hd
);

void server_order_field_labels_free(server_order_field_labels_t *server_order_field_labels);

server_order_field_labels_t *server_order_field_labels_parseFromJSON(cJSON *server_order_field_labelsJSON);

cJSON *server_order_field_labels_convertToJSON(server_order_field_labels_t *server_order_field_labels);

#endif /* _server_order_field_labels_H_ */

