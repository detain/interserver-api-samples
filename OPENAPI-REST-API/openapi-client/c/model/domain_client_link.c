#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_client_link.h"



static domain_client_link_t *domain_client_link_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
    ) {
    domain_client_link_t *domain_client_link_local_var = malloc(sizeof(domain_client_link_t));
    if (!domain_client_link_local_var) {
        return NULL;
    }
    domain_client_link_local_var->label = label;
    domain_client_link_local_var->link = link;
    domain_client_link_local_var->icon = icon;
    domain_client_link_local_var->icon_text = icon_text;
    domain_client_link_local_var->help_text = help_text;

    domain_client_link_local_var->_library_owned = 1;
    return domain_client_link_local_var;
}

__attribute__((deprecated)) domain_client_link_t *domain_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
    ) {
    return domain_client_link_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text
        );
}

void domain_client_link_free(domain_client_link_t *domain_client_link) {
    if(NULL == domain_client_link){
        return ;
    }
    if(domain_client_link->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_client_link_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_client_link->label) {
        free(domain_client_link->label);
        domain_client_link->label = NULL;
    }
    if (domain_client_link->link) {
        free(domain_client_link->link);
        domain_client_link->link = NULL;
    }
    if (domain_client_link->icon) {
        free(domain_client_link->icon);
        domain_client_link->icon = NULL;
    }
    if (domain_client_link->icon_text) {
        free(domain_client_link->icon_text);
        domain_client_link->icon_text = NULL;
    }
    if (domain_client_link->help_text) {
        free(domain_client_link->help_text);
        domain_client_link->help_text = NULL;
    }
    free(domain_client_link);
}

cJSON *domain_client_link_convertToJSON(domain_client_link_t *domain_client_link) {
    cJSON *item = cJSON_CreateObject();

    // domain_client_link->label
    if(domain_client_link->label) {
    if(cJSON_AddStringToObject(item, "label", domain_client_link->label) == NULL) {
    goto fail; //String
    }
    }


    // domain_client_link->link
    if(domain_client_link->link) {
    if(cJSON_AddStringToObject(item, "link", domain_client_link->link) == NULL) {
    goto fail; //String
    }
    }


    // domain_client_link->icon
    if(domain_client_link->icon) {
    if(cJSON_AddStringToObject(item, "icon", domain_client_link->icon) == NULL) {
    goto fail; //String
    }
    }


    // domain_client_link->icon_text
    if(domain_client_link->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", domain_client_link->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // domain_client_link->help_text
    if(domain_client_link->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", domain_client_link->help_text) == NULL) {
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

domain_client_link_t *domain_client_link_parseFromJSON(cJSON *domain_client_linkJSON){

    domain_client_link_t *domain_client_link_local_var = NULL;

    // domain_client_link->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(domain_client_linkJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // domain_client_link->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(domain_client_linkJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (link) { 
    if(!cJSON_IsString(link) && !cJSON_IsNull(link))
    {
    goto end; //String
    }
    }

    // domain_client_link->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(domain_client_linkJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // domain_client_link->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(domain_client_linkJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // domain_client_link->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(domain_client_linkJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }


    domain_client_link_local_var = domain_client_link_create_internal (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        link && !cJSON_IsNull(link) ? strdup(link->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL
        );

    return domain_client_link_local_var;
end:
    return NULL;

}
