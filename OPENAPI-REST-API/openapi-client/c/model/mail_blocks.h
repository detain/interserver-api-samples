/*
 * mail_blocks.h
 *
 * The listing of blocked emails.
 */

#ifndef _mail_blocks_H_
#define _mail_blocks_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_blocks_t mail_blocks_t;

#include "mail_block_click_house.h"
#include "mail_block_rspamd.h"



typedef struct mail_blocks_t {
    list_t *local; //nonprimitive container
    list_t *mbtrap; //nonprimitive container
    list_t *subject; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_blocks_t;

__attribute__((deprecated)) mail_blocks_t *mail_blocks_create(
    list_t *local,
    list_t *mbtrap,
    list_t *subject
);

void mail_blocks_free(mail_blocks_t *mail_blocks);

mail_blocks_t *mail_blocks_parseFromJSON(cJSON *mail_blocksJSON);

cJSON *mail_blocks_convertToJSON(mail_blocks_t *mail_blocks);

#endif /* _mail_blocks_H_ */

