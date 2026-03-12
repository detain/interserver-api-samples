#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_tutorials_table_row.h"



static mail_tutorials_table_row_t *mail_tutorials_table_row_create_internal(
    char *desc,
    char *value
    ) {
    mail_tutorials_table_row_t *mail_tutorials_table_row_local_var = malloc(sizeof(mail_tutorials_table_row_t));
    if (!mail_tutorials_table_row_local_var) {
        return NULL;
    }
    mail_tutorials_table_row_local_var->desc = desc;
    mail_tutorials_table_row_local_var->value = value;

    mail_tutorials_table_row_local_var->_library_owned = 1;
    return mail_tutorials_table_row_local_var;
}

__attribute__((deprecated)) mail_tutorials_table_row_t *mail_tutorials_table_row_create(
    char *desc,
    char *value
    ) {
    return mail_tutorials_table_row_create_internal (
        desc,
        value
        );
}

void mail_tutorials_table_row_free(mail_tutorials_table_row_t *mail_tutorials_table_row) {
    if(NULL == mail_tutorials_table_row){
        return ;
    }
    if(mail_tutorials_table_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_tutorials_table_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_tutorials_table_row->desc) {
        free(mail_tutorials_table_row->desc);
        mail_tutorials_table_row->desc = NULL;
    }
    if (mail_tutorials_table_row->value) {
        free(mail_tutorials_table_row->value);
        mail_tutorials_table_row->value = NULL;
    }
    free(mail_tutorials_table_row);
}

cJSON *mail_tutorials_table_row_convertToJSON(mail_tutorials_table_row_t *mail_tutorials_table_row) {
    cJSON *item = cJSON_CreateObject();

    // mail_tutorials_table_row->desc
    if(mail_tutorials_table_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", mail_tutorials_table_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // mail_tutorials_table_row->value
    if(mail_tutorials_table_row->value) {
    if(cJSON_AddStringToObject(item, "value", mail_tutorials_table_row->value) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_tutorials_table_row_t *mail_tutorials_table_row_parseFromJSON(cJSON *mail_tutorials_table_rowJSON){

    mail_tutorials_table_row_t *mail_tutorials_table_row_local_var = NULL;

    // mail_tutorials_table_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(mail_tutorials_table_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // mail_tutorials_table_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(mail_tutorials_table_rowJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    mail_tutorials_table_row_local_var = mail_tutorials_table_row_create_internal (
        desc && !cJSON_IsNull(desc) ? strdup(desc->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return mail_tutorials_table_row_local_var;
end:
    return NULL;

}
