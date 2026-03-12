#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_details_modules_licenses.h"



static home_details_modules_licenses_t *home_details_modules_licenses_create_internal(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
    ) {
    home_details_modules_licenses_t *home_details_modules_licenses_local_var = malloc(sizeof(home_details_modules_licenses_t));
    if (!home_details_modules_licenses_local_var) {
        return NULL;
    }
    home_details_modules_licenses_local_var->icon = icon;
    home_details_modules_licenses_local_var->view_link = view_link;
    home_details_modules_licenses_local_var->heading = heading;
    home_details_modules_licenses_local_var->buy_link = buy_link;
    home_details_modules_licenses_local_var->list_link = list_link;

    home_details_modules_licenses_local_var->_library_owned = 1;
    return home_details_modules_licenses_local_var;
}

__attribute__((deprecated)) home_details_modules_licenses_t *home_details_modules_licenses_create(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
    ) {
    return home_details_modules_licenses_create_internal (
        icon,
        view_link,
        heading,
        buy_link,
        list_link
        );
}

void home_details_modules_licenses_free(home_details_modules_licenses_t *home_details_modules_licenses) {
    if(NULL == home_details_modules_licenses){
        return ;
    }
    if(home_details_modules_licenses->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_details_modules_licenses_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_details_modules_licenses->icon) {
        free(home_details_modules_licenses->icon);
        home_details_modules_licenses->icon = NULL;
    }
    if (home_details_modules_licenses->view_link) {
        free(home_details_modules_licenses->view_link);
        home_details_modules_licenses->view_link = NULL;
    }
    if (home_details_modules_licenses->heading) {
        free(home_details_modules_licenses->heading);
        home_details_modules_licenses->heading = NULL;
    }
    if (home_details_modules_licenses->buy_link) {
        free(home_details_modules_licenses->buy_link);
        home_details_modules_licenses->buy_link = NULL;
    }
    if (home_details_modules_licenses->list_link) {
        free(home_details_modules_licenses->list_link);
        home_details_modules_licenses->list_link = NULL;
    }
    free(home_details_modules_licenses);
}

cJSON *home_details_modules_licenses_convertToJSON(home_details_modules_licenses_t *home_details_modules_licenses) {
    cJSON *item = cJSON_CreateObject();

    // home_details_modules_licenses->icon
    if(home_details_modules_licenses->icon) {
    if(cJSON_AddStringToObject(item, "icon", home_details_modules_licenses->icon) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_licenses->view_link
    if(home_details_modules_licenses->view_link) {
    if(cJSON_AddStringToObject(item, "view_link", home_details_modules_licenses->view_link) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_licenses->heading
    if(home_details_modules_licenses->heading) {
    if(cJSON_AddStringToObject(item, "heading", home_details_modules_licenses->heading) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_licenses->buy_link
    if(home_details_modules_licenses->buy_link) {
    if(cJSON_AddStringToObject(item, "buy_link", home_details_modules_licenses->buy_link) == NULL) {
    goto fail; //String
    }
    }


    // home_details_modules_licenses->list_link
    if(home_details_modules_licenses->list_link) {
    if(cJSON_AddStringToObject(item, "list_link", home_details_modules_licenses->list_link) == NULL) {
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

home_details_modules_licenses_t *home_details_modules_licenses_parseFromJSON(cJSON *home_details_modules_licensesJSON){

    home_details_modules_licenses_t *home_details_modules_licenses_local_var = NULL;

    // home_details_modules_licenses->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(home_details_modules_licensesJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // home_details_modules_licenses->view_link
    cJSON *view_link = cJSON_GetObjectItemCaseSensitive(home_details_modules_licensesJSON, "view_link");
    if (cJSON_IsNull(view_link)) {
        view_link = NULL;
    }
    if (view_link) { 
    if(!cJSON_IsString(view_link) && !cJSON_IsNull(view_link))
    {
    goto end; //String
    }
    }

    // home_details_modules_licenses->heading
    cJSON *heading = cJSON_GetObjectItemCaseSensitive(home_details_modules_licensesJSON, "heading");
    if (cJSON_IsNull(heading)) {
        heading = NULL;
    }
    if (heading) { 
    if(!cJSON_IsString(heading) && !cJSON_IsNull(heading))
    {
    goto end; //String
    }
    }

    // home_details_modules_licenses->buy_link
    cJSON *buy_link = cJSON_GetObjectItemCaseSensitive(home_details_modules_licensesJSON, "buy_link");
    if (cJSON_IsNull(buy_link)) {
        buy_link = NULL;
    }
    if (buy_link) { 
    if(!cJSON_IsString(buy_link) && !cJSON_IsNull(buy_link))
    {
    goto end; //String
    }
    }

    // home_details_modules_licenses->list_link
    cJSON *list_link = cJSON_GetObjectItemCaseSensitive(home_details_modules_licensesJSON, "list_link");
    if (cJSON_IsNull(list_link)) {
        list_link = NULL;
    }
    if (list_link) { 
    if(!cJSON_IsString(list_link) && !cJSON_IsNull(list_link))
    {
    goto end; //String
    }
    }


    home_details_modules_licenses_local_var = home_details_modules_licenses_create_internal (
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        view_link && !cJSON_IsNull(view_link) ? strdup(view_link->valuestring) : NULL,
        heading && !cJSON_IsNull(heading) ? strdup(heading->valuestring) : NULL,
        buy_link && !cJSON_IsNull(buy_link) ? strdup(buy_link->valuestring) : NULL,
        list_link && !cJSON_IsNull(list_link) ? strdup(list_link->valuestring) : NULL
        );

    return home_details_modules_licenses_local_var;
end:
    return NULL;

}
