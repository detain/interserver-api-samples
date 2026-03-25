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
    memset(inline_object_local_var, 0, sizeof(inline_object_t));
    inline_object_local_var->_library_owned = 1;
    inline_object_local_var->code = code;
    inline_object_local_var->message = message;
    return inline_object_local_var;
}

__attribute__((deprecated)) inline_object_t *inline_object_create(
    char *code,
    char *message
    ) {
    inline_object_t *result = inline_object_create_internal (
        code,
        message
        );
    if (!result) {
    }
    return result;
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

    char *code_local_str = NULL;

    char *message_local_str = NULL;

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


    if (code && !cJSON_IsNull(code)) code_local_str = strdup(code->valuestring);
    if (message && !cJSON_IsNull(message)) message_local_str = strdup(message->valuestring);

    inline_object_local_var = inline_object_create_internal (
        code_local_str,
        message_local_str
        );

    if (!inline_object_local_var) {
        goto end;
    }

    return inline_object_local_var;
end:
    if (code_local_str) {
        free(code_local_str);
        code_local_str = NULL;
    }
    if (message_local_str) {
        free(message_local_str);
        message_local_str = NULL;
    }
    return NULL;

}
