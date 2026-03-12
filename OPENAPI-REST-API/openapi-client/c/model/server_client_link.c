#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_client_link.h"



static server_client_link_t *server_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
    ) {
    server_client_link_t *server_client_link_local_var = malloc(sizeof(server_client_link_t));
    if (!server_client_link_local_var) {
        return NULL;
    }
    server_client_link_local_var->label = label;
    server_client_link_local_var->link = link;
    server_client_link_local_var->icon = icon;
    server_client_link_local_var->icon_text = icon_text;
    server_client_link_local_var->help_text = help_text;

    server_client_link_local_var->_library_owned = 1;
    return server_client_link_local_var;
}

__attribute__((deprecated)) server_client_link_t *server_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
    ) {
    return server_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text
        );
}

void server_client_link_free(server_client_link_t *server_client_link) {
    if(NULL == server_client_link){
        return ;
    }
    if(server_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_client_link->label) {
        free(server_client_link->label);
        server_client_link->label = NULL;
    }
    if (server_client_link->link) {
        free(server_client_link->link);
        server_client_link->link = NULL;
    }
    if (server_client_link->icon) {
        free(server_client_link->icon);
        server_client_link->icon = NULL;
    }
    if (server_client_link->icon_text) {
        free(server_client_link->icon_text);
        server_client_link->icon_text = NULL;
    }
    if (server_client_link->help_text) {
        free(server_client_link->help_text);
        server_client_link->help_text = NULL;
    }
    free(server_client_link);
}

cJSON *server_client_link_convertToJSON(server_client_link_t *server_client_link) {
    cJSON *item = cJSON_CreateObject();

    // server_client_link->label
    if (!server_client_link->label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "label", server_client_link->label) == NULL) {
    goto fail; //String
    }


    // server_client_link->link
    if (!server_client_link->link) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "link", server_client_link->link) == NULL) {
    goto fail; //String
    }


    // server_client_link->icon
    if(server_client_link->icon) {
    if(cJSON_AddStringToObject(item, "icon", server_client_link->icon) == NULL) {
    goto fail; //String
    }
    }


    // server_client_link->icon_text
    if(server_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", server_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // server_client_link->help_text
    if(server_client_link->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", server_client_link->help_text) == NULL) {
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

server_client_link_t *server_client_link_parseFromJSON(cJSON *server_client_linkJSON){

    server_client_link_t *server_client_link_local_var = NULL;

    // server_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(server_client_linkJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (!label) {
        goto end;
    }

    
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }

    // server_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(server_client_linkJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (!link) {
        goto end;
    }

    
    if(!cJSON_IsString(link))
    {
    goto end; //String
    }

    // server_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(server_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // server_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(server_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // server_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(server_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }


    server_client_link_local_var = server_client_link_create_internal (
        strdup(label->valuestring),
        strdup(link->valuestring),
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL
        );

    return server_client_link_local_var;
end:
    return NULL;

}
