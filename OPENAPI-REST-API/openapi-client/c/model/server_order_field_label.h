/*
 * server_order_field_label.h
 *
 * A display label for a field in the server order form.
 */

#ifndef _server_order_field_label_H_
#define _server_order_field_label_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_field_label_t server_order_field_label_t;




typedef struct server_order_field_label_t {
    char *name; // string
    int active; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_field_label_t;

__attribute__((deprecated)) server_order_field_label_t *server_order_field_label_create(
    char *name,
    int active
);

void server_order_field_label_free(server_order_field_label_t *server_order_field_label);

server_order_field_label_t *server_order_field_label_parseFromJSON(cJSON *server_order_field_labelJSON);

cJSON *server_order_field_label_convertToJSON(server_order_field_label_t *server_order_field_label);

#endif /* _server_order_field_label_H_ */

