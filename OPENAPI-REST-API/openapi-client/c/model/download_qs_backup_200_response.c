#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "download_qs_backup_200_response.h"



static download_qs_backup_200_response_t *download_qs_backup_200_response_create_internal(
    char *text,
    char *url
    ) {
    download_qs_backup_200_response_t *download_qs_backup_200_response_local_var = malloc(sizeof(download_qs_backup_200_response_t));
    if (!download_qs_backup_200_response_local_var) {
        return NULL;
    }
    download_qs_backup_200_response_local_var->text = text;
    download_qs_backup_200_response_local_var->url = url;

    download_qs_backup_200_response_local_var->_library_owned = 1;
    return download_qs_backup_200_response_local_var;
}

__attribute__((deprecated)) download_qs_backup_200_response_t *download_qs_backup_200_response_create(
    char *text,
    char *url
    ) {
    return download_qs_backup_200_response_create_internal (
        text,
        url
        );
}

void download_qs_backup_200_response_free(download_qs_backup_200_response_t *download_qs_backup_200_response) {
    if(NULL == download_qs_backup_200_response){
        return ;
    }
    if(download_qs_backup_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "download_qs_backup_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (download_qs_backup_200_response->text) {
        free(download_qs_backup_200_response->text);
        download_qs_backup_200_response->text = NULL;
    }
    if (download_qs_backup_200_response->url) {
        free(download_qs_backup_200_response->url);
        download_qs_backup_200_response->url = NULL;
    }
    free(download_qs_backup_200_response);
}

cJSON *download_qs_backup_200_response_convertToJSON(download_qs_backup_200_response_t *download_qs_backup_200_response) {
    cJSON *item = cJSON_CreateObject();

    // download_qs_backup_200_response->text
    if(download_qs_backup_200_response->text) {
    if(cJSON_AddStringToObject(item, "text", download_qs_backup_200_response->text) == NULL) {
    goto fail; //String
    }
    }


    // download_qs_backup_200_response->url
    if(download_qs_backup_200_response->url) {
    if(cJSON_AddStringToObject(item, "url", download_qs_backup_200_response->url) == NULL) {
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

download_qs_backup_200_response_t *download_qs_backup_200_response_parseFromJSON(cJSON *download_qs_backup_200_responseJSON){

    download_qs_backup_200_response_t *download_qs_backup_200_response_local_var = NULL;

    // download_qs_backup_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(download_qs_backup_200_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // download_qs_backup_200_response->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(download_qs_backup_200_responseJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    download_qs_backup_200_response_local_var = download_qs_backup_200_response_create_internal (
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return download_qs_backup_200_response_local_var;
end:
    return NULL;

}
