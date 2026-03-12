#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "download_qs_backup_request.h"



static download_qs_backup_request_t *download_qs_backup_request_create_internal(
    char *file
    ) {
    download_qs_backup_request_t *download_qs_backup_request_local_var = malloc(sizeof(download_qs_backup_request_t));
    if (!download_qs_backup_request_local_var) {
        return NULL;
    }
    download_qs_backup_request_local_var->file = file;

    download_qs_backup_request_local_var->_library_owned = 1;
    return download_qs_backup_request_local_var;
}

__attribute__((deprecated)) download_qs_backup_request_t *download_qs_backup_request_create(
    char *file
    ) {
    return download_qs_backup_request_create_internal (
        file
        );
}

void download_qs_backup_request_free(download_qs_backup_request_t *download_qs_backup_request) {
    if(NULL == download_qs_backup_request){
        return ;
    }
    if(download_qs_backup_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "download_qs_backup_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (download_qs_backup_request->file) {
        free(download_qs_backup_request->file);
        download_qs_backup_request->file = NULL;
    }
    free(download_qs_backup_request);
}

cJSON *download_qs_backup_request_convertToJSON(download_qs_backup_request_t *download_qs_backup_request) {
    cJSON *item = cJSON_CreateObject();

    // download_qs_backup_request->file
    if (!download_qs_backup_request->file) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "file", download_qs_backup_request->file) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

download_qs_backup_request_t *download_qs_backup_request_parseFromJSON(cJSON *download_qs_backup_requestJSON){

    download_qs_backup_request_t *download_qs_backup_request_local_var = NULL;

    // download_qs_backup_request->file
    cJSON *file = cJSON_GetObjectItemCaseSensitive(download_qs_backup_requestJSON, "file");
    if (cJSON_IsNull(file)) {
        file = NULL;
    }
    if (!file) {
        goto end;
    }

    
    if(!cJSON_IsString(file))
    {
    goto end; //String
    }


    download_qs_backup_request_local_var = download_qs_backup_request_create_internal (
        strdup(file->valuestring)
        );

    return download_qs_backup_request_local_var;
end:
    return NULL;

}
