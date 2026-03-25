#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_ipmi_live_info.h"



static server_ipmi_live_info_t *server_ipmi_live_info_create_internal(
    char *text,
    char *public_ip,
    char *allowed_ip,
    char *client_username,
    char *client_password
    ) {
    server_ipmi_live_info_t *server_ipmi_live_info_local_var = malloc(sizeof(server_ipmi_live_info_t));
    if (!server_ipmi_live_info_local_var) {
        return NULL;
    }
    memset(server_ipmi_live_info_local_var, 0, sizeof(server_ipmi_live_info_t));
    server_ipmi_live_info_local_var->_library_owned = 1;
    server_ipmi_live_info_local_var->text = text;
    server_ipmi_live_info_local_var->public_ip = public_ip;
    server_ipmi_live_info_local_var->allowed_ip = allowed_ip;
    server_ipmi_live_info_local_var->client_username = client_username;
    server_ipmi_live_info_local_var->client_password = client_password;
    return server_ipmi_live_info_local_var;
}

__attribute__((deprecated)) server_ipmi_live_info_t *server_ipmi_live_info_create(
    char *text,
    char *public_ip,
    char *allowed_ip,
    char *client_username,
    char *client_password
    ) {
    server_ipmi_live_info_t *result = server_ipmi_live_info_create_internal (
        text,
        public_ip,
        allowed_ip,
        client_username,
        client_password
        );
    if (!result) {
    }
    return result;
}

void server_ipmi_live_info_free(server_ipmi_live_info_t *server_ipmi_live_info) {
    if(NULL == server_ipmi_live_info){
        return ;
    }
    if(server_ipmi_live_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_ipmi_live_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_ipmi_live_info->text) {
        free(server_ipmi_live_info->text);
        server_ipmi_live_info->text = NULL;
    }
    if (server_ipmi_live_info->public_ip) {
        free(server_ipmi_live_info->public_ip);
        server_ipmi_live_info->public_ip = NULL;
    }
    if (server_ipmi_live_info->allowed_ip) {
        free(server_ipmi_live_info->allowed_ip);
        server_ipmi_live_info->allowed_ip = NULL;
    }
    if (server_ipmi_live_info->client_username) {
        free(server_ipmi_live_info->client_username);
        server_ipmi_live_info->client_username = NULL;
    }
    if (server_ipmi_live_info->client_password) {
        free(server_ipmi_live_info->client_password);
        server_ipmi_live_info->client_password = NULL;
    }
    free(server_ipmi_live_info);
}

cJSON *server_ipmi_live_info_convertToJSON(server_ipmi_live_info_t *server_ipmi_live_info) {
    cJSON *item = cJSON_CreateObject();

    // server_ipmi_live_info->text
    if(server_ipmi_live_info->text) {
    if(cJSON_AddStringToObject(item, "text", server_ipmi_live_info->text) == NULL) {
    goto fail; //String
    }
    }


    // server_ipmi_live_info->public_ip
    if(server_ipmi_live_info->public_ip) {
    if(cJSON_AddStringToObject(item, "public_ip", server_ipmi_live_info->public_ip) == NULL) {
    goto fail; //String
    }
    }


    // server_ipmi_live_info->allowed_ip
    if(server_ipmi_live_info->allowed_ip) {
    if(cJSON_AddStringToObject(item, "allowed_ip", server_ipmi_live_info->allowed_ip) == NULL) {
    goto fail; //String
    }
    }


    // server_ipmi_live_info->client_username
    if(server_ipmi_live_info->client_username) {
    if(cJSON_AddStringToObject(item, "client_username", server_ipmi_live_info->client_username) == NULL) {
    goto fail; //String
    }
    }


    // server_ipmi_live_info->client_password
    if(server_ipmi_live_info->client_password) {
    if(cJSON_AddStringToObject(item, "client_password", server_ipmi_live_info->client_password) == NULL) {
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

server_ipmi_live_info_t *server_ipmi_live_info_parseFromJSON(cJSON *server_ipmi_live_infoJSON){

    server_ipmi_live_info_t *server_ipmi_live_info_local_var = NULL;

    char *text_local_str = NULL;

    char *public_ip_local_str = NULL;

    char *allowed_ip_local_str = NULL;

    char *client_username_local_str = NULL;

    char *client_password_local_str = NULL;

    // server_ipmi_live_info->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_infoJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // server_ipmi_live_info->public_ip
    cJSON *public_ip = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_infoJSON, "public_ip");
    if (cJSON_IsNull(public_ip)) {
        public_ip = NULL;
    }
    if (public_ip) { 
    if(!cJSON_IsString(public_ip) && !cJSON_IsNull(public_ip))
    {
    goto end; //String
    }
    }

    // server_ipmi_live_info->allowed_ip
    cJSON *allowed_ip = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_infoJSON, "allowed_ip");
    if (cJSON_IsNull(allowed_ip)) {
        allowed_ip = NULL;
    }
    if (allowed_ip) { 
    if(!cJSON_IsString(allowed_ip) && !cJSON_IsNull(allowed_ip))
    {
    goto end; //String
    }
    }

    // server_ipmi_live_info->client_username
    cJSON *client_username = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_infoJSON, "client_username");
    if (cJSON_IsNull(client_username)) {
        client_username = NULL;
    }
    if (client_username) { 
    if(!cJSON_IsString(client_username) && !cJSON_IsNull(client_username))
    {
    goto end; //String
    }
    }

    // server_ipmi_live_info->client_password
    cJSON *client_password = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_infoJSON, "client_password");
    if (cJSON_IsNull(client_password)) {
        client_password = NULL;
    }
    if (client_password) { 
    if(!cJSON_IsString(client_password) && !cJSON_IsNull(client_password))
    {
    goto end; //String
    }
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);
    if (public_ip && !cJSON_IsNull(public_ip)) public_ip_local_str = strdup(public_ip->valuestring);
    if (allowed_ip && !cJSON_IsNull(allowed_ip)) allowed_ip_local_str = strdup(allowed_ip->valuestring);
    if (client_username && !cJSON_IsNull(client_username)) client_username_local_str = strdup(client_username->valuestring);
    if (client_password && !cJSON_IsNull(client_password)) client_password_local_str = strdup(client_password->valuestring);

    server_ipmi_live_info_local_var = server_ipmi_live_info_create_internal (
        text_local_str,
        public_ip_local_str,
        allowed_ip_local_str,
        client_username_local_str,
        client_password_local_str
        );

    if (!server_ipmi_live_info_local_var) {
        goto end;
    }

    return server_ipmi_live_info_local_var;
end:
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (public_ip_local_str) {
        free(public_ip_local_str);
        public_ip_local_str = NULL;
    }
    if (allowed_ip_local_str) {
        free(allowed_ip_local_str);
        allowed_ip_local_str = NULL;
    }
    if (client_username_local_str) {
        free(client_username_local_str);
        client_username_local_str = NULL;
    }
    if (client_password_local_str) {
        free(client_password_local_str);
        client_password_local_str = NULL;
    }
    return NULL;

}
