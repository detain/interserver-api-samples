#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_address_name.h"



static email_address_name_t *email_address_name_create_internal(
    char *email,
    char *name
    ) {
    email_address_name_t *email_address_name_local_var = malloc(sizeof(email_address_name_t));
    if (!email_address_name_local_var) {
        return NULL;
    }
    email_address_name_local_var->email = email;
    email_address_name_local_var->name = name;

    email_address_name_local_var->_library_owned = 1;
    return email_address_name_local_var;
}

__attribute__((deprecated)) email_address_name_t *email_address_name_create(
    char *email,
    char *name
    ) {
    return email_address_name_create_internal (
        email,
        name
        );
}

void email_address_name_free(email_address_name_t *email_address_name) {
    if(NULL == email_address_name){
        return ;
    }
    if(email_address_name->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "email_address_name_free");
        return ;
    }
    listEntry_t *listEntry;
    if (email_address_name->email) {
        free(email_address_name->email);
        email_address_name->email = NULL;
    }
    if (email_address_name->name) {
        free(email_address_name->name);
        email_address_name->name = NULL;
    }
    free(email_address_name);
}

cJSON *email_address_name_convertToJSON(email_address_name_t *email_address_name) {
    cJSON *item = cJSON_CreateObject();

    // email_address_name->email
    if (!email_address_name->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", email_address_name->email) == NULL) {
    goto fail; //String
    }


    // email_address_name->name
    if(email_address_name->name) {
    if(cJSON_AddStringToObject(item, "name", email_address_name->name) == NULL) {
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

email_address_name_t *email_address_name_parseFromJSON(cJSON *email_address_nameJSON){

    email_address_name_t *email_address_name_local_var = NULL;

    // email_address_name->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(email_address_nameJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // email_address_name->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(email_address_nameJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    email_address_name_local_var = email_address_name_create_internal (
        strdup(email->valuestring),
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return email_address_name_local_var;
end:
    return NULL;

}
