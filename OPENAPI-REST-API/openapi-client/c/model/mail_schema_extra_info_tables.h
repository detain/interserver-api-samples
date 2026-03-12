/*
 * mail_schema_extra_info_tables.h
 *
 * Additional information tables for the mail service.
 */

#ifndef _mail_schema_extra_info_tables_H_
#define _mail_schema_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_schema_extra_info_tables_t mail_schema_extra_info_tables_t;

#include "mail_extra_info_table.h"
#include "mail_tutorials_table.h"



typedef struct mail_schema_extra_info_tables_t {
    struct mail_extra_info_table_t *mail; //model
    struct mail_tutorials_table_t *tutorials; //model

    int _library_owned; // Is the library responsible for freeing this object?
} mail_schema_extra_info_tables_t;

__attribute__((deprecated)) mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_create(
    mail_extra_info_table_t *mail,
    mail_tutorials_table_t *tutorials
);

void mail_schema_extra_info_tables_free(mail_schema_extra_info_tables_t *mail_schema_extra_info_tables);

mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_parseFromJSON(cJSON *mail_schema_extra_info_tablesJSON);

cJSON *mail_schema_extra_info_tables_convertToJSON(mail_schema_extra_info_tables_t *mail_schema_extra_info_tables);

#endif /* _mail_schema_extra_info_tables_H_ */

