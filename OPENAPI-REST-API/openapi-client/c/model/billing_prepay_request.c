#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_prepay_request.h"



static billing_prepay_request_t *billing_prepay_request_create_internal(
    char *module,
    double *amount,
    char *automatic_use
    ) {
    billing_prepay_request_t *billing_prepay_request_local_var = malloc(sizeof(billing_prepay_request_t));
    if (!billing_prepay_request_local_var) {
        return NULL;
    }
    memset(billing_prepay_request_local_var, 0, sizeof(billing_prepay_request_t));
    billing_prepay_request_local_var->_library_owned = 1;
    billing_prepay_request_local_var->module = module;
    billing_prepay_request_local_var->amount = amount;
    billing_prepay_request_local_var->automatic_use = automatic_use;
    return billing_prepay_request_local_var;
}

__attribute__((deprecated)) billing_prepay_request_t *billing_prepay_request_create(
    char *module,
    double *amount,
    char *automatic_use
    ) {
    double *amount_copy = NULL;
    if (amount) {
        amount_copy = malloc(sizeof(double));
        if (amount_copy) *amount_copy = *amount;
    }
    billing_prepay_request_t *result = billing_prepay_request_create_internal (
        module,
        amount_copy,
        automatic_use
        );
    if (!result) {
        free(amount_copy);
    }
    return result;
}

void billing_prepay_request_free(billing_prepay_request_t *billing_prepay_request) {
    if(NULL == billing_prepay_request){
        return ;
    }
    if(billing_prepay_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billing_prepay_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billing_prepay_request->module) {
        free(billing_prepay_request->module);
        billing_prepay_request->module = NULL;
    }
    if (billing_prepay_request->amount) {
        free(billing_prepay_request->amount);
        billing_prepay_request->amount = NULL;
    }
    if (billing_prepay_request->automatic_use) {
        free(billing_prepay_request->automatic_use);
        billing_prepay_request->automatic_use = NULL;
    }
    free(billing_prepay_request);
}

cJSON *billing_prepay_request_convertToJSON(billing_prepay_request_t *billing_prepay_request) {
    cJSON *item = cJSON_CreateObject();

    // billing_prepay_request->module
    if(billing_prepay_request->module) {
    if(cJSON_AddStringToObject(item, "module", billing_prepay_request->module) == NULL) {
    goto fail; //String
    }
    }


    // billing_prepay_request->amount
    if(billing_prepay_request->amount) {
    if(cJSON_AddNumberToObject(item, "amount", *billing_prepay_request->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // billing_prepay_request->automatic_use
    if(billing_prepay_request->automatic_use) {
    if(cJSON_AddStringToObject(item, "automatic_use", billing_prepay_request->automatic_use) == NULL) {
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

billing_prepay_request_t *billing_prepay_request_parseFromJSON(cJSON *billing_prepay_requestJSON){

    billing_prepay_request_t *billing_prepay_request_local_var = NULL;

    char *module_local_str = NULL;

    // define the local variable for billing_prepay_request->amount
    double *amount_local_var = NULL;

    char *automatic_use_local_str = NULL;

    // billing_prepay_request->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(billing_prepay_requestJSON, "module");
    if (cJSON_IsNull(module)) {
        module = NULL;
    }
    if (module) { 
    if(!cJSON_IsString(module) && !cJSON_IsNull(module))
    {
    goto end; //String
    }
    }

    // billing_prepay_request->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(billing_prepay_requestJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    amount_local_var = malloc(sizeof(double));
    if(!amount_local_var)
    {
        goto end;
    }
    *amount_local_var = amount->valuedouble;
    }

    // billing_prepay_request->automatic_use
    cJSON *automatic_use = cJSON_GetObjectItemCaseSensitive(billing_prepay_requestJSON, "automatic_use");
    if (cJSON_IsNull(automatic_use)) {
        automatic_use = NULL;
    }
    if (automatic_use) { 
    if(!cJSON_IsString(automatic_use) && !cJSON_IsNull(automatic_use))
    {
    goto end; //String
    }
    }


    if (module && !cJSON_IsNull(module)) module_local_str = strdup(module->valuestring);
    if (automatic_use && !cJSON_IsNull(automatic_use)) automatic_use_local_str = strdup(automatic_use->valuestring);

    billing_prepay_request_local_var = billing_prepay_request_create_internal (
        module_local_str,
        amount_local_var,
        automatic_use_local_str
        );

    if (!billing_prepay_request_local_var) {
        goto end;
    }

    return billing_prepay_request_local_var;
end:
    if (module_local_str) {
        free(module_local_str);
        module_local_str = NULL;
    }
    if (amount_local_var) {
        free(amount_local_var);
        amount_local_var = NULL;
    }
    if (automatic_use_local_str) {
        free(automatic_use_local_str);
        automatic_use_local_str = NULL;
    }
    return NULL;

}
