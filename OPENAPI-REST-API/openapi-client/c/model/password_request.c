#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "password_request.h"



static password_request_t *password_request_create_internal(
    char *password
    ) {
    password_request_t *password_request_local_var = malloc(sizeof(password_request_t));
    if (!password_request_local_var) {
        return NULL;
    }
    password_request_local_var->password = password;

    password_request_local_var->_library_owned = 1;
    return password_request_local_var;
}

__attribute__((deprecated)) password_request_t *password_request_create(
    char *password
    ) {
    return password_request_create_internal (
        password
        );
}

void password_request_free(password_request_t *password_request) {
    if(NULL == password_request){
        return ;
    }
    if(password_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "password_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (password_request->password) {
        free(password_request->password);
        password_request->password = NULL;
    }
    free(password_request);
}

cJSON *password_request_convertToJSON(password_request_t *password_request) {
    cJSON *item = cJSON_CreateObject();

    // password_request->password
    if (!password_request->password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "password", password_request->password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

password_request_t *password_request_parseFromJSON(cJSON *password_requestJSON){

    password_request_t *password_request_local_var = NULL;

    // password_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(password_requestJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (!password) {
        goto end;
    }

    
    if(!cJSON_IsString(password))
    {
    goto end; //String
    }


    password_request_local_var = password_request_create_internal (
        strdup(password->valuestring)
        );

    return password_request_local_var;
end:
    return NULL;

}
