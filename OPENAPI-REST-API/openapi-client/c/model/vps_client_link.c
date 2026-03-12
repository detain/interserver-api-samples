#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_client_link.h"



static vps_client_link_t *vps_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
    ) {
    vps_client_link_t *vps_client_link_local_var = malloc(sizeof(vps_client_link_t));
    if (!vps_client_link_local_var) {
        return NULL;
    }
    vps_client_link_local_var->label = label;
    vps_client_link_local_var->link = link;
    vps_client_link_local_var->icon = icon;
    vps_client_link_local_var->icon_text = icon_text;
    vps_client_link_local_var->help_text = help_text;

    vps_client_link_local_var->_library_owned = 1;
    return vps_client_link_local_var;
}

__attribute__((deprecated)) vps_client_link_t *vps_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
    ) {
    return vps_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text
        );
}

void vps_client_link_free(vps_client_link_t *vps_client_link) {
    if(NULL == vps_client_link){
        return ;
    }
    if(vps_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_client_link->label) {
        free(vps_client_link->label);
        vps_client_link->label = NULL;
    }
    if (vps_client_link->link) {
        free(vps_client_link->link);
        vps_client_link->link = NULL;
    }
    if (vps_client_link->icon) {
        free(vps_client_link->icon);
        vps_client_link->icon = NULL;
    }
    if (vps_client_link->icon_text) {
        free(vps_client_link->icon_text);
        vps_client_link->icon_text = NULL;
    }
    if (vps_client_link->help_text) {
        free(vps_client_link->help_text);
        vps_client_link->help_text = NULL;
    }
    free(vps_client_link);
}

cJSON *vps_client_link_convertToJSON(vps_client_link_t *vps_client_link) {
    cJSON *item = cJSON_CreateObject();

    // vps_client_link->label
    if(vps_client_link->label) {
    if(cJSON_AddStringToObject(item, "label", vps_client_link->label) == NULL) {
    goto fail; //String
    }
    }


    // vps_client_link->link
    if(vps_client_link->link) {
    if(cJSON_AddStringToObject(item, "link", vps_client_link->link) == NULL) {
    goto fail; //String
    }
    }


    // vps_client_link->icon
    if(vps_client_link->icon) {
    if(cJSON_AddStringToObject(item, "icon", vps_client_link->icon) == NULL) {
    goto fail; //String
    }
    }


    // vps_client_link->icon_text
    if(vps_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", vps_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // vps_client_link->help_text
    if(vps_client_link->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", vps_client_link->help_text) == NULL) {
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

vps_client_link_t *vps_client_link_parseFromJSON(cJSON *vps_client_linkJSON){

    vps_client_link_t *vps_client_link_local_var = NULL;

    // vps_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(vps_client_linkJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // vps_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(vps_client_linkJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (link) { 
    if(!cJSON_IsString(link) && !cJSON_IsNull(link))
    {
    goto end; //String
    }
    }

    // vps_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(vps_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // vps_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(vps_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // vps_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(vps_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }


    vps_client_link_local_var = vps_client_link_create_internal (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        link && !cJSON_IsNull(link) ? strdup(link->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL
        );

    return vps_client_link_local_var;
end:
    return NULL;

}
