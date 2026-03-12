#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_client_links_inner.h"



static get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_create_internal(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_local_var = malloc(sizeof(get_scrub_ip_details_200_response_client_links_inner_t));
    if (!get_scrub_ip_details_200_response_client_links_inner_local_var) {
        return NULL;
    }
    get_scrub_ip_details_200_response_client_links_inner_local_var->label = label;
    get_scrub_ip_details_200_response_client_links_inner_local_var->link = link;
    get_scrub_ip_details_200_response_client_links_inner_local_var->icon = icon;
    get_scrub_ip_details_200_response_client_links_inner_local_var->icon_text = icon_text;
    get_scrub_ip_details_200_response_client_links_inner_local_var->help_text = help_text;
    get_scrub_ip_details_200_response_client_links_inner_local_var->other_attr = other_attr;

    get_scrub_ip_details_200_response_client_links_inner_local_var->_library_owned = 1;
    return get_scrub_ip_details_200_response_client_links_inner_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
    ) {
    return get_scrub_ip_details_200_response_client_links_inner_create_internal (
        label,
        link,
        icon,
        icon_text,
        help_text,
        other_attr
        );
}

void get_scrub_ip_details_200_response_client_links_inner_free(get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner) {
    if(NULL == get_scrub_ip_details_200_response_client_links_inner){
        return ;
    }
    if(get_scrub_ip_details_200_response_client_links_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_client_links_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_client_links_inner->label) {
        free(get_scrub_ip_details_200_response_client_links_inner->label);
        get_scrub_ip_details_200_response_client_links_inner->label = NULL;
    }
    if (get_scrub_ip_details_200_response_client_links_inner->link) {
        free(get_scrub_ip_details_200_response_client_links_inner->link);
        get_scrub_ip_details_200_response_client_links_inner->link = NULL;
    }
    if (get_scrub_ip_details_200_response_client_links_inner->icon) {
        free(get_scrub_ip_details_200_response_client_links_inner->icon);
        get_scrub_ip_details_200_response_client_links_inner->icon = NULL;
    }
    if (get_scrub_ip_details_200_response_client_links_inner->icon_text) {
        free(get_scrub_ip_details_200_response_client_links_inner->icon_text);
        get_scrub_ip_details_200_response_client_links_inner->icon_text = NULL;
    }
    if (get_scrub_ip_details_200_response_client_links_inner->help_text) {
        free(get_scrub_ip_details_200_response_client_links_inner->help_text);
        get_scrub_ip_details_200_response_client_links_inner->help_text = NULL;
    }
    if (get_scrub_ip_details_200_response_client_links_inner->other_attr) {
        free(get_scrub_ip_details_200_response_client_links_inner->other_attr);
        get_scrub_ip_details_200_response_client_links_inner->other_attr = NULL;
    }
    free(get_scrub_ip_details_200_response_client_links_inner);
}

cJSON *get_scrub_ip_details_200_response_client_links_inner_convertToJSON(get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_client_links_inner->label
    if(get_scrub_ip_details_200_response_client_links_inner->label) {
    if(cJSON_AddStringToObject(item, "label", get_scrub_ip_details_200_response_client_links_inner->label) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_client_links_inner->link
    if(get_scrub_ip_details_200_response_client_links_inner->link) {
    if(cJSON_AddStringToObject(item, "link", get_scrub_ip_details_200_response_client_links_inner->link) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_client_links_inner->icon
    if(get_scrub_ip_details_200_response_client_links_inner->icon) {
    if(cJSON_AddStringToObject(item, "icon", get_scrub_ip_details_200_response_client_links_inner->icon) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_client_links_inner->icon_text
    if(get_scrub_ip_details_200_response_client_links_inner->icon_text) {
    if(cJSON_AddStringToObject(item, "icon_text", get_scrub_ip_details_200_response_client_links_inner->icon_text) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_client_links_inner->help_text
    if(get_scrub_ip_details_200_response_client_links_inner->help_text) {
    if(cJSON_AddStringToObject(item, "help_text", get_scrub_ip_details_200_response_client_links_inner->help_text) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_client_links_inner->other_attr
    if(get_scrub_ip_details_200_response_client_links_inner->other_attr) {
    if(cJSON_AddStringToObject(item, "other_attr", get_scrub_ip_details_200_response_client_links_inner->other_attr) == NULL) {
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

get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_client_links_innerJSON){

    get_scrub_ip_details_200_response_client_links_inner_t *get_scrub_ip_details_200_response_client_links_inner_local_var = NULL;

    // get_scrub_ip_details_200_response_client_links_inner->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_client_links_innerJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_client_links_inner->link
    cJSON *link = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_client_links_innerJSON, "link");
    if (cJSON_IsNull(link)) {
        link = NULL;
    }
    if (link) { 
    if(!cJSON_IsString(link) && !cJSON_IsNull(link))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_client_links_inner->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_client_links_innerJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_client_links_inner->icon_text
    cJSON *icon_text = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_client_links_innerJSON, "icon_text");
    if (cJSON_IsNull(icon_text)) {
        icon_text = NULL;
    }
    if (icon_text) { 
    if(!cJSON_IsString(icon_text) && !cJSON_IsNull(icon_text))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_client_links_inner->help_text
    cJSON *help_text = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_client_links_innerJSON, "help_text");
    if (cJSON_IsNull(help_text)) {
        help_text = NULL;
    }
    if (help_text) { 
    if(!cJSON_IsString(help_text) && !cJSON_IsNull(help_text))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_client_links_inner->other_attr
    cJSON *other_attr = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_client_links_innerJSON, "other_attr");
    if (cJSON_IsNull(other_attr)) {
        other_attr = NULL;
    }
    if (other_attr) { 
    if(!cJSON_IsString(other_attr) && !cJSON_IsNull(other_attr))
    {
    goto end; //String
    }
    }


    get_scrub_ip_details_200_response_client_links_inner_local_var = get_scrub_ip_details_200_response_client_links_inner_create_internal (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL,
        link && !cJSON_IsNull(link) ? strdup(link->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_text && !cJSON_IsNull(icon_text) ? strdup(icon_text->valuestring) : NULL,
        help_text && !cJSON_IsNull(help_text) ? strdup(help_text->valuestring) : NULL,
        other_attr && !cJSON_IsNull(other_attr) ? strdup(other_attr->valuestring) : NULL
        );

    return get_scrub_ip_details_200_response_client_links_inner_local_var;
end:
    return NULL;

}
