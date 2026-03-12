#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_client_link.h"



static mail_client_link_t *mail_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    mail_client_link_t *mail_client_link_local_var = malloc(sizeof(mail_client_link_t));
    if (!mail_client_link_local_var) {
        return NULL;
    }
    mail_client_link_local_var->label = label;
    mail_client_link_local_var->link = link;
    mail_client_link_local_var->icon = icon;
    mail_client_link_local_var->icon_text = icon_text;
    mail_client_link_local_var->help_text = help_text;
    mail_client_link_local_var->other_attr = other_attr;

    mail_client_link_local_var->_library_owned = 1;
    return mail_client_link_local_var;
}

__attribute__((deprecated)) mail_client_link_t *mail_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    return mail_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text,
        other_attr
        );
}

void mail_client_link_free(mail_client_link_t *mail_client_link) {
    if(NULL == mail_client_link){
        return ;
    }
    if(mail_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_client_link->label) {
        free(mail_client_link->label);
        mail_client_link->label = NULL;
    }
    if (mail_client_link->link) {
        free(mail_client_link->link);
        mail_client_link->link = NULL;
    }
    if (mail_client_link->icon) {
        free(mail_client_link->icon);
        mail_client_link->icon = NULL;
    }
    if (mail_client_link->icon_text) {
        free(mail_client_link->icon_text);
        mail_client_link->icon_text = NULL;
    }
    if (mail_client_link->help_text) {
        free(mail_client_link->help_text);
        mail_client_link->help_text = NULL;
    }
    if (mail_client_link->other_attr) {
        free(mail_client_link->other_attr);
        mail_client_link->other_attr = NULL;
    }
    free(mail_client_link);
}

cJSON *mail_client_link_convertToJSON(mail_client_link_t *mail_client_link) {
    cJSON *item = cJSON_CreateObject();

    // mail_client_link->label
    if(mail_client_link->label) {
    if(cJSON_AddStringToObject(item, "label", mail_client_link->label) == NULL) {
    goto fail; //String
    }
    }


    // mail_client_link->link
    if(mail_client_link->link) {
    if(cJSON_AddStringToObject(item, "link", mail_client_link->link) == NULL) {
    goto fail; //String
    }
    }


    // mail_client_link->icon
    if(mail_client_link->icon) {
    if(cJSON_AddStringToObject(item, "icon", mail_client_link->icon) == NULL) {
    goto fail; //String
    }
    }


    // mail_client_link->icon_text
    if(mail_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", mail_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // mail_client_link->help_text
    if(mail_client_link->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", mail_client_link->help_text) == NULL) {
    goto fail; //String
    }
    }


    // mail_client_link->other_attr
    if(mail_client_link->other_attr) {
    if(cJSON_AddStringToObject(item, "other_attr", mail_client_link->other_attr) == NULL) {
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

mail_client_link_t *mail_client_link_parseFromJSON(cJSON *mail_client_linkJSON){

    mail_client_link_t *mail_client_link_local_var = NULL;

    // mail_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(mail_client_linkJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // mail_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(mail_client_linkJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (link) { 
    if(!cJSON_IsString(link) && !cJSON_IsNull(link))
    {
    goto end; //String
    }
    }

    // mail_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(mail_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // mail_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(mail_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // mail_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(mail_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }

    // mail_client_link->other_attr
    cJSON *other_attr = cJSON_GetObjectItemCaseSensitive(mail_client_linkJSON, "other_attr");
    if (cJSON_IsNull(other_attr)) {
        other_attr = NULL;
    }
    if (other_attr) { 
    if(!cJSON_IsString(other_attr) && !cJSON_IsNull(other_attr))
    {
    goto end; //String
    }
    }


    mail_client_link_local_var = mail_client_link_create_internal (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        link && !cJSON_IsNull(link) ? strdup(link->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL,
        other_attr && !cJSON_IsNull(other_attr) ? strdup(other_attr->valuestring) : NULL
        );

    return mail_client_link_local_var;
end:
    return NULL;

}
