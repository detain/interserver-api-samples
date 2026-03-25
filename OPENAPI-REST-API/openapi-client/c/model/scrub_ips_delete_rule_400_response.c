#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ips_delete_rule_400_response.h"



static scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_create_internal(
    int *success,
    char *text
    ) {
    scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_local_var = malloc(sizeof(scrub_ips_delete_rule_400_response_t));
    if (!scrub_ips_delete_rule_400_response_local_var) {
        return NULL;
    }
    memset(scrub_ips_delete_rule_400_response_local_var, 0, sizeof(scrub_ips_delete_rule_400_response_t));
    scrub_ips_delete_rule_400_response_local_var->_library_owned = 1;
    scrub_ips_delete_rule_400_response_local_var->success = success;
    scrub_ips_delete_rule_400_response_local_var->text = text;
    return scrub_ips_delete_rule_400_response_local_var;
}

__attribute__((deprecated)) scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    scrub_ips_delete_rule_400_response_t *result = scrub_ips_delete_rule_400_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void scrub_ips_delete_rule_400_response_free(scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response) {
    if(NULL == scrub_ips_delete_rule_400_response){
        return ;
    }
    if(scrub_ips_delete_rule_400_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ips_delete_rule_400_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ips_delete_rule_400_response->success) {
        free(scrub_ips_delete_rule_400_response->success);
        scrub_ips_delete_rule_400_response->success = NULL;
    }
    if (scrub_ips_delete_rule_400_response->text) {
        free(scrub_ips_delete_rule_400_response->text);
        scrub_ips_delete_rule_400_response->text = NULL;
    }
    free(scrub_ips_delete_rule_400_response);
}

cJSON *scrub_ips_delete_rule_400_response_convertToJSON(scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ips_delete_rule_400_response->success
    if(scrub_ips_delete_rule_400_response->success) {
    if(cJSON_AddBoolToObject(item, "success", *scrub_ips_delete_rule_400_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // scrub_ips_delete_rule_400_response->text
    if(scrub_ips_delete_rule_400_response->text) {
    if(cJSON_AddStringToObject(item, "text", scrub_ips_delete_rule_400_response->text) == NULL) {
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

scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_parseFromJSON(cJSON *scrub_ips_delete_rule_400_responseJSON){

    scrub_ips_delete_rule_400_response_t *scrub_ips_delete_rule_400_response_local_var = NULL;

    // define the local variable for scrub_ips_delete_rule_400_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // scrub_ips_delete_rule_400_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(scrub_ips_delete_rule_400_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;
    }

    // scrub_ips_delete_rule_400_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(scrub_ips_delete_rule_400_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    scrub_ips_delete_rule_400_response_local_var = scrub_ips_delete_rule_400_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!scrub_ips_delete_rule_400_response_local_var) {
        goto end;
    }

    return scrub_ips_delete_rule_400_response_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    return NULL;

}
