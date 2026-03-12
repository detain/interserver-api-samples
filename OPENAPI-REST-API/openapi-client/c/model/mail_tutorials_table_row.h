/*
 * mail_tutorials_table_row.h
 *
 * A single tutorial entry with a label and URL.
 */

#ifndef _mail_tutorials_table_row_H_
#define _mail_tutorials_table_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_tutorials_table_row_t mail_tutorials_table_row_t;




typedef struct mail_tutorials_table_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_tutorials_table_row_t;

__attribute__((deprecated)) mail_tutorials_table_row_t *mail_tutorials_table_row_create(
    char *desc,
    char *value
);

void mail_tutorials_table_row_free(mail_tutorials_table_row_t *mail_tutorials_table_row);

mail_tutorials_table_row_t *mail_tutorials_table_row_parseFromJSON(cJSON *mail_tutorials_table_rowJSON);

cJSON *mail_tutorials_table_row_convertToJSON(mail_tutorials_table_row_t *mail_tutorials_table_row);

#endif /* _mail_tutorials_table_row_H_ */

