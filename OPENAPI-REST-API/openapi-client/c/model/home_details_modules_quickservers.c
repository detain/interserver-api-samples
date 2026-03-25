#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_details_modules_quickservers.h"



static home_details_modules_quickservers_t *home_details_modules_quickservers_create_internal(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
    ) {
    home_details_modules_quickservers_t *home_details_modules_quickservers_local_var = malloc(sizeof(home_details_modules_quickservers_t));
    if (!home_details_modules_quickservers_local_var) {
        return NULL;
    }
    memset(home_details_modules_quickservers_local_var, 0, sizeof(home_details_modules_quickservers_t));
    home_details_modules_quickservers_local_var->_library_owned = 1;
    home_details_modules_quickservers_local_var->icon = icon;
    home_details_modules_quickservers_local_var->view_link = view_link;
    home_details_modules_quickservers_local_var->heading = heading;
    home_details_modules_quickservers_local_var->buy_link = buy_link;
    home_details_modules_quickservers_local_var->list_link = list_link;
    return home_details_modules_quickservers_local_var;
}

__attribute__((deprecated)) home_details_modules_quickservers_t *home_details_modules_quickservers_create(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
    ) {
    home_details_modules_quickservers_t *result = home_details_modules_quickservers_create_internal (
        icon,
        view_link,
        heading,
        buy_link,
        list_link
        );
    if (!result) {
    }
    return result;
}

void home_details_modules_quickservers_free(home_details_modules_quickservers_t *home_details_modules_quickservers) {
    if(NULL == home_details_modules_quickservers){
        return ;
    }
    if(home_details_modules_quickservers->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_details_modules_quickservers_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_details_modules_quickservers->icon) {
        free(home_details_modules_quickservers->icon);
        home_details_modules_quickservers->icon = NULL;
    }
    if (home_details_modules_quickservers->view_link) {
        free(home_details_modules_quickservers->view_link);
        home_details_modules_quickservers->view_link = NULL;
    }
    if (home_details_modules_quickservers->heading) {
        free(home_details_modules_quickservers->heading);
        home_details_modules_quickservers->heading = NULL;
    }
    if (home_details_modules_quickservers->buy_link) {
        free(home_details_modules_quickservers->buy_link);
        home_details_modules_quickservers->buy_link = NULL;
    }
    if (home_details_modules_quickservers->list_link) {
        free(home_details_modules_quickservers->list_link);
        home_details_modules_quickservers->list_link = NULL;
    }
    free(home_details_modules_quickservers);
}

cJSON *home_details_modules_quickservers_convertToJSON(home_details_modules_quickservers_t *home_details_modules_quickservers) {
    cJSON *item = cJSON_CreateObject();

    // home_details_modules_quickservers->icon
    if(home_details_modules_quickservers->icon) {
    if(cJSON_AddStringToObject(item, "icon", home_details_modules_quickservers->icon) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_quickservers->view_link
    if(home_details_modules_quickservers->view_link) {
    if(cJSON_AddStringToObject(item, "view_link", home_details_modules_quickservers->view_link) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_quickservers->heading
    if(home_details_modules_quickservers->heading) {
    if(cJSON_AddStringToObject(item, "heading", home_details_modules_quickservers->heading) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_quickservers->buy_link
    if(home_details_modules_quickservers->buy_link) {
    if(cJSON_AddStringToObject(item, "buy_link", home_details_modules_quickservers->buy_link) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_quickservers->list_link
    if(home_details_modules_quickservers->list_link) {
    if(cJSON_AddStringToObject(item, "list_link", home_details_modules_quickservers->list_link) == NULL) {
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

home_details_modules_quickservers_t *home_details_modules_quickservers_parseFromJSON(cJSON *home_details_modules_quickserversJSON){

    home_details_modules_quickservers_t *home_details_modules_quickservers_local_var = NULL;

    char *icon_local_str = NULL;

    char *view_link_local_str = NULL;

    char *heading_local_str = NULL;

    char *buy_link_local_str = NULL;

    char *list_link_local_str = NULL;

    // home_details_modules_quickservers->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(home_details_modules_quickserversJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // home_details_modules_quickservers->view_link
    cJSON *view_link = cJSON_GetObjectItemCaseSensitive(home_details_modules_quickserversJSON, "view_link");
    if (cJSON_IsNull(view_link)) {
        view_link = NULL;
    }
    if (view_link) { 
    if(!cJSON_IsString(view_link) && !cJSON_IsNull(view_link))
    {
    goto end; //String
    }
    }

    // home_details_modules_quickservers->heading
    cJSON *heading = cJSON_GetObjectItemCaseSensitive(home_details_modules_quickserversJSON, "heading");
    if (cJSON_IsNull(heading)) {
        heading = NULL;
    }
    if (heading) { 
    if(!cJSON_IsString(heading) && !cJSON_IsNull(heading))
    {
    goto end; //String
    }
    }

    // home_details_modules_quickservers->buy_link
    cJSON *buy_link = cJSON_GetObjectItemCaseSensitive(home_details_modules_quickserversJSON, "buy_link");
    if (cJSON_IsNull(buy_link)) {
        buy_link = NULL;
    }
    if (buy_link) { 
    if(!cJSON_IsString(buy_link) && !cJSON_IsNull(buy_link))
    {
    goto end; //String
    }
    }

    // home_details_modules_quickservers->list_link
    cJSON *list_link = cJSON_GetObjectItemCaseSensitive(home_details_modules_quickserversJSON, "list_link");
    if (cJSON_IsNull(list_link)) {
        list_link = NULL;
    }
    if (list_link) { 
    if(!cJSON_IsString(list_link) && !cJSON_IsNull(list_link))
    {
    goto end; //String
    }
    }


    if (icon && !cJSON_IsNull(icon)) icon_local_str = strdup(icon->valuestring);
    if (view_link && !cJSON_IsNull(view_link)) view_link_local_str = strdup(view_link->valuestring);
    if (heading && !cJSON_IsNull(heading)) heading_local_str = strdup(heading->valuestring);
    if (buy_link && !cJSON_IsNull(buy_link)) buy_link_local_str = strdup(buy_link->valuestring);
    if (list_link && !cJSON_IsNull(list_link)) list_link_local_str = strdup(list_link->valuestring);

    home_details_modules_quickservers_local_var = home_details_modules_quickservers_create_internal (
        icon_local_str,
        view_link_local_str,
        heading_local_str,
        buy_link_local_str,
        list_link_local_str
        );

    if (!home_details_modules_quickservers_local_var) {
        goto end;
    }

    return home_details_modules_quickservers_local_var;
end:
    if (icon_local_str) {
        free(icon_local_str);
        icon_local_str = NULL;
    }
    if (view_link_local_str) {
        free(view_link_local_str);
        view_link_local_str = NULL;
    }
    if (heading_local_str) {
        free(heading_local_str);
        heading_local_str = NULL;
    }
    if (buy_link_local_str) {
        free(buy_link_local_str);
        buy_link_local_str = NULL;
    }
    if (list_link_local_str) {
        free(list_link_local_str);
        list_link_local_str = NULL;
    }
    return NULL;

}
