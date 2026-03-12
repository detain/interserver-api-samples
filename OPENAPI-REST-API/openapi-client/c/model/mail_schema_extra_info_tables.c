#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_schema_extra_info_tables.h"



static mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_create_internal(
    mail_extra_info_table_t *mail,
    mail_tutorials_table_t *tutorials
    ) {
    mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_local_var = malloc(sizeof(mail_schema_extra_info_tables_t));
    if (!mail_schema_extra_info_tables_local_var) {
        return NULL;
    }
    mail_schema_extra_info_tables_local_var->mail = mail;
    mail_schema_extra_info_tables_local_var->tutorials = tutorials;

    mail_schema_extra_info_tables_local_var->_library_owned = 1;
    return mail_schema_extra_info_tables_local_var;
}

__attribute__((deprecated)) mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_create(
    mail_extra_info_table_t *mail,
    mail_tutorials_table_t *tutorials
    ) {
    return mail_schema_extra_info_tables_create_internal (
        mail,
        tutorials
        );
}

void mail_schema_extra_info_tables_free(mail_schema_extra_info_tables_t *mail_schema_extra_info_tables) {
    if(NULL == mail_schema_extra_info_tables){
        return ;
    }
    if(mail_schema_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_schema_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_schema_extra_info_tables->mail) {
        mail_extra_info_table_free(mail_schema_extra_info_tables->mail);
        mail_schema_extra_info_tables->mail = NULL;
    }
    if (mail_schema_extra_info_tables->tutorials) {
        mail_tutorials_table_free(mail_schema_extra_info_tables->tutorials);
        mail_schema_extra_info_tables->tutorials = NULL;
    }
    free(mail_schema_extra_info_tables);
}

cJSON *mail_schema_extra_info_tables_convertToJSON(mail_schema_extra_info_tables_t *mail_schema_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // mail_schema_extra_info_tables->mail
    if(mail_schema_extra_info_tables->mail) {
    cJSON *mail_local_JSON = mail_extra_info_table_convertToJSON(mail_schema_extra_info_tables->mail);
    if(mail_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mail", mail_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // mail_schema_extra_info_tables->tutorials
    if(mail_schema_extra_info_tables->tutorials) {
    cJSON *tutorials_local_JSON = mail_tutorials_table_convertToJSON(mail_schema_extra_info_tables->tutorials);
    if(tutorials_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tutorials", tutorials_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_parseFromJSON(cJSON *mail_schema_extra_info_tablesJSON){

    mail_schema_extra_info_tables_t *mail_schema_extra_info_tables_local_var = NULL;

    // define the local variable for mail_schema_extra_info_tables->mail
    mail_extra_info_table_t *mail_local_nonprim = NULL;

    // define the local variable for mail_schema_extra_info_tables->tutorials
    mail_tutorials_table_t *tutorials_local_nonprim = NULL;

    // mail_schema_extra_info_tables->mail
    cJSON *mail = cJSON_GetObjectItemCaseSensitive(mail_schema_extra_info_tablesJSON, "mail");
    if (cJSON_IsNull(mail)) {
        mail = NULL;
    }
    if (mail) { 
    mail_local_nonprim = mail_extra_info_table_parseFromJSON(mail); //nonprimitive
    }

    // mail_schema_extra_info_tables->tutorials
    cJSON *tutorials = cJSON_GetObjectItemCaseSensitive(mail_schema_extra_info_tablesJSON, "tutorials");
    if (cJSON_IsNull(tutorials)) {
        tutorials = NULL;
    }
    if (tutorials) { 
    tutorials_local_nonprim = mail_tutorials_table_parseFromJSON(tutorials); //nonprimitive
    }


    mail_schema_extra_info_tables_local_var = mail_schema_extra_info_tables_create_internal (
        mail ? mail_local_nonprim : NULL,
        tutorials ? tutorials_local_nonprim : NULL
        );

    return mail_schema_extra_info_tables_local_var;
end:
    if (mail_local_nonprim) {
        mail_extra_info_table_free(mail_local_nonprim);
        mail_local_nonprim = NULL;
    }
    if (tutorials_local_nonprim) {
        mail_tutorials_table_free(tutorials_local_nonprim);
        tutorials_local_nonprim = NULL;
    }
    return NULL;

}
