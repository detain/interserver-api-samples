#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_rule_500_response.h"



static create_rule_500_response_t *create_rule_500_response_create_internal(
    int success,
    char *text
    ) {
    create_rule_500_response_t *create_rule_500_response_local_var = malloc(sizeof(create_rule_500_response_t));
    if (!create_rule_500_response_local_var) {
        return NULL;
    }
    create_rule_500_response_local_var->success = success;
    create_rule_500_response_local_var->text = text;

    create_rule_500_response_local_var->_library_owned = 1;
    return create_rule_500_response_local_var;
}

__attribute__((deprecated)) create_rule_500_response_t *create_rule_500_response_create(
    int success,
    char *text
    ) {
    return create_rule_500_response_create_internal (
        success,
        text
        );
}

void create_rule_500_response_free(create_rule_500_response_t *create_rule_500_response) {
    if(NULL == create_rule_500_response){
        return ;
    }
    if(create_rule_500_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_rule_500_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (create_rule_500_response->text) {
        free(create_rule_500_response->text);
        create_rule_500_response->text = NULL;
    }
    free(create_rule_500_response);
}

cJSON *create_rule_500_response_convertToJSON(create_rule_500_response_t *create_rule_500_response) {
    cJSON *item = cJSON_CreateObject();

    // create_rule_500_response->success
    if(create_rule_500_response->success) {
    if(cJSON_AddBoolToObject(item, "success", create_rule_500_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // create_rule_500_response->text
    if(create_rule_500_response->text) {
    if(cJSON_AddStringToObject(item, "text", create_rule_500_response->text) == NULL) {
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

create_rule_500_response_t *create_rule_500_response_parseFromJSON(cJSON *create_rule_500_responseJSON){

    create_rule_500_response_t *create_rule_500_response_local_var = NULL;

    // create_rule_500_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(create_rule_500_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // create_rule_500_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(create_rule_500_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    create_rule_500_response_local_var = create_rule_500_response_create_internal (
        success ? success->valueint : 0,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL
        );

    return create_rule_500_response_local_var;
end:
    return NULL;

}
