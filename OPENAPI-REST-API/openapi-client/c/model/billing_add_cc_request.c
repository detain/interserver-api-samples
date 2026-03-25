#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_add_cc_request.h"



static billing_add_cc_request_t *billing_add_cc_request_create_internal(
    char *name,
    char *address,
    char *city,
    char *state,
    char *country,
    char *zip,
    char *cc,
    char *cc_exp,
    char *cc_ccv2
    ) {
    billing_add_cc_request_t *billing_add_cc_request_local_var = malloc(sizeof(billing_add_cc_request_t));
    if (!billing_add_cc_request_local_var) {
        return NULL;
    }
    memset(billing_add_cc_request_local_var, 0, sizeof(billing_add_cc_request_t));
    billing_add_cc_request_local_var->_library_owned = 1;
    billing_add_cc_request_local_var->name = name;
    billing_add_cc_request_local_var->address = address;
    billing_add_cc_request_local_var->city = city;
    billing_add_cc_request_local_var->state = state;
    billing_add_cc_request_local_var->country = country;
    billing_add_cc_request_local_var->zip = zip;
    billing_add_cc_request_local_var->cc = cc;
    billing_add_cc_request_local_var->cc_exp = cc_exp;
    billing_add_cc_request_local_var->cc_ccv2 = cc_ccv2;
    return billing_add_cc_request_local_var;
}

__attribute__((deprecated)) billing_add_cc_request_t *billing_add_cc_request_create(
    char *name,
    char *address,
    char *city,
    char *state,
    char *country,
    char *zip,
    char *cc,
    char *cc_exp,
    char *cc_ccv2
    ) {
    billing_add_cc_request_t *result = billing_add_cc_request_create_internal (
        name,
        address,
        city,
        state,
        country,
        zip,
        cc,
        cc_exp,
        cc_ccv2
        );
    if (!result) {
    }
    return result;
}

void billing_add_cc_request_free(billing_add_cc_request_t *billing_add_cc_request) {
    if(NULL == billing_add_cc_request){
        return ;
    }
    if(billing_add_cc_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billing_add_cc_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billing_add_cc_request->name) {
        free(billing_add_cc_request->name);
        billing_add_cc_request->name = NULL;
    }
    if (billing_add_cc_request->address) {
        free(billing_add_cc_request->address);
        billing_add_cc_request->address = NULL;
    }
    if (billing_add_cc_request->city) {
        free(billing_add_cc_request->city);
        billing_add_cc_request->city = NULL;
    }
    if (billing_add_cc_request->state) {
        free(billing_add_cc_request->state);
        billing_add_cc_request->state = NULL;
    }
    if (billing_add_cc_request->country) {
        free(billing_add_cc_request->country);
        billing_add_cc_request->country = NULL;
    }
    if (billing_add_cc_request->zip) {
        free(billing_add_cc_request->zip);
        billing_add_cc_request->zip = NULL;
    }
    if (billing_add_cc_request->cc) {
        free(billing_add_cc_request->cc);
        billing_add_cc_request->cc = NULL;
    }
    if (billing_add_cc_request->cc_exp) {
        free(billing_add_cc_request->cc_exp);
        billing_add_cc_request->cc_exp = NULL;
    }
    if (billing_add_cc_request->cc_ccv2) {
        free(billing_add_cc_request->cc_ccv2);
        billing_add_cc_request->cc_ccv2 = NULL;
    }
    free(billing_add_cc_request);
}

cJSON *billing_add_cc_request_convertToJSON(billing_add_cc_request_t *billing_add_cc_request) {
    cJSON *item = cJSON_CreateObject();

    // billing_add_cc_request->name
    if(billing_add_cc_request->name) {
    if(cJSON_AddStringToObject(item, "name", billing_add_cc_request->name) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->address
    if(billing_add_cc_request->address) {
    if(cJSON_AddStringToObject(item, "address", billing_add_cc_request->address) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->city
    if(billing_add_cc_request->city) {
    if(cJSON_AddStringToObject(item, "city", billing_add_cc_request->city) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->state
    if(billing_add_cc_request->state) {
    if(cJSON_AddStringToObject(item, "state", billing_add_cc_request->state) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->country
    if(billing_add_cc_request->country) {
    if(cJSON_AddStringToObject(item, "country", billing_add_cc_request->country) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->zip
    if(billing_add_cc_request->zip) {
    if(cJSON_AddStringToObject(item, "zip", billing_add_cc_request->zip) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->cc
    if(billing_add_cc_request->cc) {
    if(cJSON_AddStringToObject(item, "cc", billing_add_cc_request->cc) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->cc_exp
    if(billing_add_cc_request->cc_exp) {
    if(cJSON_AddStringToObject(item, "cc_exp", billing_add_cc_request->cc_exp) == NULL) {
    goto fail; //String
    }
    }


    // billing_add_cc_request->cc_ccv2
    if(billing_add_cc_request->cc_ccv2) {
    if(cJSON_AddStringToObject(item, "cc_ccv2", billing_add_cc_request->cc_ccv2) == NULL) {
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

billing_add_cc_request_t *billing_add_cc_request_parseFromJSON(cJSON *billing_add_cc_requestJSON){

    billing_add_cc_request_t *billing_add_cc_request_local_var = NULL;

    char *name_local_str = NULL;

    char *address_local_str = NULL;

    char *city_local_str = NULL;

    char *state_local_str = NULL;

    char *country_local_str = NULL;

    char *zip_local_str = NULL;

    char *cc_local_str = NULL;

    char *cc_exp_local_str = NULL;

    char *cc_ccv2_local_str = NULL;

    // billing_add_cc_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->zip
    cJSON *zip = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "zip");
    if (cJSON_IsNull(zip)) {
        zip = NULL;
    }
    if (zip) { 
    if(!cJSON_IsString(zip) && !cJSON_IsNull(zip))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->cc
    cJSON *cc = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "cc");
    if (cJSON_IsNull(cc)) {
        cc = NULL;
    }
    if (cc) { 
    if(!cJSON_IsString(cc) && !cJSON_IsNull(cc))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->cc_exp
    cJSON *cc_exp = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "cc_exp");
    if (cJSON_IsNull(cc_exp)) {
        cc_exp = NULL;
    }
    if (cc_exp) { 
    if(!cJSON_IsString(cc_exp) && !cJSON_IsNull(cc_exp))
    {
    goto end; //String
    }
    }

    // billing_add_cc_request->cc_ccv2
    cJSON *cc_ccv2 = cJSON_GetObjectItemCaseSensitive(billing_add_cc_requestJSON, "cc_ccv2");
    if (cJSON_IsNull(cc_ccv2)) {
        cc_ccv2 = NULL;
    }
    if (cc_ccv2) { 
    if(!cJSON_IsString(cc_ccv2) && !cJSON_IsNull(cc_ccv2))
    {
    goto end; //String
    }
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (address && !cJSON_IsNull(address)) address_local_str = strdup(address->valuestring);
    if (city && !cJSON_IsNull(city)) city_local_str = strdup(city->valuestring);
    if (state && !cJSON_IsNull(state)) state_local_str = strdup(state->valuestring);
    if (country && !cJSON_IsNull(country)) country_local_str = strdup(country->valuestring);
    if (zip && !cJSON_IsNull(zip)) zip_local_str = strdup(zip->valuestring);
    if (cc && !cJSON_IsNull(cc)) cc_local_str = strdup(cc->valuestring);
    if (cc_exp && !cJSON_IsNull(cc_exp)) cc_exp_local_str = strdup(cc_exp->valuestring);
    if (cc_ccv2 && !cJSON_IsNull(cc_ccv2)) cc_ccv2_local_str = strdup(cc_ccv2->valuestring);

    billing_add_cc_request_local_var = billing_add_cc_request_create_internal (
        name_local_str,
        address_local_str,
        city_local_str,
        state_local_str,
        country_local_str,
        zip_local_str,
        cc_local_str,
        cc_exp_local_str,
        cc_ccv2_local_str
        );

    if (!billing_add_cc_request_local_var) {
        goto end;
    }

    return billing_add_cc_request_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (address_local_str) {
        free(address_local_str);
        address_local_str = NULL;
    }
    if (city_local_str) {
        free(city_local_str);
        city_local_str = NULL;
    }
    if (state_local_str) {
        free(state_local_str);
        state_local_str = NULL;
    }
    if (country_local_str) {
        free(country_local_str);
        country_local_str = NULL;
    }
    if (zip_local_str) {
        free(zip_local_str);
        zip_local_str = NULL;
    }
    if (cc_local_str) {
        free(cc_local_str);
        cc_local_str = NULL;
    }
    if (cc_exp_local_str) {
        free(cc_exp_local_str);
        cc_exp_local_str = NULL;
    }
    if (cc_ccv2_local_str) {
        free(cc_ccv2_local_str);
        cc_ccv2_local_str = NULL;
    }
    return NULL;

}
