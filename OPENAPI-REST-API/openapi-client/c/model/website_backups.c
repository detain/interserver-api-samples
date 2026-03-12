#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_backups.h"



static website_backups_t *website_backups_create_internal(
    ) {
    website_backups_t *website_backups_local_var = malloc(sizeof(website_backups_t));
    if (!website_backups_local_var) {
        return NULL;
    }

    website_backups_local_var->_library_owned = 1;
    return website_backups_local_var;
}

__attribute__((deprecated)) website_backups_t *website_backups_create(
    ) {
    return website_backups_create_internal (
        );
}

void website_backups_free(website_backups_t *website_backups) {
    if(NULL == website_backups){
        return ;
    }
    if(website_backups->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_backups_free");
        return ;
    }
    listEntry_t *listEntry;
    free(website_backups);
}

cJSON *website_backups_convertToJSON(website_backups_t *website_backups) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_backups_t *website_backups_parseFromJSON(cJSON *website_backupsJSON){

    website_backups_t *website_backups_local_var = NULL;


    website_backups_local_var = website_backups_create_internal (
        );

    return website_backups_local_var;
end:
    return NULL;

}
