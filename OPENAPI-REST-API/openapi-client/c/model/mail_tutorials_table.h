/*
 * mail_tutorials_table.h
 *
 * A table of tutorial links displayed for a mail service.
 */

#ifndef _mail_tutorials_table_H_
#define _mail_tutorials_table_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_tutorials_table_t mail_tutorials_table_t;

#include "mail_tutorials_table_row.h"



typedef struct mail_tutorials_table_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_tutorials_table_t;

__attribute__((deprecated)) mail_tutorials_table_t *mail_tutorials_table_create(
    char *title,
    list_t *rows
);

void mail_tutorials_table_free(mail_tutorials_table_t *mail_tutorials_table);

mail_tutorials_table_t *mail_tutorials_table_parseFromJSON(cJSON *mail_tutorials_tableJSON);

cJSON *mail_tutorials_table_convertToJSON(mail_tutorials_table_t *mail_tutorials_table);

#endif /* _mail_tutorials_table_H_ */

