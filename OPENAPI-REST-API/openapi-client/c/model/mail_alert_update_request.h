/*
 * mail_alert_update_request.h
 *
 * Payload for updating an existing mail alert.
 */

#ifndef _mail_alert_update_request_H_
#define _mail_alert_update_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_alert_update_request_t mail_alert_update_request_t;




typedef struct mail_alert_update_request_t {
    int alert_id; //numeric
    char *type; // string
    char *value; // string
    char *to; // string
    char *enabled; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_alert_update_request_t;

__attribute__((deprecated)) mail_alert_update_request_t *mail_alert_update_request_create(
    int alert_id,
    char *type,
    char *value,
    char *to,
    char *enabled
);

void mail_alert_update_request_free(mail_alert_update_request_t *mail_alert_update_request);

mail_alert_update_request_t *mail_alert_update_request_parseFromJSON(cJSON *mail_alert_update_requestJSON);

cJSON *mail_alert_update_request_convertToJSON(mail_alert_update_request_t *mail_alert_update_request);

#endif /* _mail_alert_update_request_H_ */

