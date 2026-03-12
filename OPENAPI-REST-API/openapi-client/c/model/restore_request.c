#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "restore_request.h"



static restore_request_t *restore_request_create_internal(
    char *backup,
    char *password
    ) {
    restore_request_t *restore_request_local_var = malloc(sizeof(restore_request_t));
    if (!restore_request_local_var) {
        return NULL;
    }
    restore_request_local_var->backup = backup;
    restore_request_local_var->password = password;

    restore_request_local_var->_library_owned = 1;
    return restore_request_local_var;
}

__attribute__((deprecated)) restore_request_t *restore_request_create(
    char *backup,
    char *password
    ) {
    return restore_request_create_internal (
        backup,
        password
        );
}

void restore_request_free(restore_request_t *restore_request) {
    if(NULL == restore_request){
        return ;
    }
    if(restore_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "restore_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (restore_request->backup) {
        free(restore_request->backup);
        restore_request->backup = NULL;
    }
    if (restore_request->password) {
        free(restore_request->password);
        restore_request->password = NULL;
    }
    free(restore_request);
}

cJSON *restore_request_convertToJSON(restore_request_t *restore_request) {
    cJSON *item = cJSON_CreateObject();

    // restore_request->backup
    if(restore_request->backup) {
    if(cJSON_AddStringToObject(item, "backup", restore_request->backup) == NULL) {
    goto fail; //String
    }
    }


    // restore_request->password
    if(restore_request->password) {
    if(cJSON_AddStringToObject(item, "password", restore_request->password) == NULL) {
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

restore_request_t *restore_request_parseFromJSON(cJSON *restore_requestJSON){

    restore_request_t *restore_request_local_var = NULL;

    // restore_request->backup
    cJSON *backup = cJSON_GetObjectItemCaseSensitive(restore_requestJSON, "backup");
    if (cJSON_IsNull(backup)) {
        backup = NULL;
    }
    if (backup) { 
    if(!cJSON_IsString(backup) && !cJSON_IsNull(backup))
    {
    goto end; //String
    }
    }

    // restore_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(restore_requestJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }


    restore_request_local_var = restore_request_create_internal (
        backup && !cJSON_IsNull(backup) ? strdup(backup->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL
        );

    return restore_request_local_var;
end:
    return NULL;

}
