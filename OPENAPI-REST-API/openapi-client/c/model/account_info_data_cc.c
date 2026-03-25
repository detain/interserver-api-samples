#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_data_cc.h"



static account_info_data_cc_t *account_info_data_cc_create_internal(
    char *cc,
    char *cc_exp,
    char *name,
    char *address,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *maxmind_riskscore,
    account_info_max_mind_response_t *maxmind,
    int *verified
    ) {
    account_info_data_cc_t *account_info_data_cc_local_var = malloc(sizeof(account_info_data_cc_t));
    if (!account_info_data_cc_local_var) {
        return NULL;
    }
    memset(account_info_data_cc_local_var, 0, sizeof(account_info_data_cc_t));
    account_info_data_cc_local_var->_library_owned = 1;
    account_info_data_cc_local_var->cc = cc;
    account_info_data_cc_local_var->cc_exp = cc_exp;
    account_info_data_cc_local_var->name = name;
    account_info_data_cc_local_var->address = address;
    account_info_data_cc_local_var->city = city;
    account_info_data_cc_local_var->state = state;
    account_info_data_cc_local_var->zip = zip;
    account_info_data_cc_local_var->country = country;
    account_info_data_cc_local_var->maxmind_riskscore = maxmind_riskscore;
    account_info_data_cc_local_var->maxmind = maxmind;
    account_info_data_cc_local_var->verified = verified;
    return account_info_data_cc_local_var;
}

__attribute__((deprecated)) account_info_data_cc_t *account_info_data_cc_create(
    char *cc,
    char *cc_exp,
    char *name,
    char *address,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *maxmind_riskscore,
    account_info_max_mind_response_t *maxmind,
    int *verified
    ) {
    int *verified_copy = NULL;
    if (verified) {
        verified_copy = malloc(sizeof(int));
        if (verified_copy) *verified_copy = *verified;
    }
    account_info_data_cc_t *result = account_info_data_cc_create_internal (
        cc,
        cc_exp,
        name,
        address,
        city,
        state,
        zip,
        country,
        maxmind_riskscore,
        maxmind,
        verified_copy
        );
    if (!result) {
        free(verified_copy);
    }
    return result;
}

void account_info_data_cc_free(account_info_data_cc_t *account_info_data_cc) {
    if(NULL == account_info_data_cc){
        return ;
    }
    if(account_info_data_cc->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_data_cc_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_data_cc->cc) {
        free(account_info_data_cc->cc);
        account_info_data_cc->cc = NULL;
    }
    if (account_info_data_cc->cc_exp) {
        free(account_info_data_cc->cc_exp);
        account_info_data_cc->cc_exp = NULL;
    }
    if (account_info_data_cc->name) {
        free(account_info_data_cc->name);
        account_info_data_cc->name = NULL;
    }
    if (account_info_data_cc->address) {
        free(account_info_data_cc->address);
        account_info_data_cc->address = NULL;
    }
    if (account_info_data_cc->city) {
        free(account_info_data_cc->city);
        account_info_data_cc->city = NULL;
    }
    if (account_info_data_cc->state) {
        free(account_info_data_cc->state);
        account_info_data_cc->state = NULL;
    }
    if (account_info_data_cc->zip) {
        free(account_info_data_cc->zip);
        account_info_data_cc->zip = NULL;
    }
    if (account_info_data_cc->country) {
        free(account_info_data_cc->country);
        account_info_data_cc->country = NULL;
    }
    if (account_info_data_cc->maxmind_riskscore) {
        free(account_info_data_cc->maxmind_riskscore);
        account_info_data_cc->maxmind_riskscore = NULL;
    }
    if (account_info_data_cc->maxmind) {
        account_info_max_mind_response_free(account_info_data_cc->maxmind);
        account_info_data_cc->maxmind = NULL;
    }
    if (account_info_data_cc->verified) {
        free(account_info_data_cc->verified);
        account_info_data_cc->verified = NULL;
    }
    free(account_info_data_cc);
}

cJSON *account_info_data_cc_convertToJSON(account_info_data_cc_t *account_info_data_cc) {
    cJSON *item = cJSON_CreateObject();

    // account_info_data_cc->cc
    if(account_info_data_cc->cc) {
    if(cJSON_AddStringToObject(item, "cc", account_info_data_cc->cc) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->cc_exp
    if(account_info_data_cc->cc_exp) {
    if(cJSON_AddStringToObject(item, "cc_exp", account_info_data_cc->cc_exp) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->name
    if(account_info_data_cc->name) {
    if(cJSON_AddStringToObject(item, "name", account_info_data_cc->name) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->address
    if(account_info_data_cc->address) {
    if(cJSON_AddStringToObject(item, "address", account_info_data_cc->address) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->city
    if(account_info_data_cc->city) {
    if(cJSON_AddStringToObject(item, "city", account_info_data_cc->city) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->state
    if(account_info_data_cc->state) {
    if(cJSON_AddStringToObject(item, "state", account_info_data_cc->state) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->zip
    if(account_info_data_cc->zip) {
    if(cJSON_AddStringToObject(item, "zip", account_info_data_cc->zip) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->country
    if(account_info_data_cc->country) {
    if(cJSON_AddStringToObject(item, "country", account_info_data_cc->country) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->maxmind_riskscore
    if(account_info_data_cc->maxmind_riskscore) {
    if(cJSON_AddStringToObject(item, "maxmind_riskscore", account_info_data_cc->maxmind_riskscore) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_cc->maxmind
    if(account_info_data_cc->maxmind) {
    cJSON *maxmind_local_JSON = account_info_max_mind_response_convertToJSON(account_info_data_cc->maxmind);
    if(maxmind_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "maxmind", maxmind_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info_data_cc->verified
    if(account_info_data_cc->verified) {
    if(cJSON_AddBoolToObject(item, "verified", *account_info_data_cc->verified) == NULL) {
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

account_info_data_cc_t *account_info_data_cc_parseFromJSON(cJSON *account_info_data_ccJSON){

    account_info_data_cc_t *account_info_data_cc_local_var = NULL;

    char *cc_local_str = NULL;

    char *cc_exp_local_str = NULL;

    char *name_local_str = NULL;

    char *address_local_str = NULL;

    char *city_local_str = NULL;

    char *state_local_str = NULL;

    char *zip_local_str = NULL;

    char *country_local_str = NULL;

    char *maxmind_riskscore_local_str = NULL;

    // define the local variable for account_info_data_cc->maxmind
    account_info_max_mind_response_t *maxmind_local_nonprim = NULL;

    // define the local variable for account_info_data_cc->verified
    int *verified_local_var = NULL;

    // account_info_data_cc->cc
    cJSON *cc = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "cc");
    if (cJSON_IsNull(cc)) {
        cc = NULL;
    }
    if (cc) { 
    if(!cJSON_IsString(cc) && !cJSON_IsNull(cc))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->cc_exp
    cJSON *cc_exp = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "cc_exp");
    if (cJSON_IsNull(cc_exp)) {
        cc_exp = NULL;
    }
    if (cc_exp) { 
    if(!cJSON_IsString(cc_exp) && !cJSON_IsNull(cc_exp))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->zip
    cJSON *zip = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "zip");
    if (cJSON_IsNull(zip)) {
        zip = NULL;
    }
    if (zip) { 
    if(!cJSON_IsString(zip) && !cJSON_IsNull(zip))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->maxmind_riskscore
    cJSON *maxmind_riskscore = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "maxmind_riskscore");
    if (cJSON_IsNull(maxmind_riskscore)) {
        maxmind_riskscore = NULL;
    }
    if (maxmind_riskscore) { 
    if(!cJSON_IsString(maxmind_riskscore) && !cJSON_IsNull(maxmind_riskscore))
    {
    goto end; //String
    }
    }

    // account_info_data_cc->maxmind
    cJSON *maxmind = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "maxmind");
    if (cJSON_IsNull(maxmind)) {
        maxmind = NULL;
    }
    if (maxmind) { 
    maxmind_local_nonprim = account_info_max_mind_response_parseFromJSON(maxmind); //nonprimitive
    }

    // account_info_data_cc->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(account_info_data_ccJSON, "verified");
    if (cJSON_IsNull(verified)) {
        verified = NULL;
    }
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    verified_local_var = malloc(sizeof(int));
    if(!verified_local_var)
    {
        goto end;
    }
    *verified_local_var = verified->valueint;
    }


    if (cc && !cJSON_IsNull(cc)) cc_local_str = strdup(cc->valuestring);
    if (cc_exp && !cJSON_IsNull(cc_exp)) cc_exp_local_str = strdup(cc_exp->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (address && !cJSON_IsNull(address)) address_local_str = strdup(address->valuestring);
    if (city && !cJSON_IsNull(city)) city_local_str = strdup(city->valuestring);
    if (state && !cJSON_IsNull(state)) state_local_str = strdup(state->valuestring);
    if (zip && !cJSON_IsNull(zip)) zip_local_str = strdup(zip->valuestring);
    if (country && !cJSON_IsNull(country)) country_local_str = strdup(country->valuestring);
    if (maxmind_riskscore && !cJSON_IsNull(maxmind_riskscore)) maxmind_riskscore_local_str = strdup(maxmind_riskscore->valuestring);

    account_info_data_cc_local_var = account_info_data_cc_create_internal (
        cc_local_str,
        cc_exp_local_str,
        name_local_str,
        address_local_str,
        city_local_str,
        state_local_str,
        zip_local_str,
        country_local_str,
        maxmind_riskscore_local_str,
        maxmind ? maxmind_local_nonprim : NULL,
        verified_local_var
        );

    if (!account_info_data_cc_local_var) {
        goto end;
    }

    return account_info_data_cc_local_var;
end:
    if (cc_local_str) {
        free(cc_local_str);
        cc_local_str = NULL;
    }
    if (cc_exp_local_str) {
        free(cc_exp_local_str);
        cc_exp_local_str = NULL;
    }
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
    if (zip_local_str) {
        free(zip_local_str);
        zip_local_str = NULL;
    }
    if (country_local_str) {
        free(country_local_str);
        country_local_str = NULL;
    }
    if (maxmind_riskscore_local_str) {
        free(maxmind_riskscore_local_str);
        maxmind_riskscore_local_str = NULL;
    }
    if (maxmind_local_nonprim) {
        account_info_max_mind_response_free(maxmind_local_nonprim);
        maxmind_local_nonprim = NULL;
    }
    if (verified_local_var) {
        free(verified_local_var);
        verified_local_var = NULL;
    }
    return NULL;

}
