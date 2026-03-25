#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_order.h"



static mail_order_t *mail_order_create_internal(
    int *id,
    char *status,
    char *username,
    char *comment
    ) {
    mail_order_t *mail_order_local_var = malloc(sizeof(mail_order_t));
    if (!mail_order_local_var) {
        return NULL;
    }
    memset(mail_order_local_var, 0, sizeof(mail_order_t));
    mail_order_local_var->_library_owned = 1;
    mail_order_local_var->id = id;
    mail_order_local_var->status = status;
    mail_order_local_var->username = username;
    mail_order_local_var->comment = comment;
    return mail_order_local_var;
}

__attribute__((deprecated)) mail_order_t *mail_order_create(
    int *id,
    char *status,
    char *username,
    char *comment
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    mail_order_t *result = mail_order_create_internal (
        id_copy,
        status,
        username,
        comment
        );
    if (!result) {
        free(id_copy);
    }
    return result;
}

void mail_order_free(mail_order_t *mail_order) {
    if(NULL == mail_order){
        return ;
    }
    if(mail_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_order->id) {
        free(mail_order->id);
        mail_order->id = NULL;
    }
    if (mail_order->status) {
        free(mail_order->status);
        mail_order->status = NULL;
    }
    if (mail_order->username) {
        free(mail_order->username);
        mail_order->username = NULL;
    }
    if (mail_order->comment) {
        free(mail_order->comment);
        mail_order->comment = NULL;
    }
    free(mail_order);
}

cJSON *mail_order_convertToJSON(mail_order_t *mail_order) {
    cJSON *item = cJSON_CreateObject();

    // mail_order->id
    if (!mail_order->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", *mail_order->id) == NULL) {
    goto fail; //Numeric
    }


    // mail_order->status
    if (!mail_order->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", mail_order->status) == NULL) {
    goto fail; //String
    }


    // mail_order->username
    if (!mail_order->username) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "username", mail_order->username) == NULL) {
    goto fail; //String
    }


    // mail_order->comment
    if(mail_order->comment) {
    if(cJSON_AddStringToObject(item, "comment", mail_order->comment) == NULL) {
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

mail_order_t *mail_order_parseFromJSON(cJSON *mail_orderJSON){

    mail_order_t *mail_order_local_var = NULL;

    // define the local variable for mail_order->id
    int *id_local_var = NULL;

    char *status_local_str = NULL;

    char *username_local_str = NULL;

    char *comment_local_str = NULL;

    // mail_order->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(mail_orderJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;

    // mail_order->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(mail_orderJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // mail_order->username
    cJSON *username = cJSON_GetObjectItemCaseSensitive(mail_orderJSON, "username");
    if (cJSON_IsNull(username)) {
        username = NULL;
    }
    if (!username) {
        goto end;
    }

    
    if(!cJSON_IsString(username))
    {
    goto end; //String
    }

    // mail_order->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(mail_orderJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }


    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (username && !cJSON_IsNull(username)) username_local_str = strdup(username->valuestring);
    if (comment && !cJSON_IsNull(comment)) comment_local_str = strdup(comment->valuestring);

    mail_order_local_var = mail_order_create_internal (
        id_local_var,
        status_local_str,
        username_local_str,
        comment_local_str
        );

    if (!mail_order_local_var) {
        goto end;
    }

    return mail_order_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (username_local_str) {
        free(username_local_str);
        username_local_str = NULL;
    }
    if (comment_local_str) {
        free(comment_local_str);
        comment_local_str = NULL;
    }
    return NULL;

}
