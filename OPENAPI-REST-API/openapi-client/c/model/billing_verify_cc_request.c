#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_verify_cc_request.h"



static billing_verify_cc_request_t *billing_verify_cc_request_create_internal(
    int *idx,
    char *cc_ccv2,
    char *cc_amount1,
    char *cc_amount2,
    int *terms
    ) {
    billing_verify_cc_request_t *billing_verify_cc_request_local_var = malloc(sizeof(billing_verify_cc_request_t));
    if (!billing_verify_cc_request_local_var) {
        return NULL;
    }
    memset(billing_verify_cc_request_local_var, 0, sizeof(billing_verify_cc_request_t));
    billing_verify_cc_request_local_var->_library_owned = 1;
    billing_verify_cc_request_local_var->idx = idx;
    billing_verify_cc_request_local_var->cc_ccv2 = cc_ccv2;
    billing_verify_cc_request_local_var->cc_amount1 = cc_amount1;
    billing_verify_cc_request_local_var->cc_amount2 = cc_amount2;
    billing_verify_cc_request_local_var->terms = terms;
    return billing_verify_cc_request_local_var;
}

__attribute__((deprecated)) billing_verify_cc_request_t *billing_verify_cc_request_create(
    int *idx,
    char *cc_ccv2,
    char *cc_amount1,
    char *cc_amount2,
    int *terms
    ) {
    int *idx_copy = NULL;
    if (idx) {
        idx_copy = malloc(sizeof(int));
        if (idx_copy) *idx_copy = *idx;
    }
    int *terms_copy = NULL;
    if (terms) {
        terms_copy = malloc(sizeof(int));
        if (terms_copy) *terms_copy = *terms;
    }
    billing_verify_cc_request_t *result = billing_verify_cc_request_create_internal (
        idx_copy,
        cc_ccv2,
        cc_amount1,
        cc_amount2,
        terms_copy
        );
    if (!result) {
        free(idx_copy);
        free(terms_copy);
    }
    return result;
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
    if (billing_verify_cc_request->idx) {
        free(billing_verify_cc_request->idx);
        billing_verify_cc_request->idx = NULL;
    }
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
    if (billing_verify_cc_request->terms) {
        free(billing_verify_cc_request->terms);
        billing_verify_cc_request->terms = NULL;
    }
    free(billing_verify_cc_request);
}

cJSON *billing_verify_cc_request_convertToJSON(billing_verify_cc_request_t *billing_verify_cc_request) {
    cJSON *item = cJSON_CreateObject();

    // billing_verify_cc_request->idx
    if(billing_verify_cc_request->idx) {
    if(cJSON_AddNumberToObject(item, "idx", *billing_verify_cc_request->idx) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "terms", *billing_verify_cc_request->terms) == NULL) {
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

    // define the local variable for billing_verify_cc_request->idx
    int *idx_local_var = NULL;

    char *cc_ccv2_local_str = NULL;

    char *cc_amount1_local_str = NULL;

    char *cc_amount2_local_str = NULL;

    // define the local variable for billing_verify_cc_request->terms
    int *terms_local_var = NULL;

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
    idx_local_var = malloc(sizeof(int));
    if(!idx_local_var)
    {
        goto end;
    }
    *idx_local_var = idx->valuedouble;
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
    terms_local_var = malloc(sizeof(int));
    if(!terms_local_var)
    {
        goto end;
    }
    *terms_local_var = terms->valueint;
    }


    if (cc_ccv2 && !cJSON_IsNull(cc_ccv2)) cc_ccv2_local_str = strdup(cc_ccv2->valuestring);
    if (cc_amount1 && !cJSON_IsNull(cc_amount1)) cc_amount1_local_str = strdup(cc_amount1->valuestring);
    if (cc_amount2 && !cJSON_IsNull(cc_amount2)) cc_amount2_local_str = strdup(cc_amount2->valuestring);

    billing_verify_cc_request_local_var = billing_verify_cc_request_create_internal (
        idx_local_var,
        cc_ccv2_local_str,
        cc_amount1_local_str,
        cc_amount2_local_str,
        terms_local_var
        );

    if (!billing_verify_cc_request_local_var) {
        goto end;
    }

    return billing_verify_cc_request_local_var;
end:
    if (idx_local_var) {
        free(idx_local_var);
        idx_local_var = NULL;
    }
    if (cc_ccv2_local_str) {
        free(cc_ccv2_local_str);
        cc_ccv2_local_str = NULL;
    }
    if (cc_amount1_local_str) {
        free(cc_amount1_local_str);
        cc_amount1_local_str = NULL;
    }
    if (cc_amount2_local_str) {
        free(cc_amount2_local_str);
        cc_amount2_local_str = NULL;
    }
    if (terms_local_var) {
        free(terms_local_var);
        terms_local_var = NULL;
    }
    return NULL;

}
