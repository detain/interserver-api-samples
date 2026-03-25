#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_backups.h"



static home_services_backups_t *home_services_backups_create_internal(
    list_t *links,
    int *count
    ) {
    home_services_backups_t *home_services_backups_local_var = malloc(sizeof(home_services_backups_t));
    if (!home_services_backups_local_var) {
        return NULL;
    }
    memset(home_services_backups_local_var, 0, sizeof(home_services_backups_t));
    home_services_backups_local_var->_library_owned = 1;
    home_services_backups_local_var->links = links;
    home_services_backups_local_var->count = count;
    return home_services_backups_local_var;
}

__attribute__((deprecated)) home_services_backups_t *home_services_backups_create(
    list_t *links,
    int *count
    ) {
    int *count_copy = NULL;
    if (count) {
        count_copy = malloc(sizeof(int));
        if (count_copy) *count_copy = *count;
    }
    home_services_backups_t *result = home_services_backups_create_internal (
        links,
        count_copy
        );
    if (!result) {
        free(count_copy);
    }
    return result;
}

void home_services_backups_free(home_services_backups_t *home_services_backups) {
    if(NULL == home_services_backups){
        return ;
    }
    if(home_services_backups->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_backups_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_backups->links) {
        list_ForEach(listEntry, home_services_backups->links) {
            free(listEntry->data);
        }
        list_freeList(home_services_backups->links);
        home_services_backups->links = NULL;
    }
    if (home_services_backups->count) {
        free(home_services_backups->count);
        home_services_backups->count = NULL;
    }
    free(home_services_backups);
}

cJSON *home_services_backups_convertToJSON(home_services_backups_t *home_services_backups) {
    cJSON *item = cJSON_CreateObject();

    // home_services_backups->links
    if(home_services_backups->links) {
    cJSON *links = cJSON_AddArrayToObject(item, "links");
    if(links == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *linksListEntry;
    list_ForEach(linksListEntry, home_services_backups->links) {
    if(cJSON_AddStringToObject(links, "", linksListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // home_services_backups->count
    if(home_services_backups->count) {
    if(cJSON_AddNumberToObject(item, "count", *home_services_backups->count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

home_services_backups_t *home_services_backups_parseFromJSON(cJSON *home_services_backupsJSON){

    home_services_backups_t *home_services_backups_local_var = NULL;

    // define the local list for home_services_backups->links
    list_t *linksList = NULL;

    // define the local variable for home_services_backups->count
    int *count_local_var = NULL;

    // home_services_backups->links
    cJSON *links = cJSON_GetObjectItemCaseSensitive(home_services_backupsJSON, "links");
    if (cJSON_IsNull(links)) {
        links = NULL;
    }
    if (links) { 
    cJSON *links_local = NULL;
    if(!cJSON_IsArray(links)) {
        goto end;//primitive container
    }
    linksList = list_createList();

    cJSON_ArrayForEach(links_local, links)
    {
        if(!cJSON_IsString(links_local))
        {
            goto end;
        }
        list_addElement(linksList , strdup(links_local->valuestring));
    }
    }

    // home_services_backups->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(home_services_backupsJSON, "count");
    if (cJSON_IsNull(count)) {
        count = NULL;
    }
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    count_local_var = malloc(sizeof(int));
    if(!count_local_var)
    {
        goto end;
    }
    *count_local_var = count->valuedouble;
    }



    home_services_backups_local_var = home_services_backups_create_internal (
        links ? linksList : NULL,
        count_local_var
        );

    if (!home_services_backups_local_var) {
        goto end;
    }

    return home_services_backups_local_var;
end:
    if (linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, linksList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(linksList);
        linksList = NULL;
    }
    if (count_local_var) {
        free(count_local_var);
        count_local_var = NULL;
    }
    return NULL;

}
