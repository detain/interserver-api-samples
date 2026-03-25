#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_extra_info_table_row.h"



static mail_extra_info_table_row_t *mail_extra_info_table_row_create_internal(
    char *desc,
    char *value
    ) {
    mail_extra_info_table_row_t *mail_extra_info_table_row_local_var = malloc(sizeof(mail_extra_info_table_row_t));
    if (!mail_extra_info_table_row_local_var) {
        return NULL;
    }
    memset(mail_extra_info_table_row_local_var, 0, sizeof(mail_extra_info_table_row_t));
    mail_extra_info_table_row_local_var->_library_owned = 1;
    mail_extra_info_table_row_local_var->desc = desc;
    mail_extra_info_table_row_local_var->value = value;
    return mail_extra_info_table_row_local_var;
}

__attribute__((deprecated)) mail_extra_info_table_row_t *mail_extra_info_table_row_create(
    char *desc,
    char *value
    ) {
    mail_extra_info_table_row_t *result = mail_extra_info_table_row_create_internal (
        desc,
        value
        );
    if (!result) {
    }
    return result;
}

void mail_extra_info_table_row_free(mail_extra_info_table_row_t *mail_extra_info_table_row) {
    if(NULL == mail_extra_info_table_row){
        return ;
    }
    if(mail_extra_info_table_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_extra_info_table_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_extra_info_table_row->desc) {
        free(mail_extra_info_table_row->desc);
        mail_extra_info_table_row->desc = NULL;
    }
    if (mail_extra_info_table_row->value) {
        free(mail_extra_info_table_row->value);
        mail_extra_info_table_row->value = NULL;
    }
    free(mail_extra_info_table_row);
}

cJSON *mail_extra_info_table_row_convertToJSON(mail_extra_info_table_row_t *mail_extra_info_table_row) {
    cJSON *item = cJSON_CreateObject();

    // mail_extra_info_table_row->desc
    if(mail_extra_info_table_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", mail_extra_info_table_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // mail_extra_info_table_row->value
    if(mail_extra_info_table_row->value) {
    if(cJSON_AddStringToObject(item, "value", mail_extra_info_table_row->value) == NULL) {
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

mail_extra_info_table_row_t *mail_extra_info_table_row_parseFromJSON(cJSON *mail_extra_info_table_rowJSON){

    mail_extra_info_table_row_t *mail_extra_info_table_row_local_var = NULL;

    char *desc_local_str = NULL;

    char *value_local_str = NULL;

    // mail_extra_info_table_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(mail_extra_info_table_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // mail_extra_info_table_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(mail_extra_info_table_rowJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    if (desc && !cJSON_IsNull(desc)) desc_local_str = strdup(desc->valuestring);
    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);

    mail_extra_info_table_row_local_var = mail_extra_info_table_row_create_internal (
        desc_local_str,
        value_local_str
        );

    if (!mail_extra_info_table_row_local_var) {
        goto end;
    }

    return mail_extra_info_table_row_local_var;
end:
    if (desc_local_str) {
        free(desc_local_str);
        desc_local_str = NULL;
    }
    if (value_local_str) {
        free(value_local_str);
        value_local_str = NULL;
    }
    return NULL;

}
