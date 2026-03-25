/*
 * service.h
 *
 * An individual package tied to one of our services.
 */

#ifndef _service_H_
#define _service_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_t service_t;




typedef struct service_t {
    int *services_id; //numeric
    char *services_name; // string
    double *services_cost; //numeric
    char *services_currency; // string
    int *services_category; //numeric
    int *services_buyable; //boolean
    int *services_type; //numeric
    char *services_field1; // string
    char *services_field2; // string
    char *services_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} service_t;

__attribute__((deprecated)) service_t *service_create(
    int *services_id,
    char *services_name,
    double *services_cost,
    char *services_currency,
    int *services_category,
    int *services_buyable,
    int *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
);

void service_free(service_t *service);

service_t *service_parseFromJSON(cJSON *serviceJSON);

cJSON *service_convertToJSON(service_t *service);

#endif /* _service_H_ */

