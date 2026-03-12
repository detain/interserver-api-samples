#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_row.h"



static server_row_t *server_row_create_internal(
    char *server_id,
    char *account_lid,
    char *server_hostname,
    char *server_status
    ) {
    server_row_t *server_row_local_var = malloc(sizeof(server_row_t));
    if (!server_row_local_var) {
        return NULL;
    }
    server_row_local_var->server_id = server_id;
    server_row_local_var->account_lid = account_lid;
    server_row_local_var->server_hostname = server_hostname;
    server_row_local_var->server_status = server_status;

    server_row_local_var->_library_owned = 1;
    return server_row_local_var;
}

__attribute__((deprecated)) server_row_t *server_row_create(
    char *server_id,
    char *account_lid,
    char *server_hostname,
    char *server_status
    ) {
    return server_row_create_internal (
        server_id,
        account_lid,
        server_hostname,
        server_status
        );
}

void server_row_free(server_row_t *server_row) {
    if(NULL == server_row){
        return ;
    }
    if(server_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_row->server_id) {
        free(server_row->server_id);
        server_row->server_id = NULL;
    }
    if (server_row->account_lid) {
        free(server_row->account_lid);
        server_row->account_lid = NULL;
    }
    if (server_row->server_hostname) {
        free(server_row->server_hostname);
        server_row->server_hostname = NULL;
    }
    if (server_row->server_status) {
        free(server_row->server_status);
        server_row->server_status = NULL;
    }
    free(server_row);
}

cJSON *server_row_convertToJSON(server_row_t *server_row) {
    cJSON *item = cJSON_CreateObject();

    // server_row->server_id
    if (!server_row->server_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "server_id", server_row->server_id) == NULL) {
    goto fail; //String
    }


    // server_row->account_lid
    if (!server_row->account_lid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "account_lid", server_row->account_lid) == NULL) {
    goto fail; //String
    }


    // server_row->server_hostname
    if (!server_row->server_hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "server_hostname", server_row->server_hostname) == NULL) {
    goto fail; //String
    }


    // server_row->server_status
    if (!server_row->server_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "server_status", server_row->server_status) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_row_t *server_row_parseFromJSON(cJSON *server_rowJSON){

    server_row_t *server_row_local_var = NULL;

    // server_row->server_id
    cJSON *server_id = cJSON_GetObjectItemCaseSensitive(server_rowJSON, "server_id");
    if (cJSON_IsNull(server_id)) {
        server_id = NULL;
    }
    if (!server_id) {
        goto end;
    }

    
    if(!cJSON_IsString(server_id))
    {
    goto end; //String
    }

    // server_row->account_lid
    cJSON *account_lid = cJSON_GetObjectItemCaseSensitive(server_rowJSON, "account_lid");
    if (cJSON_IsNull(account_lid)) {
        account_lid = NULL;
    }
    if (!account_lid) {
        goto end;
    }

    
    if(!cJSON_IsString(account_lid))
    {
    goto end; //String
    }

    // server_row->server_hostname
    cJSON *server_hostname = cJSON_GetObjectItemCaseSensitive(server_rowJSON, "server_hostname");
    if (cJSON_IsNull(server_hostname)) {
        server_hostname = NULL;
    }
    if (!server_hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(server_hostname))
    {
    goto end; //String
    }

    // server_row->server_status
    cJSON *server_status = cJSON_GetObjectItemCaseSensitive(server_rowJSON, "server_status");
    if (cJSON_IsNull(server_status)) {
        server_status = NULL;
    }
    if (!server_status) {
        goto end;
    }

    
    if(!cJSON_IsString(server_status))
    {
    goto end; //String
    }


    server_row_local_var = server_row_create_internal (
        strdup(server_id->valuestring),
        strdup(account_lid->valuestring),
        strdup(server_hostname->valuestring),
        strdup(server_status->valuestring)
        );

    return server_row_local_var;
end:
    return NULL;

}
