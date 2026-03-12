#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_client_link.h"



static website_client_link_t *website_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    website_client_link_t *website_client_link_local_var = malloc(sizeof(website_client_link_t));
    if (!website_client_link_local_var) {
        return NULL;
    }
    website_client_link_local_var->label = label;
    website_client_link_local_var->link = link;
    website_client_link_local_var->icon = icon;
    website_client_link_local_var->icon_text = icon_text;
    website_client_link_local_var->help_text = help_text;
    website_client_link_local_var->other_attr = other_attr;

    website_client_link_local_var->_library_owned = 1;
    return website_client_link_local_var;
}

__attribute__((deprecated)) website_client_link_t *website_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    return website_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text,
        other_attr
        );
}

void website_client_link_free(website_client_link_t *website_client_link) {
    if(NULL == website_client_link){
        return ;
    }
    if(website_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_client_link->label) {
        free(website_client_link->label);
        website_client_link->label = NULL;
    }
    if (website_client_link->link) {
        free(website_client_link->link);
        website_client_link->link = NULL;
    }
    if (website_client_link->icon) {
        free(website_client_link->icon);
        website_client_link->icon = NULL;
    }
    if (website_client_link->icon_text) {
        free(website_client_link->icon_text);
        website_client_link->icon_text = NULL;
    }
    if (website_client_link->help_text) {
        free(website_client_link->help_text);
        website_client_link->help_text = NULL;
    }
    if (website_client_link->other_attr) {
        free(website_client_link->other_attr);
        website_client_link->other_attr = NULL;
    }
    free(website_client_link);
}

cJSON *website_client_link_convertToJSON(website_client_link_t *website_client_link) {
    cJSON *item = cJSON_CreateObject();

    // website_client_link->label
    if(website_client_link->label) {
    if(cJSON_AddStringToObject(item, "label", website_client_link->label) == NULL) {
    goto fail; //String
    }
    }


    // website_client_link->link
    if(website_client_link->link) {
    if(cJSON_AddStringToObject(item, "link", website_client_link->link) == NULL) {
    goto fail; //String
    }
    }


    // website_client_link->icon
    if(website_client_link->icon) {
    if(cJSON_AddStringToObject(item, "icon", website_client_link->icon) == NULL) {
    goto fail; //String
    }
    }


    // website_client_link->icon_text
    if(website_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", website_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // website_client_link->help_text
    if(website_client_link->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", website_client_link->help_text) == NULL) {
    goto fail; //String
    }
    }


    // website_client_link->other_attr
    if(website_client_link->other_attr) {
    if(cJSON_AddStringToObject(item, "other_attr", website_client_link->other_attr) == NULL) {
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

website_client_link_t *website_client_link_parseFromJSON(cJSON *website_client_linkJSON){

    website_client_link_t *website_client_link_local_var = NULL;

    // website_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(website_client_linkJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // website_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(website_client_linkJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (link) { 
    if(!cJSON_IsString(link) && !cJSON_IsNull(link))
    {
    goto end; //String
    }
    }

    // website_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(website_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // website_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(website_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // website_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(website_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }

    // website_client_link->other_attr
    cJSON *other_attr = cJSON_GetObjectItemCaseSensitive(website_client_linkJSON, "other_attr");
    if (cJSON_IsNull(other_attr)) {
        other_attr = NULL;
    }
    if (other_attr) { 
    if(!cJSON_IsString(other_attr) && !cJSON_IsNull(other_attr))
    {
    goto end; //String
    }
    }


    website_client_link_local_var = website_client_link_create_internal (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        link && !cJSON_IsNull(link) ? strdup(link->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL,
        other_attr && !cJSON_IsNull(other_attr) ? strdup(other_attr->valuestring) : NULL
        );

    return website_client_link_local_var;
end:
    return NULL;

}
