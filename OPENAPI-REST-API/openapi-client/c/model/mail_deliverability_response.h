/*
 * mail_deliverability_response.h
 *
 * Deliverability statistics for a mail service.
 */

#ifndef _mail_deliverability_response_H_
#define _mail_deliverability_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_deliverability_response_t mail_deliverability_response_t;

#include "object.h"



typedef struct mail_deliverability_response_t {
    object_t *stat; //object
    double *percent; //numeric
    list_t *table_data; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_deliverability_response_t;

__attribute__((deprecated)) mail_deliverability_response_t *mail_deliverability_response_create(
    object_t *stat,
    double *percent,
    list_t *table_data
);

void mail_deliverability_response_free(mail_deliverability_response_t *mail_deliverability_response);

mail_deliverability_response_t *mail_deliverability_response_parseFromJSON(cJSON *mail_deliverability_responseJSON);

cJSON *mail_deliverability_response_convertToJSON(mail_deliverability_response_t *mail_deliverability_response);

#endif /* _mail_deliverability_response_H_ */

