/*
 * send_mail.h
 *
 * Details for an Email
 */

#ifndef _send_mail_H_
#define _send_mail_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_mail_t send_mail_t;




typedef struct send_mail_t {
    char *to; // string
    char *from; // string
    char *subject; // string
    char *body; // string

    int _library_owned; // Is the library responsible for freeing this object?
} send_mail_t;

__attribute__((deprecated)) send_mail_t *send_mail_create(
    char *to,
    char *from,
    char *subject,
    char *body
);

void send_mail_free(send_mail_t *send_mail);

send_mail_t *send_mail_parseFromJSON(cJSON *send_mailJSON);

cJSON *send_mail_convertToJSON(send_mail_t *send_mail);

#endif /* _send_mail_H_ */

