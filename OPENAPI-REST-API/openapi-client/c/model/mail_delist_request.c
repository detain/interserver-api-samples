#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_delist_request.h"



static mail_delist_request_t *mail_delist_request_create_internal(
    char *unblock
    ) {
    mail_delist_request_t *mail_delist_request_local_var = malloc(sizeof(mail_delist_request_t));
    if (!mail_delist_request_local_var) {
        return NULL;
    }
    memset(mail_delist_request_local_var, 0, sizeof(mail_delist_request_t));
    mail_delist_request_local_var->_library_owned = 1;
    mail_delist_request_local_var->unblock = unblock;
    return mail_delist_request_local_var;
}

__attribute__((deprecated)) mail_delist_request_t *mail_delist_request_create(
    char *unblock
    ) {
    mail_delist_request_t *result = mail_delist_request_create_internal (
        unblock
        );
    if (!result) {
    }
    return result;
}

void mail_delist_request_free(mail_delist_request_t *mail_delist_request) {
    if(NULL == mail_delist_request){
        return ;
    }
    if(mail_delist_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_delist_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_delist_request->unblock) {
        free(mail_delist_request->unblock);
        mail_delist_request->unblock = NULL;
    }
    free(mail_delist_request);
}

cJSON *mail_delist_request_convertToJSON(mail_delist_request_t *mail_delist_request) {
    cJSON *item = cJSON_CreateObject();

    // mail_delist_request->unblock
    if(mail_delist_request->unblock) {
    if(cJSON_AddStringToObject(item, "unblock", mail_delist_request->unblock) == NULL) {
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

mail_delist_request_t *mail_delist_request_parseFromJSON(cJSON *mail_delist_requestJSON){

    mail_delist_request_t *mail_delist_request_local_var = NULL;

    char *unblock_local_str = NULL;

    // mail_delist_request->unblock
    cJSON *unblock = cJSON_GetObjectItemCaseSensitive(mail_delist_requestJSON, "unblock");
    if (cJSON_IsNull(unblock)) {
        unblock = NULL;
    }
    if (unblock) { 
    if(!cJSON_IsString(unblock) && !cJSON_IsNull(unblock))
    {
    goto end; //String
    }
    }


    if (unblock && !cJSON_IsNull(unblock)) unblock_local_str = strdup(unblock->valuestring);

    mail_delist_request_local_var = mail_delist_request_create_internal (
        unblock_local_str
        );

    if (!mail_delist_request_local_var) {
        goto end;
    }

    return mail_delist_request_local_var;
end:
    if (unblock_local_str) {
        free(unblock_local_str);
        unblock_local_str = NULL;
    }
    return NULL;

}
