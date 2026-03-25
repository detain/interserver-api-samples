#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_block_rspamd.h"



static mail_block_rspamd_t *mail_block_rspamd_create_internal(
    char *from,
    char *subject
    ) {
    mail_block_rspamd_t *mail_block_rspamd_local_var = malloc(sizeof(mail_block_rspamd_t));
    if (!mail_block_rspamd_local_var) {
        return NULL;
    }
    memset(mail_block_rspamd_local_var, 0, sizeof(mail_block_rspamd_t));
    mail_block_rspamd_local_var->_library_owned = 1;
    mail_block_rspamd_local_var->from = from;
    mail_block_rspamd_local_var->subject = subject;
    return mail_block_rspamd_local_var;
}

__attribute__((deprecated)) mail_block_rspamd_t *mail_block_rspamd_create(
    char *from,
    char *subject
    ) {
    mail_block_rspamd_t *result = mail_block_rspamd_create_internal (
        from,
        subject
        );
    if (!result) {
    }
    return result;
}

void mail_block_rspamd_free(mail_block_rspamd_t *mail_block_rspamd) {
    if(NULL == mail_block_rspamd){
        return ;
    }
    if(mail_block_rspamd->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_block_rspamd_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_block_rspamd->from) {
        free(mail_block_rspamd->from);
        mail_block_rspamd->from = NULL;
    }
    if (mail_block_rspamd->subject) {
        free(mail_block_rspamd->subject);
        mail_block_rspamd->subject = NULL;
    }
    free(mail_block_rspamd);
}

cJSON *mail_block_rspamd_convertToJSON(mail_block_rspamd_t *mail_block_rspamd) {
    cJSON *item = cJSON_CreateObject();

    // mail_block_rspamd->from
    if (!mail_block_rspamd->from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "from", mail_block_rspamd->from) == NULL) {
    goto fail; //String
    }


    // mail_block_rspamd->subject
    if (!mail_block_rspamd->subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "subject", mail_block_rspamd->subject) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_block_rspamd_t *mail_block_rspamd_parseFromJSON(cJSON *mail_block_rspamdJSON){

    mail_block_rspamd_t *mail_block_rspamd_local_var = NULL;

    char *from_local_str = NULL;

    char *subject_local_str = NULL;

    // mail_block_rspamd->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(mail_block_rspamdJSON, "from");
    if (cJSON_IsNull(from)) {
        from = NULL;
    }
    if (!from) {
        goto end;
    }

    
    if(!cJSON_IsString(from))
    {
    goto end; //String
    }

    // mail_block_rspamd->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(mail_block_rspamdJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (!subject) {
        goto end;
    }

    
    if(!cJSON_IsString(subject))
    {
    goto end; //String
    }


    if (from && !cJSON_IsNull(from)) from_local_str = strdup(from->valuestring);
    if (subject && !cJSON_IsNull(subject)) subject_local_str = strdup(subject->valuestring);

    mail_block_rspamd_local_var = mail_block_rspamd_create_internal (
        from_local_str,
        subject_local_str
        );

    if (!mail_block_rspamd_local_var) {
        goto end;
    }

    return mail_block_rspamd_local_var;
end:
    if (from_local_str) {
        free(from_local_str);
        from_local_str = NULL;
    }
    if (subject_local_str) {
        free(subject_local_str);
        subject_local_str = NULL;
    }
    return NULL;

}
