/*
 * mail_extra_info_table.h
 *
 * A supplementary information table for a mail service (e.g., connection details).
 */

#ifndef _mail_extra_info_table_H_
#define _mail_extra_info_table_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_extra_info_table_t mail_extra_info_table_t;

#include "mail_extra_info_table_row.h"



typedef struct mail_extra_info_table_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} mail_extra_info_table_t;

__attribute__((deprecated)) mail_extra_info_table_t *mail_extra_info_table_create(
    char *title,
    list_t *rows
);

void mail_extra_info_table_free(mail_extra_info_table_t *mail_extra_info_table);

mail_extra_info_table_t *mail_extra_info_table_parseFromJSON(cJSON *mail_extra_info_tableJSON);

cJSON *mail_extra_info_table_convertToJSON(mail_extra_info_table_t *mail_extra_info_table);

#endif /* _mail_extra_info_table_H_ */

