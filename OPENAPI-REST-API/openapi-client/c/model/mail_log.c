#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_log.h"



static mail_log_t *mail_log_create_internal(
    int total,
    int skip,
    int limit,
    list_t *emails
    ) {
    mail_log_t *mail_log_local_var = malloc(sizeof(mail_log_t));
    if (!mail_log_local_var) {
        return NULL;
    }
    mail_log_local_var->total = total;
    mail_log_local_var->skip = skip;
    mail_log_local_var->limit = limit;
    mail_log_local_var->emails = emails;

    mail_log_local_var->_library_owned = 1;
    return mail_log_local_var;
}

__attribute__((deprecated)) mail_log_t *mail_log_create(
    int total,
    int skip,
    int limit,
    list_t *emails
    ) {
    return mail_log_create_internal (
        total,
        skip,
        limit,
        emails
        );
}

void mail_log_free(mail_log_t *mail_log) {
    if(NULL == mail_log){
        return ;
    }
    if(mail_log->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_log_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_log->emails) {
        list_ForEach(listEntry, mail_log->emails) {
            mail_log_entry_free(listEntry->data);
        }
        list_freeList(mail_log->emails);
        mail_log->emails = NULL;
    }
    free(mail_log);
}

cJSON *mail_log_convertToJSON(mail_log_t *mail_log) {
    cJSON *item = cJSON_CreateObject();

    // mail_log->total
    if (!mail_log->total) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total", mail_log->total) == NULL) {
    goto fail; //Numeric
    }


    // mail_log->skip
    if (!mail_log->skip) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "skip", mail_log->skip) == NULL) {
    goto fail; //Numeric
    }


    // mail_log->limit
    if (!mail_log->limit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "limit", mail_log->limit) == NULL) {
    goto fail; //Numeric
    }


    // mail_log->emails
    if (!mail_log->emails) {
        goto fail;
    }
    cJSON *emails = cJSON_AddArrayToObject(item, "emails");
    if(emails == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *emailsListEntry;
    if (mail_log->emails) {
    list_ForEach(emailsListEntry, mail_log->emails) {
    cJSON *itemLocal = mail_log_entry_convertToJSON(emailsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(emails, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_log_t *mail_log_parseFromJSON(cJSON *mail_logJSON){

    mail_log_t *mail_log_local_var = NULL;

    // define the local list for mail_log->emails
    list_t *emailsList = NULL;

    // mail_log->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(mail_logJSON, "total");
    if (cJSON_IsNull(total)) {
        total = NULL;
    }
    if (!total) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }

    // mail_log->skip
    cJSON *skip = cJSON_GetObjectItemCaseSensitive(mail_logJSON, "skip");
    if (cJSON_IsNull(skip)) {
        skip = NULL;
    }
    if (!skip) {
        goto end;
    }

    
    if(!cJSON_IsNumber(skip))
    {
    goto end; //Numeric
    }

    // mail_log->limit
    cJSON *limit = cJSON_GetObjectItemCaseSensitive(mail_logJSON, "limit");
    if (cJSON_IsNull(limit)) {
        limit = NULL;
    }
    if (!limit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(limit))
    {
    goto end; //Numeric
    }

    // mail_log->emails
    cJSON *emails = cJSON_GetObjectItemCaseSensitive(mail_logJSON, "emails");
    if (cJSON_IsNull(emails)) {
        emails = NULL;
    }
    if (!emails) {
        goto end;
    }

    
    cJSON *emails_local_nonprimitive = NULL;
    if(!cJSON_IsArray(emails)){
        goto end; //nonprimitive container
    }

    emailsList = list_createList();

    cJSON_ArrayForEach(emails_local_nonprimitive,emails )
    {
        if(!cJSON_IsObject(emails_local_nonprimitive)){
            goto end;
        }
        mail_log_entry_t *emailsItem = mail_log_entry_parseFromJSON(emails_local_nonprimitive);

        list_addElement(emailsList, emailsItem);
    }


    mail_log_local_var = mail_log_create_internal (
        total->valuedouble,
        skip->valuedouble,
        limit->valuedouble,
        emailsList
        );

    return mail_log_local_var;
end:
    if (emailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, emailsList) {
            mail_log_entry_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(emailsList);
        emailsList = NULL;
    }
    return NULL;

}
