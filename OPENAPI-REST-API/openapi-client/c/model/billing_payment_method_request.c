#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_payment_method_request.h"



static billing_payment_method_request_t *billing_payment_method_request_create_internal(
    char *payment_method,
    char *cc_auto
    ) {
    billing_payment_method_request_t *billing_payment_method_request_local_var = malloc(sizeof(billing_payment_method_request_t));
    if (!billing_payment_method_request_local_var) {
        return NULL;
    }
    billing_payment_method_request_local_var->payment_method = payment_method;
    billing_payment_method_request_local_var->cc_auto = cc_auto;

    billing_payment_method_request_local_var->_library_owned = 1;
    return billing_payment_method_request_local_var;
}

__attribute__((deprecated)) billing_payment_method_request_t *billing_payment_method_request_create(
    char *payment_method,
    char *cc_auto
    ) {
    return billing_payment_method_request_create_internal (
        payment_method,
        cc_auto
        );
}

void billing_payment_method_request_free(billing_payment_method_request_t *billing_payment_method_request) {
    if(NULL == billing_payment_method_request){
        return ;
    }
    if(billing_payment_method_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billing_payment_method_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billing_payment_method_request->payment_method) {
        free(billing_payment_method_request->payment_method);
        billing_payment_method_request->payment_method = NULL;
    }
    if (billing_payment_method_request->cc_auto) {
        free(billing_payment_method_request->cc_auto);
        billing_payment_method_request->cc_auto = NULL;
    }
    free(billing_payment_method_request);
}

cJSON *billing_payment_method_request_convertToJSON(billing_payment_method_request_t *billing_payment_method_request) {
    cJSON *item = cJSON_CreateObject();

    // billing_payment_method_request->payment_method
    if(billing_payment_method_request->payment_method) {
    if(cJSON_AddStringToObject(item, "payment_method", billing_payment_method_request->payment_method) == NULL) {
    goto fail; //String
    }
    }


    // billing_payment_method_request->cc_auto
    if(billing_payment_method_request->cc_auto) {
    if(cJSON_AddStringToObject(item, "cc_auto", billing_payment_method_request->cc_auto) == NULL) {
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

billing_payment_method_request_t *billing_payment_method_request_parseFromJSON(cJSON *billing_payment_method_requestJSON){

    billing_payment_method_request_t *billing_payment_method_request_local_var = NULL;

    // billing_payment_method_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(billing_payment_method_requestJSON, "payment_method");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (payment_method) { 
    if(!cJSON_IsString(payment_method) && !cJSON_IsNull(payment_method))
    {
    goto end; //String
    }
    }

    // billing_payment_method_request->cc_auto
    cJSON *cc_auto = cJSON_GetObjectItemCaseSensitive(billing_payment_method_requestJSON, "cc_auto");
    if (cJSON_IsNull(cc_auto)) {
        cc_auto = NULL;
    }
    if (cc_auto) { 
    if(!cJSON_IsString(cc_auto) && !cJSON_IsNull(cc_auto))
    {
    goto end; //String
    }
    }


    billing_payment_method_request_local_var = billing_payment_method_request_create_internal (
        payment_method && !cJSON_IsNull(payment_method) ? strdup(payment_method->valuestring) : NULL,
        cc_auto && !cJSON_IsNull(cc_auto) ? strdup(cc_auto->valuestring) : NULL
        );

    return billing_payment_method_request_local_var;
end:
    return NULL;

}
