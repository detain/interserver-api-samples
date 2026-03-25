#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_client_link.h"



static license_client_link_t *license_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *help_text,
    char *icon_text,
    char *other_attr
    ) {
    license_client_link_t *license_client_link_local_var = malloc(sizeof(license_client_link_t));
    if (!license_client_link_local_var) {
        return NULL;
    }
    memset(license_client_link_local_var, 0, sizeof(license_client_link_t));
    license_client_link_local_var->_library_owned = 1;
    license_client_link_local_var->label = label;
    license_client_link_local_var->link = link;
    license_client_link_local_var->icon = icon;
    license_client_link_local_var->help_text = help_text;
    license_client_link_local_var->icon_text = icon_text;
    license_client_link_local_var->other_attr = other_attr;
    return license_client_link_local_var;
}

__attribute__((deprecated)) license_client_link_t *license_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *help_text,
    char *icon_text,
    char *other_attr
    ) {
    license_client_link_t *result = license_client_link_create_internal (
        label,
        link,
        icon,
        help_text,
        icon_text,
        other_attr
        );
    if (!result) {
    }
    return result;
}

void license_client_link_free(license_client_link_t *license_client_link) {
    if(NULL == license_client_link){
        return ;
    }
    if(license_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_client_link->label) {
        free(license_client_link->label);
        license_client_link->label = NULL;
    }
    if (license_client_link->link) {
        free(license_client_link->link);
        license_client_link->link = NULL;
    }
    if (license_client_link->icon) {
        free(license_client_link->icon);
        license_client_link->icon = NULL;
    }
    if (license_client_link->help_text) {
        free(license_client_link->help_text);
        license_client_link->help_text = NULL;
    }
    if (license_client_link->icon_text) {
        free(license_client_link->icon_text);
        license_client_link->icon_text = NULL;
    }
    if (license_client_link->other_attr) {
        free(license_client_link->other_attr);
        license_client_link->other_attr = NULL;
    }
    free(license_client_link);
}

cJSON *license_client_link_convertToJSON(license_client_link_t *license_client_link) {
    cJSON *item = cJSON_CreateObject();

    // license_client_link->label
    if (!license_client_link->label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "label", license_client_link->label) == NULL) {
    goto fail; //String
    }


    // license_client_link->link
    if (!license_client_link->link) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "link", license_client_link->link) == NULL) {
    goto fail; //String
    }


    // license_client_link->icon
    if (!license_client_link->icon) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "icon", license_client_link->icon) == NULL) {
    goto fail; //String
    }


    // license_client_link->help_text
    if (!license_client_link->help_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "help_text", license_client_link->help_text) == NULL) {
    goto fail; //String
    }


    // license_client_link->icon_text
    if(license_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", license_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // license_client_link->other_attr
    if(license_client_link->other_attr) {
    if(cJSON_AddStringToObject(item, "other_attr", license_client_link->other_attr) == NULL) {
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

license_client_link_t *license_client_link_parseFromJSON(cJSON *license_client_linkJSON){

    license_client_link_t *license_client_link_local_var = NULL;

    char *label_local_str = NULL;

    char *link_local_str = NULL;

    char *icon_local_str = NULL;

    char *help_text_local_str = NULL;

    char *icon_text_local_str = NULL;

    char *other_attr_local_str = NULL;

    // license_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(license_client_linkJSON, "label");
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

    // license_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(license_client_linkJSON, "link");
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

    // license_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(license_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (!icon) {
        goto end;
    }

    
    if(!cJSON_IsString(icon))
    {
    goto end; //String
    }

    // license_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(license_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (!help_text) {
        goto end;
    }

    
    if(!cJSON_IsString(help_text))
    {
    goto end; //String
    }

    // license_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(license_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // license_client_link->other_attr
    cJSON *other_attr = cJSON_GetObjectItemCaseSensitive(license_client_linkJSON, "other_attr");
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
    if (help_text && !cJSON_IsNull(help_text)) help_text_local_str = strdup(help_text->valuestring);
    if (icon_text && !cJSON_IsNull(icon_text)) icon_text_local_str = strdup(icon_text->valuestring);
    if (other_attr && !cJSON_IsNull(other_attr)) other_attr_local_str = strdup(other_attr->valuestring);

    license_client_link_local_var = license_client_link_create_internal (
        label_local_str,
        link_local_str,
        icon_local_str,
        help_text_local_str,
        icon_text_local_str,
        other_attr_local_str
        );

    if (!license_client_link_local_var) {
        goto end;
    }

    return license_client_link_local_var;
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
    if (help_text_local_str) {
        free(help_text_local_str);
        help_text_local_str = NULL;
    }
    if (icon_text_local_str) {
        free(icon_text_local_str);
        icon_text_local_str = NULL;
    }
    if (other_attr_local_str) {
        free(other_attr_local_str);
        other_attr_local_str = NULL;
    }
    return NULL;

}
