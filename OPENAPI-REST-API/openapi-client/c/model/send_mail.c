#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_mail.h"



static send_mail_t *send_mail_create_internal(
    char *to,
    char *from,
    char *subject,
    char *body
    ) {
    send_mail_t *send_mail_local_var = malloc(sizeof(send_mail_t));
    if (!send_mail_local_var) {
        return NULL;
    }
    send_mail_local_var->to = to;
    send_mail_local_var->from = from;
    send_mail_local_var->subject = subject;
    send_mail_local_var->body = body;

    send_mail_local_var->_library_owned = 1;
    return send_mail_local_var;
}

__attribute__((deprecated)) send_mail_t *send_mail_create(
    char *to,
    char *from,
    char *subject,
    char *body
    ) {
    return send_mail_create_internal (
        to,
        from,
        subject,
        body
        );
}

void send_mail_free(send_mail_t *send_mail) {
    if(NULL == send_mail){
        return ;
    }
    if(send_mail->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "send_mail_free");
        return ;
    }
    listEntry_t *listEntry;
    if (send_mail->to) {
        free(send_mail->to);
        send_mail->to = NULL;
    }
    if (send_mail->from) {
        free(send_mail->from);
        send_mail->from = NULL;
    }
    if (send_mail->subject) {
        free(send_mail->subject);
        send_mail->subject = NULL;
    }
    if (send_mail->body) {
        free(send_mail->body);
        send_mail->body = NULL;
    }
    free(send_mail);
}

cJSON *send_mail_convertToJSON(send_mail_t *send_mail) {
    cJSON *item = cJSON_CreateObject();

    // send_mail->to
    if (!send_mail->to) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "to", send_mail->to) == NULL) {
    goto fail; //String
    }


    // send_mail->from
    if (!send_mail->from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "from", send_mail->from) == NULL) {
    goto fail; //String
    }


    // send_mail->subject
    if (!send_mail->subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "subject", send_mail->subject) == NULL) {
    goto fail; //String
    }


    // send_mail->body
    if (!send_mail->body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "body", send_mail->body) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_mail_t *send_mail_parseFromJSON(cJSON *send_mailJSON){

    send_mail_t *send_mail_local_var = NULL;

    // send_mail->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(send_mailJSON, "to");
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

    // send_mail->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(send_mailJSON, "from");
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

    // send_mail->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(send_mailJSON, "subject");
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

    // send_mail->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(send_mailJSON, "body");
    if (cJSON_IsNull(body)) {
        body = NULL;
    }
    if (!body) {
        goto end;
    }

    
    if(!cJSON_IsString(body))
    {
    goto end; //String
    }


    send_mail_local_var = send_mail_create_internal (
        strdup(to->valuestring),
        strdup(from->valuestring),
        strdup(subject->valuestring),
        strdup(body->valuestring)
        );

    return send_mail_local_var;
end:
    return NULL;

}
