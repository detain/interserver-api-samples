#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_block_click_house.h"



static mail_block_click_house_t *mail_block_click_house_create_internal(
    char *date,
    char *from,
    char *message_id,
    char *subject,
    char *to
    ) {
    mail_block_click_house_t *mail_block_click_house_local_var = malloc(sizeof(mail_block_click_house_t));
    if (!mail_block_click_house_local_var) {
        return NULL;
    }
    memset(mail_block_click_house_local_var, 0, sizeof(mail_block_click_house_t));
    mail_block_click_house_local_var->_library_owned = 1;
    mail_block_click_house_local_var->date = date;
    mail_block_click_house_local_var->from = from;
    mail_block_click_house_local_var->message_id = message_id;
    mail_block_click_house_local_var->subject = subject;
    mail_block_click_house_local_var->to = to;
    return mail_block_click_house_local_var;
}

__attribute__((deprecated)) mail_block_click_house_t *mail_block_click_house_create(
    char *date,
    char *from,
    char *message_id,
    char *subject,
    char *to
    ) {
    mail_block_click_house_t *result = mail_block_click_house_create_internal (
        date,
        from,
        message_id,
        subject,
        to
        );
    if (!result) {
    }
    return result;
}

void mail_block_click_house_free(mail_block_click_house_t *mail_block_click_house) {
    if(NULL == mail_block_click_house){
        return ;
    }
    if(mail_block_click_house->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_block_click_house_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_block_click_house->date) {
        free(mail_block_click_house->date);
        mail_block_click_house->date = NULL;
    }
    if (mail_block_click_house->from) {
        free(mail_block_click_house->from);
        mail_block_click_house->from = NULL;
    }
    if (mail_block_click_house->message_id) {
        free(mail_block_click_house->message_id);
        mail_block_click_house->message_id = NULL;
    }
    if (mail_block_click_house->subject) {
        free(mail_block_click_house->subject);
        mail_block_click_house->subject = NULL;
    }
    if (mail_block_click_house->to) {
        free(mail_block_click_house->to);
        mail_block_click_house->to = NULL;
    }
    free(mail_block_click_house);
}

cJSON *mail_block_click_house_convertToJSON(mail_block_click_house_t *mail_block_click_house) {
    cJSON *item = cJSON_CreateObject();

    // mail_block_click_house->date
    if (!mail_block_click_house->date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "date", mail_block_click_house->date) == NULL) {
    goto fail; //Date
    }


    // mail_block_click_house->from
    if (!mail_block_click_house->from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "from", mail_block_click_house->from) == NULL) {
    goto fail; //String
    }


    // mail_block_click_house->message_id
    if (!mail_block_click_house->message_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "messageId", mail_block_click_house->message_id) == NULL) {
    goto fail; //String
    }


    // mail_block_click_house->subject
    if (!mail_block_click_house->subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "subject", mail_block_click_house->subject) == NULL) {
    goto fail; //String
    }


    // mail_block_click_house->to
    if (!mail_block_click_house->to) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "to", mail_block_click_house->to) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_block_click_house_t *mail_block_click_house_parseFromJSON(cJSON *mail_block_click_houseJSON){

    mail_block_click_house_t *mail_block_click_house_local_var = NULL;

    char *date_local_str = NULL;

    char *from_local_str = NULL;

    char *message_id_local_str = NULL;

    char *subject_local_str = NULL;

    char *to_local_str = NULL;

    // mail_block_click_house->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(mail_block_click_houseJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (!date) {
        goto end;
    }

    
    if(!cJSON_IsString(date))
    {
    goto end; //Date
    }

    // mail_block_click_house->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(mail_block_click_houseJSON, "from");
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

    // mail_block_click_house->message_id
    cJSON *message_id = cJSON_GetObjectItemCaseSensitive(mail_block_click_houseJSON, "messageId");
    if (cJSON_IsNull(message_id)) {
        message_id = NULL;
    }
    if (!message_id) {
        goto end;
    }

    
    if(!cJSON_IsString(message_id))
    {
    goto end; //String
    }

    // mail_block_click_house->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(mail_block_click_houseJSON, "subject");
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

    // mail_block_click_house->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(mail_block_click_houseJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (!to) {
        goto end;
    }

    
    if(!cJSON_IsString(to))
    {
    goto end; //String
    }


    if (date) date_local_str = strdup(date->valuestring);
    if (from && !cJSON_IsNull(from)) from_local_str = strdup(from->valuestring);
    if (message_id && !cJSON_IsNull(message_id)) message_id_local_str = strdup(message_id->valuestring);
    if (subject && !cJSON_IsNull(subject)) subject_local_str = strdup(subject->valuestring);
    if (to && !cJSON_IsNull(to)) to_local_str = strdup(to->valuestring);

    mail_block_click_house_local_var = mail_block_click_house_create_internal (
        date_local_str,
        from_local_str,
        message_id_local_str,
        subject_local_str,
        to_local_str
        );

    if (!mail_block_click_house_local_var) {
        goto end;
    }

    return mail_block_click_house_local_var;
end:
    if (date_local_str) {
        free(date_local_str);
        date_local_str = NULL;
    }
    if (from_local_str) {
        free(from_local_str);
        from_local_str = NULL;
    }
    if (message_id_local_str) {
        free(message_id_local_str);
        message_id_local_str = NULL;
    }
    if (subject_local_str) {
        free(subject_local_str);
        subject_local_str = NULL;
    }
    if (to_local_str) {
        free(to_local_str);
        to_local_str = NULL;
    }
    return NULL;

}
