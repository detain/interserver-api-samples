#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_whois_privacy_request.h"



static domain_whois_privacy_request_t *domain_whois_privacy_request_create_internal(
    char *func,
    char *csrf_token,
    char *domain_firstname,
    char *domain_lastname,
    char *domain_email,
    char *domain_address,
    char *domain_address2,
    char *domain_address3,
    char *domain_city,
    char *domain_state,
    char *domain_zip,
    char *domain_country,
    char *domain_phone,
    char *domain_fax,
    char *domain_company,
    char *domain_extra
    ) {
    domain_whois_privacy_request_t *domain_whois_privacy_request_local_var = malloc(sizeof(domain_whois_privacy_request_t));
    if (!domain_whois_privacy_request_local_var) {
        return NULL;
    }
    domain_whois_privacy_request_local_var->func = func;
    domain_whois_privacy_request_local_var->csrf_token = csrf_token;
    domain_whois_privacy_request_local_var->domain_firstname = domain_firstname;
    domain_whois_privacy_request_local_var->domain_lastname = domain_lastname;
    domain_whois_privacy_request_local_var->domain_email = domain_email;
    domain_whois_privacy_request_local_var->domain_address = domain_address;
    domain_whois_privacy_request_local_var->domain_address2 = domain_address2;
    domain_whois_privacy_request_local_var->domain_address3 = domain_address3;
    domain_whois_privacy_request_local_var->domain_city = domain_city;
    domain_whois_privacy_request_local_var->domain_state = domain_state;
    domain_whois_privacy_request_local_var->domain_zip = domain_zip;
    domain_whois_privacy_request_local_var->domain_country = domain_country;
    domain_whois_privacy_request_local_var->domain_phone = domain_phone;
    domain_whois_privacy_request_local_var->domain_fax = domain_fax;
    domain_whois_privacy_request_local_var->domain_company = domain_company;
    domain_whois_privacy_request_local_var->domain_extra = domain_extra;

    domain_whois_privacy_request_local_var->_library_owned = 1;
    return domain_whois_privacy_request_local_var;
}

__attribute__((deprecated)) domain_whois_privacy_request_t *domain_whois_privacy_request_create(
    char *func,
    char *csrf_token,
    char *domain_firstname,
    char *domain_lastname,
    char *domain_email,
    char *domain_address,
    char *domain_address2,
    char *domain_address3,
    char *domain_city,
    char *domain_state,
    char *domain_zip,
    char *domain_country,
    char *domain_phone,
    char *domain_fax,
    char *domain_company,
    char *domain_extra
    ) {
    return domain_whois_privacy_request_create_internal (
        func,
        csrf_token,
        domain_firstname,
        domain_lastname,
        domain_email,
        domain_address,
        domain_address2,
        domain_address3,
        domain_city,
        domain_state,
        domain_zip,
        domain_country,
        domain_phone,
        domain_fax,
        domain_company,
        domain_extra
        );
}

void domain_whois_privacy_request_free(domain_whois_privacy_request_t *domain_whois_privacy_request) {
    if(NULL == domain_whois_privacy_request){
        return ;
    }
    if(domain_whois_privacy_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_whois_privacy_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_whois_privacy_request->func) {
        free(domain_whois_privacy_request->func);
        domain_whois_privacy_request->func = NULL;
    }
    if (domain_whois_privacy_request->csrf_token) {
        free(domain_whois_privacy_request->csrf_token);
        domain_whois_privacy_request->csrf_token = NULL;
    }
    if (domain_whois_privacy_request->domain_firstname) {
        free(domain_whois_privacy_request->domain_firstname);
        domain_whois_privacy_request->domain_firstname = NULL;
    }
    if (domain_whois_privacy_request->domain_lastname) {
        free(domain_whois_privacy_request->domain_lastname);
        domain_whois_privacy_request->domain_lastname = NULL;
    }
    if (domain_whois_privacy_request->domain_email) {
        free(domain_whois_privacy_request->domain_email);
        domain_whois_privacy_request->domain_email = NULL;
    }
    if (domain_whois_privacy_request->domain_address) {
        free(domain_whois_privacy_request->domain_address);
        domain_whois_privacy_request->domain_address = NULL;
    }
    if (domain_whois_privacy_request->domain_address2) {
        free(domain_whois_privacy_request->domain_address2);
        domain_whois_privacy_request->domain_address2 = NULL;
    }
    if (domain_whois_privacy_request->domain_address3) {
        free(domain_whois_privacy_request->domain_address3);
        domain_whois_privacy_request->domain_address3 = NULL;
    }
    if (domain_whois_privacy_request->domain_city) {
        free(domain_whois_privacy_request->domain_city);
        domain_whois_privacy_request->domain_city = NULL;
    }
    if (domain_whois_privacy_request->domain_state) {
        free(domain_whois_privacy_request->domain_state);
        domain_whois_privacy_request->domain_state = NULL;
    }
    if (domain_whois_privacy_request->domain_zip) {
        free(domain_whois_privacy_request->domain_zip);
        domain_whois_privacy_request->domain_zip = NULL;
    }
    if (domain_whois_privacy_request->domain_country) {
        free(domain_whois_privacy_request->domain_country);
        domain_whois_privacy_request->domain_country = NULL;
    }
    if (domain_whois_privacy_request->domain_phone) {
        free(domain_whois_privacy_request->domain_phone);
        domain_whois_privacy_request->domain_phone = NULL;
    }
    if (domain_whois_privacy_request->domain_fax) {
        free(domain_whois_privacy_request->domain_fax);
        domain_whois_privacy_request->domain_fax = NULL;
    }
    if (domain_whois_privacy_request->domain_company) {
        free(domain_whois_privacy_request->domain_company);
        domain_whois_privacy_request->domain_company = NULL;
    }
    if (domain_whois_privacy_request->domain_extra) {
        free(domain_whois_privacy_request->domain_extra);
        domain_whois_privacy_request->domain_extra = NULL;
    }
    free(domain_whois_privacy_request);
}

cJSON *domain_whois_privacy_request_convertToJSON(domain_whois_privacy_request_t *domain_whois_privacy_request) {
    cJSON *item = cJSON_CreateObject();

    // domain_whois_privacy_request->func
    if(domain_whois_privacy_request->func) {
    if(cJSON_AddStringToObject(item, "func", domain_whois_privacy_request->func) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->csrf_token
    if(domain_whois_privacy_request->csrf_token) {
    if(cJSON_AddStringToObject(item, "csrf_token", domain_whois_privacy_request->csrf_token) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_firstname
    if(domain_whois_privacy_request->domain_firstname) {
    if(cJSON_AddStringToObject(item, "domain_firstname", domain_whois_privacy_request->domain_firstname) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_lastname
    if(domain_whois_privacy_request->domain_lastname) {
    if(cJSON_AddStringToObject(item, "domain_lastname", domain_whois_privacy_request->domain_lastname) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_email
    if(domain_whois_privacy_request->domain_email) {
    if(cJSON_AddStringToObject(item, "domain_email", domain_whois_privacy_request->domain_email) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_address
    if(domain_whois_privacy_request->domain_address) {
    if(cJSON_AddStringToObject(item, "domain_address", domain_whois_privacy_request->domain_address) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_address2
    if(domain_whois_privacy_request->domain_address2) {
    if(cJSON_AddStringToObject(item, "domain_address2", domain_whois_privacy_request->domain_address2) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_address3
    if(domain_whois_privacy_request->domain_address3) {
    if(cJSON_AddStringToObject(item, "domain_address3", domain_whois_privacy_request->domain_address3) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_city
    if(domain_whois_privacy_request->domain_city) {
    if(cJSON_AddStringToObject(item, "domain_city", domain_whois_privacy_request->domain_city) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_state
    if(domain_whois_privacy_request->domain_state) {
    if(cJSON_AddStringToObject(item, "domain_state", domain_whois_privacy_request->domain_state) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_zip
    if(domain_whois_privacy_request->domain_zip) {
    if(cJSON_AddStringToObject(item, "domain_zip", domain_whois_privacy_request->domain_zip) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_country
    if(domain_whois_privacy_request->domain_country) {
    if(cJSON_AddStringToObject(item, "domain_country", domain_whois_privacy_request->domain_country) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_phone
    if(domain_whois_privacy_request->domain_phone) {
    if(cJSON_AddStringToObject(item, "domain_phone", domain_whois_privacy_request->domain_phone) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_fax
    if(domain_whois_privacy_request->domain_fax) {
    if(cJSON_AddStringToObject(item, "domain_fax", domain_whois_privacy_request->domain_fax) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_company
    if(domain_whois_privacy_request->domain_company) {
    if(cJSON_AddStringToObject(item, "domain_company", domain_whois_privacy_request->domain_company) == NULL) {
    goto fail; //String
    }
    }


    // domain_whois_privacy_request->domain_extra
    if(domain_whois_privacy_request->domain_extra) {
    if(cJSON_AddStringToObject(item, "domain_extra", domain_whois_privacy_request->domain_extra) == NULL) {
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

domain_whois_privacy_request_t *domain_whois_privacy_request_parseFromJSON(cJSON *domain_whois_privacy_requestJSON){

    domain_whois_privacy_request_t *domain_whois_privacy_request_local_var = NULL;

    // domain_whois_privacy_request->func
    cJSON *func = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "func");
    if (cJSON_IsNull(func)) {
        func = NULL;
    }
    if (func) { 
    if(!cJSON_IsString(func) && !cJSON_IsNull(func))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->csrf_token
    cJSON *csrf_token = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "csrf_token");
    if (cJSON_IsNull(csrf_token)) {
        csrf_token = NULL;
    }
    if (csrf_token) { 
    if(!cJSON_IsString(csrf_token) && !cJSON_IsNull(csrf_token))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_firstname
    cJSON *domain_firstname = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_firstname");
    if (cJSON_IsNull(domain_firstname)) {
        domain_firstname = NULL;
    }
    if (domain_firstname) { 
    if(!cJSON_IsString(domain_firstname) && !cJSON_IsNull(domain_firstname))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_lastname
    cJSON *domain_lastname = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_lastname");
    if (cJSON_IsNull(domain_lastname)) {
        domain_lastname = NULL;
    }
    if (domain_lastname) { 
    if(!cJSON_IsString(domain_lastname) && !cJSON_IsNull(domain_lastname))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_email
    cJSON *domain_email = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_email");
    if (cJSON_IsNull(domain_email)) {
        domain_email = NULL;
    }
    if (domain_email) { 
    if(!cJSON_IsString(domain_email) && !cJSON_IsNull(domain_email))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_address
    cJSON *domain_address = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_address");
    if (cJSON_IsNull(domain_address)) {
        domain_address = NULL;
    }
    if (domain_address) { 
    if(!cJSON_IsString(domain_address) && !cJSON_IsNull(domain_address))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_address2
    cJSON *domain_address2 = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_address2");
    if (cJSON_IsNull(domain_address2)) {
        domain_address2 = NULL;
    }
    if (domain_address2) { 
    if(!cJSON_IsString(domain_address2) && !cJSON_IsNull(domain_address2))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_address3
    cJSON *domain_address3 = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_address3");
    if (cJSON_IsNull(domain_address3)) {
        domain_address3 = NULL;
    }
    if (domain_address3) { 
    if(!cJSON_IsString(domain_address3) && !cJSON_IsNull(domain_address3))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_city
    cJSON *domain_city = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_city");
    if (cJSON_IsNull(domain_city)) {
        domain_city = NULL;
    }
    if (domain_city) { 
    if(!cJSON_IsString(domain_city) && !cJSON_IsNull(domain_city))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_state
    cJSON *domain_state = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_state");
    if (cJSON_IsNull(domain_state)) {
        domain_state = NULL;
    }
    if (domain_state) { 
    if(!cJSON_IsString(domain_state) && !cJSON_IsNull(domain_state))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_zip
    cJSON *domain_zip = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_zip");
    if (cJSON_IsNull(domain_zip)) {
        domain_zip = NULL;
    }
    if (domain_zip) { 
    if(!cJSON_IsString(domain_zip) && !cJSON_IsNull(domain_zip))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_country
    cJSON *domain_country = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_country");
    if (cJSON_IsNull(domain_country)) {
        domain_country = NULL;
    }
    if (domain_country) { 
    if(!cJSON_IsString(domain_country) && !cJSON_IsNull(domain_country))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_phone
    cJSON *domain_phone = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_phone");
    if (cJSON_IsNull(domain_phone)) {
        domain_phone = NULL;
    }
    if (domain_phone) { 
    if(!cJSON_IsString(domain_phone) && !cJSON_IsNull(domain_phone))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_fax
    cJSON *domain_fax = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_fax");
    if (cJSON_IsNull(domain_fax)) {
        domain_fax = NULL;
    }
    if (domain_fax) { 
    if(!cJSON_IsString(domain_fax) && !cJSON_IsNull(domain_fax))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_company
    cJSON *domain_company = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_company");
    if (cJSON_IsNull(domain_company)) {
        domain_company = NULL;
    }
    if (domain_company) { 
    if(!cJSON_IsString(domain_company) && !cJSON_IsNull(domain_company))
    {
    goto end; //String
    }
    }

    // domain_whois_privacy_request->domain_extra
    cJSON *domain_extra = cJSON_GetObjectItemCaseSensitive(domain_whois_privacy_requestJSON, "domain_extra");
    if (cJSON_IsNull(domain_extra)) {
        domain_extra = NULL;
    }
    if (domain_extra) { 
    if(!cJSON_IsString(domain_extra) && !cJSON_IsNull(domain_extra))
    {
    goto end; //String
    }
    }


    domain_whois_privacy_request_local_var = domain_whois_privacy_request_create_internal (
        func && !cJSON_IsNull(func) ? strdup(func->valuestring) : NULL,
        csrf_token && !cJSON_IsNull(csrf_token) ? strdup(csrf_token->valuestring) : NULL,
        domain_firstname && !cJSON_IsNull(domain_firstname) ? strdup(domain_firstname->valuestring) : NULL,
        domain_lastname && !cJSON_IsNull(domain_lastname) ? strdup(domain_lastname->valuestring) : NULL,
        domain_email && !cJSON_IsNull(domain_email) ? strdup(domain_email->valuestring) : NULL,
        domain_address && !cJSON_IsNull(domain_address) ? strdup(domain_address->valuestring) : NULL,
        domain_address2 && !cJSON_IsNull(domain_address2) ? strdup(domain_address2->valuestring) : NULL,
        domain_address3 && !cJSON_IsNull(domain_address3) ? strdup(domain_address3->valuestring) : NULL,
        domain_city && !cJSON_IsNull(domain_city) ? strdup(domain_city->valuestring) : NULL,
        domain_state && !cJSON_IsNull(domain_state) ? strdup(domain_state->valuestring) : NULL,
        domain_zip && !cJSON_IsNull(domain_zip) ? strdup(domain_zip->valuestring) : NULL,
        domain_country && !cJSON_IsNull(domain_country) ? strdup(domain_country->valuestring) : NULL,
        domain_phone && !cJSON_IsNull(domain_phone) ? strdup(domain_phone->valuestring) : NULL,
        domain_fax && !cJSON_IsNull(domain_fax) ? strdup(domain_fax->valuestring) : NULL,
        domain_company && !cJSON_IsNull(domain_company) ? strdup(domain_company->valuestring) : NULL,
        domain_extra && !cJSON_IsNull(domain_extra) ? strdup(domain_extra->valuestring) : NULL
        );

    return domain_whois_privacy_request_local_var;
end:
    return NULL;

}
