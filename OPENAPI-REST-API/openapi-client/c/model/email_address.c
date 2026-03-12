#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_address.h"



static email_address_t *email_address_create_internal(
    char *email
    ) {
    email_address_t *email_address_local_var = malloc(sizeof(email_address_t));
    if (!email_address_local_var) {
        return NULL;
    }
    email_address_local_var->email = email;

    email_address_local_var->_library_owned = 1;
    return email_address_local_var;
}

__attribute__((deprecated)) email_address_t *email_address_create(
    char *email
    ) {
    return email_address_create_internal (
        email
        );
}

void email_address_free(email_address_t *email_address) {
    if(NULL == email_address){
        return ;
    }
    if(email_address->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "email_address_free");
        return ;
    }
    listEntry_t *listEntry;
    if (email_address->email) {
        free(email_address->email);
        email_address->email = NULL;
    }
    free(email_address);
}

cJSON *email_address_convertToJSON(email_address_t *email_address) {
    cJSON *item = cJSON_CreateObject();

    // email_address->email
    if(email_address->email) {
    if(cJSON_AddStringToObject(item, "email", email_address->email) == NULL) {
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

email_address_t *email_address_parseFromJSON(cJSON *email_addressJSON){

    email_address_t *email_address_local_var = NULL;

    // email_address->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(email_addressJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }


    email_address_local_var = email_address_create_internal (
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL
        );

    return email_address_local_var;
end:
    return NULL;

}
