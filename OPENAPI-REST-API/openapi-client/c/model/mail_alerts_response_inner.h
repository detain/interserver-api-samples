/*
 * mail_alerts_response_inner.h
 *
 * 
 */

#ifndef _mail_alerts_response_inner_H_
#define _mail_alerts_response_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_alerts_response_inner_t mail_alerts_response_inner_t;




typedef struct mail_alerts_response_inner_t {
    int alert_id; //numeric
    char *alert_type; // string
    char *alert_value; // string
    char *alert_to; // string
    char *alert_enabled; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_alerts_response_inner_t;

__attribute__((deprecated)) mail_alerts_response_inner_t *mail_alerts_response_inner_create(
    int alert_id,
    char *alert_type,
    char *alert_value,
    char *alert_to,
    char *alert_enabled
);

void mail_alerts_response_inner_free(mail_alerts_response_inner_t *mail_alerts_response_inner);

mail_alerts_response_inner_t *mail_alerts_response_inner_parseFromJSON(cJSON *mail_alerts_response_innerJSON);

cJSON *mail_alerts_response_inner_convertToJSON(mail_alerts_response_inner_t *mail_alerts_response_inner);

#endif /* _mail_alerts_response_inner_H_ */

