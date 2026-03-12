#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hostname_object.h"



static hostname_object_t *hostname_object_create_internal(
    char *hostname
    ) {
    hostname_object_t *hostname_object_local_var = malloc(sizeof(hostname_object_t));
    if (!hostname_object_local_var) {
        return NULL;
    }
    hostname_object_local_var->hostname = hostname;

    hostname_object_local_var->_library_owned = 1;
    return hostname_object_local_var;
}

__attribute__((deprecated)) hostname_object_t *hostname_object_create(
    char *hostname
    ) {
    return hostname_object_create_internal (
        hostname
        );
}

void hostname_object_free(hostname_object_t *hostname_object) {
    if(NULL == hostname_object){
        return ;
    }
    if(hostname_object->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "hostname_object_free");
        return ;
    }
    listEntry_t *listEntry;
    if (hostname_object->hostname) {
        free(hostname_object->hostname);
        hostname_object->hostname = NULL;
    }
    free(hostname_object);
}

cJSON *hostname_object_convertToJSON(hostname_object_t *hostname_object) {
    cJSON *item = cJSON_CreateObject();

    // hostname_object->hostname
    if(hostname_object->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", hostname_object->hostname) == NULL) {
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

hostname_object_t *hostname_object_parseFromJSON(cJSON *hostname_objectJSON){

    hostname_object_t *hostname_object_local_var = NULL;

    // hostname_object->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(hostname_objectJSON, "hostname");
    if (cJSON_IsNull(hostname)) {
        hostname = NULL;
    }
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }


    hostname_object_local_var = hostname_object_create_internal (
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL
        );

    return hostname_object_local_var;
end:
    return NULL;

}
