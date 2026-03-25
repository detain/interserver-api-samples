#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modules.h"



static modules_t *modules_create_internal(
    ) {
    modules_t *modules_local_var = malloc(sizeof(modules_t));
    if (!modules_local_var) {
        return NULL;
    }
    memset(modules_local_var, 0, sizeof(modules_t));
    modules_local_var->_library_owned = 1;
    return modules_local_var;
}

__attribute__((deprecated)) modules_t *modules_create(
    ) {
    modules_t *result = modules_create_internal (
        );
    if (!result) {
    }
    return result;
}

void modules_free(modules_t *modules) {
    if(NULL == modules){
        return ;
    }
    if(modules->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "modules_free");
        return ;
    }
    listEntry_t *listEntry;
    free(modules);
}

cJSON *modules_convertToJSON(modules_t *modules) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

modules_t *modules_parseFromJSON(cJSON *modulesJSON){

    modules_t *modules_local_var = NULL;



    modules_local_var = modules_create_internal (
        );

    if (!modules_local_var) {
        goto end;
    }

    return modules_local_var;
end:
    return NULL;

}
