#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object.h"



static inline_object_t *inline_object_create_internal(
    char *code,
    char *message
    ) {
    inline_object_t *inline_object_local_var = malloc(sizeof(inline_object_t));
    if (!inline_object_local_var) {
        return NULL;
    }
    inline_object_local_var->code = code;
    inline_object_local_var->message = message;

    inline_object_local_var->_library_owned = 1;
    return inline_object_local_var;
}

__attribute__((deprecated)) inline_object_t *inline_object_create(
    char *code,
    char *message
    ) {
    return inline_object_create_internal (
        code,
        message
        );
}

void inline_object_free(inline_object_t *inline_object) {
    if(NULL == inline_object){
        return ;
    }
    if(inline_object->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inline_object_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inline_object->code) {
        free(inline_object->code);
        inline_object->code = NULL;
    }
    if (inline_object->message) {
        free(inline_object->message);
        inline_object->message = NULL;
    }
    free(inline_object);
}

cJSON *inline_object_convertToJSON(inline_object_t *inline_object) {
    cJSON *item = cJSON_CreateObject();

    // inline_object->code
    if (!inline_object->code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "code", inline_object->code) == NULL) {
    goto fail; //String
    }


    // inline_object->message
    if (!inline_object->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", inline_object->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_t *inline_object_parseFromJSON(cJSON *inline_objectJSON){

    inline_object_t *inline_object_local_var = NULL;

    // inline_object->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }

    // inline_object->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    inline_object_local_var = inline_object_create_internal (
        strdup(code->valuestring),
        strdup(message->valuestring)
        );

    return inline_object_local_var;
end:
    return NULL;

}
