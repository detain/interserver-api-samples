#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_owner_contact.h"



static domain_owner_contact_t *domain_owner_contact_create_internal(
    char *postal_code,
    char *org_name,
    char *country,
    char *status,
    char *state,
    char *first_name,
    char *last_name,
    char *address3,
    char *fax,
    char *address2,
    char *email,
    char *city,
    char *phone,
    char *address1
    ) {
    domain_owner_contact_t *domain_owner_contact_local_var = malloc(sizeof(domain_owner_contact_t));
    if (!domain_owner_contact_local_var) {
        return NULL;
    }
    memset(domain_owner_contact_local_var, 0, sizeof(domain_owner_contact_t));
    domain_owner_contact_local_var->_library_owned = 1;
    domain_owner_contact_local_var->postal_code = postal_code;
    domain_owner_contact_local_var->org_name = org_name;
    domain_owner_contact_local_var->country = country;
    domain_owner_contact_local_var->status = status;
    domain_owner_contact_local_var->state = state;
    domain_owner_contact_local_var->first_name = first_name;
    domain_owner_contact_local_var->last_name = last_name;
    domain_owner_contact_local_var->address3 = address3;
    domain_owner_contact_local_var->fax = fax;
    domain_owner_contact_local_var->address2 = address2;
    domain_owner_contact_local_var->email = email;
    domain_owner_contact_local_var->city = city;
    domain_owner_contact_local_var->phone = phone;
    domain_owner_contact_local_var->address1 = address1;
    return domain_owner_contact_local_var;
}

__attribute__((deprecated)) domain_owner_contact_t *domain_owner_contact_create(
    char *postal_code,
    char *org_name,
    char *country,
    char *status,
    char *state,
    char *first_name,
    char *last_name,
    char *address3,
    char *fax,
    char *address2,
    char *email,
    char *city,
    char *phone,
    char *address1
    ) {
    domain_owner_contact_t *result = domain_owner_contact_create_internal (
        postal_code,
        org_name,
        country,
        status,
        state,
        first_name,
        last_name,
        address3,
        fax,
        address2,
        email,
        city,
        phone,
        address1
        );
    if (!result) {
    }
    return result;
}

void domain_owner_contact_free(domain_owner_contact_t *domain_owner_contact) {
    if(NULL == domain_owner_contact){
        return ;
    }
    if(domain_owner_contact->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_owner_contact_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_owner_contact->postal_code) {
        free(domain_owner_contact->postal_code);
        domain_owner_contact->postal_code = NULL;
    }
    if (domain_owner_contact->org_name) {
        free(domain_owner_contact->org_name);
        domain_owner_contact->org_name = NULL;
    }
    if (domain_owner_contact->country) {
        free(domain_owner_contact->country);
        domain_owner_contact->country = NULL;
    }
    if (domain_owner_contact->status) {
        free(domain_owner_contact->status);
        domain_owner_contact->status = NULL;
    }
    if (domain_owner_contact->state) {
        free(domain_owner_contact->state);
        domain_owner_contact->state = NULL;
    }
    if (domain_owner_contact->first_name) {
        free(domain_owner_contact->first_name);
        domain_owner_contact->first_name = NULL;
    }
    if (domain_owner_contact->last_name) {
        free(domain_owner_contact->last_name);
        domain_owner_contact->last_name = NULL;
    }
    if (domain_owner_contact->address3) {
        free(domain_owner_contact->address3);
        domain_owner_contact->address3 = NULL;
    }
    if (domain_owner_contact->fax) {
        free(domain_owner_contact->fax);
        domain_owner_contact->fax = NULL;
    }
    if (domain_owner_contact->address2) {
        free(domain_owner_contact->address2);
        domain_owner_contact->address2 = NULL;
    }
    if (domain_owner_contact->email) {
        free(domain_owner_contact->email);
        domain_owner_contact->email = NULL;
    }
    if (domain_owner_contact->city) {
        free(domain_owner_contact->city);
        domain_owner_contact->city = NULL;
    }
    if (domain_owner_contact->phone) {
        free(domain_owner_contact->phone);
        domain_owner_contact->phone = NULL;
    }
    if (domain_owner_contact->address1) {
        free(domain_owner_contact->address1);
        domain_owner_contact->address1 = NULL;
    }
    free(domain_owner_contact);
}

cJSON *domain_owner_contact_convertToJSON(domain_owner_contact_t *domain_owner_contact) {
    cJSON *item = cJSON_CreateObject();

    // domain_owner_contact->postal_code
    if(domain_owner_contact->postal_code) {
    if(cJSON_AddStringToObject(item, "postal_code", domain_owner_contact->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->org_name
    if(domain_owner_contact->org_name) {
    if(cJSON_AddStringToObject(item, "org_name", domain_owner_contact->org_name) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->country
    if(domain_owner_contact->country) {
    if(cJSON_AddStringToObject(item, "country", domain_owner_contact->country) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->status
    if(domain_owner_contact->status) {
    if(cJSON_AddStringToObject(item, "status", domain_owner_contact->status) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->state
    if(domain_owner_contact->state) {
    if(cJSON_AddStringToObject(item, "state", domain_owner_contact->state) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->first_name
    if(domain_owner_contact->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", domain_owner_contact->first_name) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->last_name
    if(domain_owner_contact->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", domain_owner_contact->last_name) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->address3
    if(domain_owner_contact->address3) {
    if(cJSON_AddStringToObject(item, "address3", domain_owner_contact->address3) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->fax
    if(domain_owner_contact->fax) {
    if(cJSON_AddStringToObject(item, "fax", domain_owner_contact->fax) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->address2
    if(domain_owner_contact->address2) {
    if(cJSON_AddStringToObject(item, "address2", domain_owner_contact->address2) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->email
    if(domain_owner_contact->email) {
    if(cJSON_AddStringToObject(item, "email", domain_owner_contact->email) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->city
    if(domain_owner_contact->city) {
    if(cJSON_AddStringToObject(item, "city", domain_owner_contact->city) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->phone
    if(domain_owner_contact->phone) {
    if(cJSON_AddStringToObject(item, "phone", domain_owner_contact->phone) == NULL) {
    goto fail; //String
    }
    }


    // domain_owner_contact->address1
    if(domain_owner_contact->address1) {
    if(cJSON_AddStringToObject(item, "address1", domain_owner_contact->address1) == NULL) {
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

domain_owner_contact_t *domain_owner_contact_parseFromJSON(cJSON *domain_owner_contactJSON){

    domain_owner_contact_t *domain_owner_contact_local_var = NULL;

    char *postal_code_local_str = NULL;

    char *org_name_local_str = NULL;

    char *country_local_str = NULL;

    char *status_local_str = NULL;

    char *state_local_str = NULL;

    char *first_name_local_str = NULL;

    char *last_name_local_str = NULL;

    char *address3_local_str = NULL;

    char *fax_local_str = NULL;

    char *address2_local_str = NULL;

    char *email_local_str = NULL;

    char *city_local_str = NULL;

    char *phone_local_str = NULL;

    char *address1_local_str = NULL;

    // domain_owner_contact->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "postal_code");
    if (cJSON_IsNull(postal_code)) {
        postal_code = NULL;
    }
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->org_name
    cJSON *org_name = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "org_name");
    if (cJSON_IsNull(org_name)) {
        org_name = NULL;
    }
    if (org_name) { 
    if(!cJSON_IsString(org_name) && !cJSON_IsNull(org_name))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "address3");
    if (cJSON_IsNull(address3)) {
        address3 = NULL;
    }
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->fax
    cJSON *fax = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "fax");
    if (cJSON_IsNull(fax)) {
        fax = NULL;
    }
    if (fax) { 
    if(!cJSON_IsString(fax) && !cJSON_IsNull(fax))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // domain_owner_contact->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(domain_owner_contactJSON, "address1");
    if (cJSON_IsNull(address1)) {
        address1 = NULL;
    }
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }


    if (postal_code && !cJSON_IsNull(postal_code)) postal_code_local_str = strdup(postal_code->valuestring);
    if (org_name && !cJSON_IsNull(org_name)) org_name_local_str = strdup(org_name->valuestring);
    if (country && !cJSON_IsNull(country)) country_local_str = strdup(country->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (state && !cJSON_IsNull(state)) state_local_str = strdup(state->valuestring);
    if (first_name && !cJSON_IsNull(first_name)) first_name_local_str = strdup(first_name->valuestring);
    if (last_name && !cJSON_IsNull(last_name)) last_name_local_str = strdup(last_name->valuestring);
    if (address3 && !cJSON_IsNull(address3)) address3_local_str = strdup(address3->valuestring);
    if (fax && !cJSON_IsNull(fax)) fax_local_str = strdup(fax->valuestring);
    if (address2 && !cJSON_IsNull(address2)) address2_local_str = strdup(address2->valuestring);
    if (email && !cJSON_IsNull(email)) email_local_str = strdup(email->valuestring);
    if (city && !cJSON_IsNull(city)) city_local_str = strdup(city->valuestring);
    if (phone && !cJSON_IsNull(phone)) phone_local_str = strdup(phone->valuestring);
    if (address1 && !cJSON_IsNull(address1)) address1_local_str = strdup(address1->valuestring);

    domain_owner_contact_local_var = domain_owner_contact_create_internal (
        postal_code_local_str,
        org_name_local_str,
        country_local_str,
        status_local_str,
        state_local_str,
        first_name_local_str,
        last_name_local_str,
        address3_local_str,
        fax_local_str,
        address2_local_str,
        email_local_str,
        city_local_str,
        phone_local_str,
        address1_local_str
        );

    if (!domain_owner_contact_local_var) {
        goto end;
    }

    return domain_owner_contact_local_var;
end:
    if (postal_code_local_str) {
        free(postal_code_local_str);
        postal_code_local_str = NULL;
    }
    if (org_name_local_str) {
        free(org_name_local_str);
        org_name_local_str = NULL;
    }
    if (country_local_str) {
        free(country_local_str);
        country_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (state_local_str) {
        free(state_local_str);
        state_local_str = NULL;
    }
    if (first_name_local_str) {
        free(first_name_local_str);
        first_name_local_str = NULL;
    }
    if (last_name_local_str) {
        free(last_name_local_str);
        last_name_local_str = NULL;
    }
    if (address3_local_str) {
        free(address3_local_str);
        address3_local_str = NULL;
    }
    if (fax_local_str) {
        free(fax_local_str);
        fax_local_str = NULL;
    }
    if (address2_local_str) {
        free(address2_local_str);
        address2_local_str = NULL;
    }
    if (email_local_str) {
        free(email_local_str);
        email_local_str = NULL;
    }
    if (city_local_str) {
        free(city_local_str);
        city_local_str = NULL;
    }
    if (phone_local_str) {
        free(phone_local_str);
        phone_local_str = NULL;
    }
    if (address1_local_str) {
        free(address1_local_str);
        address1_local_str = NULL;
    }
    return NULL;

}
