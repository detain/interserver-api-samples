#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ips_delete_rule_500_response.h"



static scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response_create_internal(
    int success,
    char *text
    ) {
    scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response_local_var = malloc(sizeof(scrub_ips_delete_rule_500_response_t));
    if (!scrub_ips_delete_rule_500_response_local_var) {
        return NULL;
    }
    scrub_ips_delete_rule_500_response_local_var->success = success;
    scrub_ips_delete_rule_500_response_local_var->text = text;

    scrub_ips_delete_rule_500_response_local_var->_library_owned = 1;
    return scrub_ips_delete_rule_500_response_local_var;
}

__attribute__((deprecated)) scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response_create(
    int success,
    char *text
    ) {
    return scrub_ips_delete_rule_500_response_create_internal (
        success,
        text
        );
}

void scrub_ips_delete_rule_500_response_free(scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response) {
    if(NULL == scrub_ips_delete_rule_500_response){
        return ;
    }
    if(scrub_ips_delete_rule_500_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ips_delete_rule_500_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ips_delete_rule_500_response->text) {
        free(scrub_ips_delete_rule_500_response->text);
        scrub_ips_delete_rule_500_response->text = NULL;
    }
    free(scrub_ips_delete_rule_500_response);
}

cJSON *scrub_ips_delete_rule_500_response_convertToJSON(scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ips_delete_rule_500_response->success
    if(scrub_ips_delete_rule_500_response->success) {
    if(cJSON_AddBoolToObject(item, "success", scrub_ips_delete_rule_500_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // scrub_ips_delete_rule_500_response->text
    if(scrub_ips_delete_rule_500_response->text) {
    if(cJSON_AddStringToObject(item, "text", scrub_ips_delete_rule_500_response->text) == NULL) {
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

scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response_parseFromJSON(cJSON *scrub_ips_delete_rule_500_responseJSON){

    scrub_ips_delete_rule_500_response_t *scrub_ips_delete_rule_500_response_local_var = NULL;

    // scrub_ips_delete_rule_500_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(scrub_ips_delete_rule_500_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // scrub_ips_delete_rule_500_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(scrub_ips_delete_rule_500_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    scrub_ips_delete_rule_500_response_local_var = scrub_ips_delete_rule_500_response_create_internal (
        success ? success->valueint : 0,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL
        );

    return scrub_ips_delete_rule_500_response_local_var;
end:
    return NULL;

}
