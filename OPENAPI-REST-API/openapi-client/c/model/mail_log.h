/*
 * mail_log.h
 *
 * Mail log records
 */

#ifndef _mail_log_H_
#define _mail_log_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_log_t mail_log_t;

#include "mail_log_entry.h"



typedef struct mail_log_t {
    int total; //numeric
    int skip; //numeric
    int limit; //numeric
    list_t *emails; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_log_t;

__attribute__((deprecated)) mail_log_t *mail_log_create(
    int total,
    int skip,
    int limit,
    list_t *emails
);

void mail_log_free(mail_log_t *mail_log);

mail_log_t *mail_log_parseFromJSON(cJSON *mail_logJSON);

cJSON *mail_log_convertToJSON(mail_log_t *mail_log);

#endif /* _mail_log_H_ */

