/*
 * mail_service_type.h
 *
 * Service type definition for a mail service, including name, pricing, and category.
 */

#ifndef _mail_service_type_H_
#define _mail_service_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_service_type_t mail_service_type_t;




typedef struct mail_service_type_t {
    char *services_id; // string
    char *services_name; // string
    char *services_cost; // string
    char *services_category; // string
    char *services_buyable; // string
    char *services_type; // string
    char *services_field1; // string
    char *services_field2; // string
    char *services_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_service_type_t;

__attribute__((deprecated)) mail_service_type_t *mail_service_type_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
);

void mail_service_type_free(mail_service_type_t *mail_service_type);

mail_service_type_t *mail_service_type_parseFromJSON(cJSON *mail_service_typeJSON);

cJSON *mail_service_type_convertToJSON(mail_service_type_t *mail_service_type);

#endif /* _mail_service_type_H_ */

