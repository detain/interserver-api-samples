#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_ssh_key.h"



static account_ssh_key_t *account_ssh_key_create_internal(
    char *ssh_key
    ) {
    account_ssh_key_t *account_ssh_key_local_var = malloc(sizeof(account_ssh_key_t));
    if (!account_ssh_key_local_var) {
        return NULL;
    }
    account_ssh_key_local_var->ssh_key = ssh_key;

    account_ssh_key_local_var->_library_owned = 1;
    return account_ssh_key_local_var;
}

__attribute__((deprecated)) account_ssh_key_t *account_ssh_key_create(
    char *ssh_key
    ) {
    return account_ssh_key_create_internal (
        ssh_key
        );
}

void account_ssh_key_free(account_ssh_key_t *account_ssh_key) {
    if(NULL == account_ssh_key){
        return ;
    }
    if(account_ssh_key->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_ssh_key_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_ssh_key->ssh_key) {
        free(account_ssh_key->ssh_key);
        account_ssh_key->ssh_key = NULL;
    }
    free(account_ssh_key);
}

cJSON *account_ssh_key_convertToJSON(account_ssh_key_t *account_ssh_key) {
    cJSON *item = cJSON_CreateObject();

    // account_ssh_key->ssh_key
    if(account_ssh_key->ssh_key) {
    if(cJSON_AddStringToObject(item, "ssh_key", account_ssh_key->ssh_key) == NULL) {
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

account_ssh_key_t *account_ssh_key_parseFromJSON(cJSON *account_ssh_keyJSON){

    account_ssh_key_t *account_ssh_key_local_var = NULL;

    // account_ssh_key->ssh_key
    cJSON *ssh_key = cJSON_GetObjectItemCaseSensitive(account_ssh_keyJSON, "ssh_key");
    if (cJSON_IsNull(ssh_key)) {
        ssh_key = NULL;
    }
    if (ssh_key) { 
    if(!cJSON_IsString(ssh_key) && !cJSON_IsNull(ssh_key))
    {
    goto end; //String
    }
    }


    account_ssh_key_local_var = account_ssh_key_create_internal (
        ssh_key && !cJSON_IsNull(ssh_key) ? strdup(ssh_key->valuestring) : NULL
        );

    return account_ssh_key_local_var;
end:
    return NULL;

}
