/*
 * mail_log_entry.h
 *
 * An email record
 */

#ifndef _mail_log_entry_H_
#define _mail_log_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_log_entry_t mail_log_entry_t;




typedef struct mail_log_entry_t {
    int _id; //numeric
    char *id; // string
    char *from; // string
    char *to; // string
    char *subject; // string
    char *created; // string
    int time; //numeric
    char *user; // string
    char *transtype; // string
    char *origin; // string
    char *interface; // string
    char *sending_zone; // string
    int body_size; //numeric
    int seq; //numeric
    char *recipient; // string
    char *domain; // string
    int locked; //numeric
    int lock_time; //numeric
    char *assigned; // string
    char *queued; // string
    char *mx_hostname; // string
    char *response; // string
    char *message_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_log_entry_t;

__attribute__((deprecated)) mail_log_entry_t *mail_log_entry_create(
    int _id,
    char *id,
    char *from,
    char *to,
    char *subject,
    char *created,
    int time,
    char *user,
    char *transtype,
    char *origin,
    char *interface,
    char *sending_zone,
    int body_size,
    int seq,
    char *recipient,
    char *domain,
    int locked,
    int lock_time,
    char *assigned,
    char *queued,
    char *mx_hostname,
    char *response,
    char *message_id
);

void mail_log_entry_free(mail_log_entry_t *mail_log_entry);

mail_log_entry_t *mail_log_entry_parseFromJSON(cJSON *mail_log_entryJSON);

cJSON *mail_log_entry_convertToJSON(mail_log_entry_t *mail_log_entry);

#endif /* _mail_log_entry_H_ */

