#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_oauth_two_factor_200_response.h"



static patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_create_internal(
    int login
    ) {
    patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_local_var = malloc(sizeof(patch_oauth_two_factor_200_response_t));
    if (!patch_oauth_two_factor_200_response_local_var) {
        return NULL;
    }
    patch_oauth_two_factor_200_response_local_var->login = login;

    patch_oauth_two_factor_200_response_local_var->_library_owned = 1;
    return patch_oauth_two_factor_200_response_local_var;
}

__attribute__((deprecated)) patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_create(
    int login
    ) {
    return patch_oauth_two_factor_200_response_create_internal (
        login
        );
}

void patch_oauth_two_factor_200_response_free(patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response) {
    if(NULL == patch_oauth_two_factor_200_response){
        return ;
    }
    if(patch_oauth_two_factor_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "patch_oauth_two_factor_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(patch_oauth_two_factor_200_response);
}

cJSON *patch_oauth_two_factor_200_response_convertToJSON(patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response) {
    cJSON *item = cJSON_CreateObject();

    // patch_oauth_two_factor_200_response->login
    if(patch_oauth_two_factor_200_response->login) {
    if(cJSON_AddBoolToObject(item, "login", patch_oauth_two_factor_200_response->login) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_parseFromJSON(cJSON *patch_oauth_two_factor_200_responseJSON){

    patch_oauth_two_factor_200_response_t *patch_oauth_two_factor_200_response_local_var = NULL;

    // patch_oauth_two_factor_200_response->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(patch_oauth_two_factor_200_responseJSON, "login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (login) { 
    if(!cJSON_IsBool(login))
    {
    goto end; //Bool
    }
    }


    patch_oauth_two_factor_200_response_local_var = patch_oauth_two_factor_200_response_create_internal (
        login ? login->valueint : 0
        );

    return patch_oauth_two_factor_200_response_local_var;
end:
    return NULL;

}
