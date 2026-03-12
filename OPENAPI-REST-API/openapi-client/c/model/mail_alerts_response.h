/*
 * mail_alerts_response.h
 *
 * Alert configuration entries for a mail service.
 */

#ifndef _mail_alerts_response_H_
#define _mail_alerts_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_alerts_response_t mail_alerts_response_t;

#include "mail_alerts_response_inner.h"



typedef struct mail_alerts_response_t {

    int _library_owned; // Is the library responsible for freeing this object?
} mail_alerts_response_t;

__attribute__((deprecated)) mail_alerts_response_t *mail_alerts_response_create(
);

void mail_alerts_response_free(mail_alerts_response_t *mail_alerts_response);

mail_alerts_response_t *mail_alerts_response_parseFromJSON(cJSON *mail_alerts_responseJSON);

cJSON *mail_alerts_response_convertToJSON(mail_alerts_response_t *mail_alerts_response);

#endif /* _mail_alerts_response_H_ */

