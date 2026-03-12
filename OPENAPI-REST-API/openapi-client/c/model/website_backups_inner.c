#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_backups_inner.h"



static website_backups_inner_t *website_backups_inner_create_internal(
    char *name,
    int size
    ) {
    website_backups_inner_t *website_backups_inner_local_var = malloc(sizeof(website_backups_inner_t));
    if (!website_backups_inner_local_var) {
        return NULL;
    }
    website_backups_inner_local_var->name = name;
    website_backups_inner_local_var->size = size;

    website_backups_inner_local_var->_library_owned = 1;
    return website_backups_inner_local_var;
}

__attribute__((deprecated)) website_backups_inner_t *website_backups_inner_create(
    char *name,
    int size
    ) {
    return website_backups_inner_create_internal (
        name,
        size
        );
}

void website_backups_inner_free(website_backups_inner_t *website_backups_inner) {
    if(NULL == website_backups_inner){
        return ;
    }
    if(website_backups_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_backups_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_backups_inner->name) {
        free(website_backups_inner->name);
        website_backups_inner->name = NULL;
    }
    free(website_backups_inner);
}

cJSON *website_backups_inner_convertToJSON(website_backups_inner_t *website_backups_inner) {
    cJSON *item = cJSON_CreateObject();

    // website_backups_inner->name
    if (!website_backups_inner->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", website_backups_inner->name) == NULL) {
    goto fail; //String
    }


    // website_backups_inner->size
    if(website_backups_inner->size) {
    if(cJSON_AddNumberToObject(item, "size", website_backups_inner->size) == NULL) {
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

website_backups_inner_t *website_backups_inner_parseFromJSON(cJSON *website_backups_innerJSON){

    website_backups_inner_t *website_backups_inner_local_var = NULL;

    // website_backups_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(website_backups_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // website_backups_inner->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(website_backups_innerJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }


    website_backups_inner_local_var = website_backups_inner_create_internal (
        strdup(name->valuestring),
        size ? size->valuedouble : 0
        );

    return website_backups_inner_local_var;
end:
    return NULL;

}
