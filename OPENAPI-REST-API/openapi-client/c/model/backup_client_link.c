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
    backup_client_link_local_var->label = label;
    backup_client_link_local_var->link = link;
    backup_client_link_local_var->icon = icon;
    backup_client_link_local_var->icon_text = icon_text;
    backup_client_link_local_var->help_text = help_text;
    backup_client_link_local_var->other_attr = other_attr;

    backup_client_link_local_var->_library_owned = 1;
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
    return backup_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text,
        other_attr
        );
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


    backup_client_link_local_var = backup_client_link_create_internal (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        link && !cJSON_IsNull(link) ? strdup(link->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL,
        other_attr && !cJSON_IsNull(other_attr) ? strdup(other_attr->valuestring) : NULL
        );

    return backup_client_link_local_var;
end:
    return NULL;

}
