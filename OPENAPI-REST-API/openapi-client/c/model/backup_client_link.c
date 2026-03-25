#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_client_link.h"



static backup_client_link_t *backup_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    backup_client_link_t *backup_client_link_local_var = malloc(sizeof(backup_client_link_t));
    if (!backup_client_link_local_var) {
        return NULL;
    }
    memset(backup_client_link_local_var, 0, sizeof(backup_client_link_t));
    backup_client_link_local_var->_library_owned = 1;
    backup_client_link_local_var->label = label;
    backup_client_link_local_var->link = link;
    backup_client_link_local_var->icon = icon;
    backup_client_link_local_var->icon_text = icon_text;
    backup_client_link_local_var->help_text = help_text;
    backup_client_link_local_var->other_attr = other_attr;
    return backup_client_link_local_var;
}

__attribute__((deprecated)) backup_client_link_t *backup_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    backup_client_link_t *result = backup_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text,
        other_attr
        );
    if (!result) {
    }
    return result;
}

void backup_client_link_free(backup_client_link_t *backup_client_link) {
    if(NULL == backup_client_link){
        return ;
    }
    if(backup_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_client_link->label) {
        free(backup_client_link->label);
        backup_client_link->label = NULL;
    }
    if (backup_client_link->link) {
        free(backup_client_link->link);
        backup_client_link->link = NULL;
    }
    if (backup_client_link->icon) {
        free(backup_client_link->icon);
        backup_client_link->icon = NULL;
    }
    if (backup_client_link->icon_text) {
        free(backup_client_link->icon_text);
        backup_client_link->icon_text = NULL;
    }
    if (backup_client_link->help_text) {
        free(backup_client_link->help_text);
        backup_client_link->help_text = NULL;
    }
    if (backup_client_link->other_attr) {
        free(backup_client_link->other_attr);
        backup_client_link->other_attr = NULL;
    }
    free(backup_client_link);
}

cJSON *backup_client_link_convertToJSON(backup_client_link_t *backup_client_link) {
    cJSON *item = cJSON_CreateObject();

    // backup_client_link->label
    if(backup_client_link->label) {
    if(cJSON_AddStringToObject(item, "label", backup_client_link->label) == NULL) {
    goto fail; //String
    }
    }


    // backup_client_link->link
    if(backup_client_link->link) {
    if(cJSON_AddStringToObject(item, "link", backup_client_link->link) == NULL) {
    goto fail; //String
    }
    }


    // backup_client_link->icon
    if(backup_client_link->icon) {
    if(cJSON_AddStringToObject(item, "icon", backup_client_link->icon) == NULL) {
    goto fail; //String
    }
    }


    // backup_client_link->icon_text
    if(backup_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", backup_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // backup_client_link->help_text
    if(backup_client_link->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", backup_client_link->help_text) == NULL) {
    goto fail; //String
    }
    }


    // backup_client_link->other_attr
    if(backup_client_link->other_attr) {
    if(cJSON_AddStringToObject(item, "other_attr", backup_client_link->other_attr) == NULL) {
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

backup_client_link_t *backup_client_link_parseFromJSON(cJSON *backup_client_linkJSON){

    backup_client_link_t *backup_client_link_local_var = NULL;

    char *label_local_str = NULL;

    char *link_local_str = NULL;

    char *icon_local_str = NULL;

    char *icon_text_local_str = NULL;

    char *help_text_local_str = NULL;

    char *other_attr_local_str = NULL;

    // backup_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(backup_client_linkJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // backup_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(backup_client_linkJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (link) { 
    if(!cJSON_IsString(link) && !cJSON_IsNull(link))
    {
    goto end; //String
    }
    }

    // backup_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(backup_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // backup_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(backup_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // backup_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(backup_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }

    // backup_client_link->other_attr
    cJSON *other_attr = cJSON_GetObjectItemCaseSensitive(backup_client_linkJSON, "other_attr");
    if (cJSON_IsNull(other_attr)) {
        other_attr = NULL;
    }
    if (other_attr) { 
    if(!cJSON_IsString(other_attr) && !cJSON_IsNull(other_attr))
    {
    goto end; //String
    }
    }


    if (label && !cJSON_IsNull(label)) label_local_str = strdup(label->valuestring);
    if (link && !cJSON_IsNull(link)) link_local_str = strdup(link->valuestring);
    if (icon && !cJSON_IsNull(icon)) icon_local_str = strdup(icon->valuestring);
    if (icon_text && !cJSON_IsNull(icon_text)) icon_text_local_str = strdup(icon_text->valuestring);
    if (help_text && !cJSON_IsNull(help_text)) help_text_local_str = strdup(help_text->valuestring);
    if (other_attr && !cJSON_IsNull(other_attr)) other_attr_local_str = strdup(other_attr->valuestring);

    backup_client_link_local_var = backup_client_link_create_internal (
        label_local_str,
        link_local_str,
        icon_local_str,
        icon_text_local_str,
        help_text_local_str,
        other_attr_local_str
        );

    if (!backup_client_link_local_var) {
        goto end;
    }

    return backup_client_link_local_var;
end:
    if (label_local_str) {
        free(label_local_str);
        label_local_str = NULL;
    }
    if (link_local_str) {
        free(link_local_str);
        link_local_str = NULL;
    }
    if (icon_local_str) {
        free(icon_local_str);
        icon_local_str = NULL;
    }
    if (icon_text_local_str) {
        free(icon_text_local_str);
        icon_text_local_str = NULL;
    }
    if (help_text_local_str) {
        free(help_text_local_str);
        help_text_local_str = NULL;
    }
    if (other_attr_local_str) {
        free(other_attr_local_str);
        other_attr_local_str = NULL;
    }
    return NULL;

}
