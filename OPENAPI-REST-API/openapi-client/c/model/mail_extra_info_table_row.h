/*
 * mail_extra_info_table_row.h
 *
 * A single row in the mail service supplementary information table.
 */

#ifndef _mail_extra_info_table_row_H_
#define _mail_extra_info_table_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_extra_info_table_row_t mail_extra_info_table_row_t;




typedef struct mail_extra_info_table_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_extra_info_table_row_t;

__attribute__((deprecated)) mail_extra_info_table_row_t *mail_extra_info_table_row_create(
    char *desc,
    char *value
);

void mail_extra_info_table_row_free(mail_extra_info_table_row_t *mail_extra_info_table_row);

mail_extra_info_table_row_t *mail_extra_info_table_row_parseFromJSON(cJSON *mail_extra_info_table_rowJSON);

cJSON *mail_extra_info_table_row_convertToJSON(mail_extra_info_table_row_t *mail_extra_info_table_row);

#endif /* _mail_extra_info_table_row_H_ */

