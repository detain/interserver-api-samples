#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_object.h"



static ip_object_t *ip_object_create_internal(
    char *ip
    ) {
    ip_object_t *ip_object_local_var = malloc(sizeof(ip_object_t));
    if (!ip_object_local_var) {
        return NULL;
    }
    ip_object_local_var->ip = ip;

    ip_object_local_var->_library_owned = 1;
    return ip_object_local_var;
}

__attribute__((deprecated)) ip_object_t *ip_object_create(
    char *ip
    ) {
    return ip_object_create_internal (
        ip
        );
}

void ip_object_free(ip_object_t *ip_object) {
    if(NULL == ip_object){
        return ;
    }
    if(ip_object->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ip_object_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ip_object->ip) {
        free(ip_object->ip);
        ip_object->ip = NULL;
    }
    free(ip_object);
}

cJSON *ip_object_convertToJSON(ip_object_t *ip_object) {
    cJSON *item = cJSON_CreateObject();

    // ip_object->ip
    if (!ip_object->ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ip", ip_object->ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ip_object_t *ip_object_parseFromJSON(cJSON *ip_objectJSON){

    ip_object_t *ip_object_local_var = NULL;

    // ip_object->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(ip_objectJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }


    ip_object_local_var = ip_object_create_internal (
        strdup(ip->valuestring)
        );

    return ip_object_local_var;
end:
    return NULL;

}
