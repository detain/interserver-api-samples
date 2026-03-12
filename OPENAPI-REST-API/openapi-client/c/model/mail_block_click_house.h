/*
 * mail_block_click_house.h
 *
 * A block entry from the clickhouse mailblocks server.
 */

#ifndef _mail_block_click_house_H_
#define _mail_block_click_house_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_block_click_house_t mail_block_click_house_t;




typedef struct mail_block_click_house_t {
    char *date; //date
    char *from; // string
    char *message_id; // string
    char *subject; // string
    char *to; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_block_click_house_t;

__attribute__((deprecated)) mail_block_click_house_t *mail_block_click_house_create(
    char *date,
    char *from,
    char *message_id,
    char *subject,
    char *to
);

void mail_block_click_house_free(mail_block_click_house_t *mail_block_click_house);

mail_block_click_house_t *mail_block_click_house_parseFromJSON(cJSON *mail_block_click_houseJSON);

cJSON *mail_block_click_house_convertToJSON(mail_block_click_house_t *mail_block_click_house);

#endif /* _mail_block_click_house_H_ */

