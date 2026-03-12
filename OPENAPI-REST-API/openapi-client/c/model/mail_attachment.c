#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_attachment.h"



static mail_attachment_t *mail_attachment_create_internal(
    char *filename,
    char *data
    ) {
    mail_attachment_t *mail_attachment_local_var = malloc(sizeof(mail_attachment_t));
    if (!mail_attachment_local_var) {
        return NULL;
    }
    mail_attachment_local_var->filename = filename;
    mail_attachment_local_var->data = data;

    mail_attachment_local_var->_library_owned = 1;
    return mail_attachment_local_var;
}

__attribute__((deprecated)) mail_attachment_t *mail_attachment_create(
    char *filename,
    char *data
    ) {
    return mail_attachment_create_internal (
        filename,
        data
        );
}

void mail_attachment_free(mail_attachment_t *mail_attachment) {
    if(NULL == mail_attachment){
        return ;
    }
    if(mail_attachment->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_attachment_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_attachment->filename) {
        free(mail_attachment->filename);
        mail_attachment->filename = NULL;
    }
    if (mail_attachment->data) {
        free(mail_attachment->data);
        mail_attachment->data = NULL;
    }
    free(mail_attachment);
}

cJSON *mail_attachment_convertToJSON(mail_attachment_t *mail_attachment) {
    cJSON *item = cJSON_CreateObject();

    // mail_attachment->filename
    if (!mail_attachment->filename) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "filename", mail_attachment->filename) == NULL) {
    goto fail; //String
    }


    // mail_attachment->data
    if (!mail_attachment->data) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "data", mail_attachment->data) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_attachment_t *mail_attachment_parseFromJSON(cJSON *mail_attachmentJSON){

    mail_attachment_t *mail_attachment_local_var = NULL;

    // mail_attachment->filename
    cJSON *filename = cJSON_GetObjectItemCaseSensitive(mail_attachmentJSON, "filename");
    if (cJSON_IsNull(filename)) {
        filename = NULL;
    }
    if (!filename) {
        goto end;
    }

    
    if(!cJSON_IsString(filename))
    {
    goto end; //String
    }

    // mail_attachment->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(mail_attachmentJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (!data) {
        goto end;
    }

    
    if(!cJSON_IsString(data))
    {
    goto end; //String
    }


    mail_attachment_local_var = mail_attachment_create_internal (
        strdup(filename->valuestring),
        strdup(data->valuestring)
        );

    return mail_attachment_local_var;
end:
    return NULL;

}
