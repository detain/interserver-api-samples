/*
 * mail_block_rspamd.h
 *
 * This is a block entry from the rspamd block list.
 */

#ifndef _mail_block_rspamd_H_
#define _mail_block_rspamd_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_block_rspamd_t mail_block_rspamd_t;




typedef struct mail_block_rspamd_t {
    char *from; // string
    char *subject; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_block_rspamd_t;

__attribute__((deprecated)) mail_block_rspamd_t *mail_block_rspamd_create(
    char *from,
    char *subject
);

void mail_block_rspamd_free(mail_block_rspamd_t *mail_block_rspamd);

mail_block_rspamd_t *mail_block_rspamd_parseFromJSON(cJSON *mail_block_rspamdJSON);

cJSON *mail_block_rspamd_convertToJSON(mail_block_rspamd_t *mail_block_rspamd);

#endif /* _mail_block_rspamd_H_ */

