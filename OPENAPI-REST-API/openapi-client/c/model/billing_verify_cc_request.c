#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_verify_cc_request.h"



static billing_verify_cc_request_t *billing_verify_cc_request_create_internal(
    int idx,
    char *cc_ccv2,
    char *cc_amount1,
    char *cc_amount2,
    int terms
    ) {
    billing_verify_cc_request_t *billing_verify_cc_request_local_var = malloc(sizeof(billing_verify_cc_request_t));
    if (!billing_verify_cc_request_local_var) {
        return NULL;
    }
    billing_verify_cc_request_local_var->idx = idx;
    billing_verify_cc_request_local_var->cc_ccv2 = cc_ccv2;
    billing_verify_cc_request_local_var->cc_amount1 = cc_amount1;
    billing_verify_cc_request_local_var->cc_amount2 = cc_amount2;
    billing_verify_cc_request_local_var->terms = terms;

    billing_verify_cc_request_local_var->_library_owned = 1;
    return billing_verify_cc_request_local_var;
}

__attribute__((deprecated)) billing_verify_cc_request_t *billing_verify_cc_request_create(
    int idx,
    char *cc_ccv2,
    char *cc_amount1,
    char *cc_amount2,
    int terms
    ) {
    return billing_verify_cc_request_create_internal (
        idx,
        cc_ccv2,
        cc_amount1,
        cc_amount2,
        terms
        );
}

void billing_verify_cc_request_free(billing_verify_cc_request_t *billing_verify_cc_request) {
    if(NULL == billing_verify_cc_request){
        return ;
    }
    if(billing_verify_cc_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billing_verify_cc_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billing_verify_cc_request->cc_ccv2) {
        free(billing_verify_cc_request->cc_ccv2);
        billing_verify_cc_request->cc_ccv2 = NULL;
    }
    if (billing_verify_cc_request->cc_amount1) {
        free(billing_verify_cc_request->cc_amount1);
        billing_verify_cc_request->cc_amount1 = NULL;
    }
    if (billing_verify_cc_request->cc_amount2) {
        free(billing_verify_cc_request->cc_amount2);
        billing_verify_cc_request->cc_amount2 = NULL;
    }
    free(billing_verify_cc_request);
}

cJSON *billing_verify_cc_request_convertToJSON(billing_verify_cc_request_t *billing_verify_cc_request) {
    cJSON *item = cJSON_CreateObject();

    // billing_verify_cc_request->idx
    if(billing_verify_cc_request->idx) {
    if(cJSON_AddNumberToObject(item, "idx", billing_verify_cc_request->idx) == NULL) {
    goto fail; //Numeric
    }
    }


    // billing_verify_cc_request->cc_ccv2
    if(billing_verify_cc_request->cc_ccv2) {
    if(cJSON_AddStringToObject(item, "cc_ccv2", billing_verify_cc_request->cc_ccv2) == NULL) {
    goto fail; //String
    }
    }


    // billing_verify_cc_request->cc_amount1
    if(billing_verify_cc_request->cc_amount1) {
    if(cJSON_AddStringToObject(item, "cc_amount1", billing_verify_cc_request->cc_amount1) == NULL) {
    goto fail; //String
    }
    }


    // billing_verify_cc_request->cc_amount2
    if(billing_verify_cc_request->cc_amount2) {
    if(cJSON_AddStringToObject(item, "cc_amount2", billing_verify_cc_request->cc_amount2) == NULL) {
    goto fail; //String
    }
    }


    // billing_verify_cc_request->terms
    if(billing_verify_cc_request->terms) {
    if(cJSON_AddBoolToObject(item, "terms", billing_verify_cc_request->terms) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billing_verify_cc_request_t *billing_verify_cc_request_parseFromJSON(cJSON *billing_verify_cc_requestJSON){

    billing_verify_cc_request_t *billing_verify_cc_request_local_var = NULL;

    // billing_verify_cc_request->idx
    cJSON *idx = cJSON_GetObjectItemCaseSensitive(billing_verify_cc_requestJSON, "idx");
    if (cJSON_IsNull(idx)) {
        idx = NULL;
    }
    if (idx) { 
    if(!cJSON_IsNumber(idx))
    {
    goto end; //Numeric
    }
    }

    // billing_verify_cc_request->cc_ccv2
    cJSON *cc_ccv2 = cJSON_GetObjectItemCaseSensitive(billing_verify_cc_requestJSON, "cc_ccv2");
    if (cJSON_IsNull(cc_ccv2)) {
        cc_ccv2 = NULL;
    }
    if (cc_ccv2) { 
    if(!cJSON_IsString(cc_ccv2) && !cJSON_IsNull(cc_ccv2))
    {
    goto end; //String
    }
    }

    // billing_verify_cc_request->cc_amount1
    cJSON *cc_amount1 = cJSON_GetObjectItemCaseSensitive(billing_verify_cc_requestJSON, "cc_amount1");
    if (cJSON_IsNull(cc_amount1)) {
        cc_amount1 = NULL;
    }
    if (cc_amount1) { 
    if(!cJSON_IsString(cc_amount1) && !cJSON_IsNull(cc_amount1))
    {
    goto end; //String
    }
    }

    // billing_verify_cc_request->cc_amount2
    cJSON *cc_amount2 = cJSON_GetObjectItemCaseSensitive(billing_verify_cc_requestJSON, "cc_amount2");
    if (cJSON_IsNull(cc_amount2)) {
        cc_amount2 = NULL;
    }
    if (cc_amount2) { 
    if(!cJSON_IsString(cc_amount2) && !cJSON_IsNull(cc_amount2))
    {
    goto end; //String
    }
    }

    // billing_verify_cc_request->terms
    cJSON *terms = cJSON_GetObjectItemCaseSensitive(billing_verify_cc_requestJSON, "terms");
    if (cJSON_IsNull(terms)) {
        terms = NULL;
    }
    if (terms) { 
    if(!cJSON_IsBool(terms))
    {
    goto end; //Bool
    }
    }


    billing_verify_cc_request_local_var = billing_verify_cc_request_create_internal (
        idx ? idx->valuedouble : 0,
        cc_ccv2 && !cJSON_IsNull(cc_ccv2) ? strdup(cc_ccv2->valuestring) : NULL,
        cc_amount1 && !cJSON_IsNull(cc_amount1) ? strdup(cc_amount1->valuestring) : NULL,
        cc_amount2 && !cJSON_IsNull(cc_amount2) ? strdup(cc_amount2->valuestring) : NULL,
        terms ? terms->valueint : 0
        );

    return billing_verify_cc_request_local_var;
end:
    return NULL;

}
